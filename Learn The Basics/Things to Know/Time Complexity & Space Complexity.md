# Lecture Notes: Time and Space Complexity
## What is **O** in Big-O Notation?

**"O"** stands for **"Order of"** in **Big-O notation**, and it's used to describe the **upper bound** of an algorithm's **time** or **space complexity**.
### Purpose of Big-O:

It tells you **how the algorithm's performance scales** with the size of the input `n`, **in the worst-case scenario**.

## What Is Time and Space Complexity?

In computer science, **time complexity** and **space complexity** are used to analyze the **efficiency** of algorithms.
## Time Complexity

### Definition:
Time complexity describes **how long an algorithm takes to run** as a function of the **input size** `n`.

### Why It Matters:
- Helps compare the performance of algorithms.
- Independent of the system (hardware) running the code.

### Common Time Complexities (Big-O Notation):

| Notation   | Name              | Example                                 |
| ---------- | ----------------- | --------------------------------------- |
| O(1)       | Constant time     | Accessing array element                 |
| O(log n)   | Logarithmic time  | Binary search                           |
| O(n)       | Linear time       | Traversing an array                     |
| O(n log n) | Linearithmic time | Merge sort, Quick sort (avg case)       |
| O(n²)      | Quadratic time    | Nested loops (e.g., Bubble Sort)        |
| O(2ⁿ)      | Exponential time  | Recursive Fibonacci                     |
| O(n!)      | Factorial time    | Solving permutations/Traveling Salesman |
### Example 1: O(n)

```cpp
for(int i = 0; i < n; i++){
    cout << i << " ";
}
```

Loop runs `n` times → O(n)
### Example 2: O(n²)

```c++
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << i << " " << j << endl;
    }
}
```

Nested loop runs `n * n = n²` times → O(n²)
### Example 3: O(log n)

```c++
int binarySearch(int arr[], int n, int key){
    int start = 0, end = n - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}
```
## Tips to Analyze Time Complexity

- Count **loops** → Each loop usually adds a factor of `n`.
    
- Count **recursive calls** → Leads to logarithmic or exponential complexity.
    
- Ignore **constants and lower-order terms** → O(2n + 10) → O(n)
# Lecture Notes: Space Complexity

## What is Space Complexity?

**Space complexity** refers to the **total amount of memory** or space required by an algorithm to run, relative to the input size `n`.

It helps us understand how efficiently an algorithm uses memory.
## Why Space Complexity Matters

- Memory is a limited resource, especially in embedded or real-time systems.
- Optimizing space can improve program performance and scalability.
- Some algorithms with fast time complexity can consume too much space.
## Components of Space Complexity

1. **Input Space**  
   - Memory required to store input values.
   - Typically counted separately unless algorithm modifies the input.

2. **Auxiliary (Temporary) Space**  
   - Memory for temporary variables, data structures (arrays, lists, hashmaps), recursion stacks, etc.

## How to Analyze Space Complexity

To analyze space, consider:
- Variables used
- Data structures allocated
- Recursion stack depth

We express the space complexity using **Big-O notation** just like time complexity.
## Common Space Complexities

| Space Complexity | Meaning                                              | Example                          |
| ---------------- | ---------------------------------------------------- | -------------------------------- |
| O(1)             | Constant space (no matter input size)                | Swapping variables, sum of array |
| O(n)             | Linear space (grows with input)                      | Storing results in new array     |
| O(n²)            | 2D structures like matrices                          | Creating a matrix of size n x n  |
| O(log n)         | Logarithmic (common in recursive divide-and-conquer) | Binary search (recursive)        |

## Examples

### Example 1: O(1) - Constant Space

```cpp
int sum(int arr[], int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += arr[i];
    }
    return total;
}
```

- Uses only one extra variable `total`.
    
- Input array is not modified or copied.
    
- Space complexity = **O(1)**

---