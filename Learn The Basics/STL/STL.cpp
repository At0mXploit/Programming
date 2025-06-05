#include <bits/stdc++.h> // Includes all standard C++ headers (used in contests)
using namespace std;

// Custom comparator function to sort pairs by second value
bool customComparator(pair<int, int>& a, pair<int, int>& b) {
    return a.second < b.second;  // Sort in ascending order of second value
}

void stlExamples() {

    // 1. PAIR - a container to store two values
    pair<int, int> p = {1, 2};
    cout << "Pair: " << p.first << ", " << p.second << "\n";

    // Nested pair example: a pair inside a pair
    pair<int, pair<int, int>> nested = {1, {2, 3}};
    cout << "Nested pair: " << nested.first << ", " << nested.second.first << ", " << nested.second.second << "\n";

    // 2. VECTOR - dynamic array that resizes automatically
    vector<int> v = {10, 20, 30};  // Initializes vector with 3 values
    v.push_back(40);               // Adds 40 to the end
    v.pop_back();                  // Removes the last element (40)
    cout << "Vector elements: ";
    for (int x : v) cout << x << " "; // Prints 10 20 30
    cout << "\n";

    // 3. VECTOR OF PAIRS - useful in sorting with multiple keys
    vector<pair<int, int>> vp = {{1, 2}, {3, 4}};
    sort(vp.begin(), vp.end(), customComparator); // Sort by second value

    // 4. SET - stores unique elements in sorted order (ascending by default)
    set<int> s = {3, 1, 2, 2}; // 2 will be stored only once
    s.insert(0);               // Adds 0
    cout << "Set: ";
    for (int x : s) cout << x << " "; // Prints 0 1 2 3
    cout << "\n";

    // 5. MULTISET - stores duplicate elements in sorted order
    multiset<int> ms = {1, 2, 2, 3}; // All 2s are allowed
    ms.erase(ms.find(2)); // Erases one instance of 2
    cout << "Multiset: ";
    for (int x : ms) cout << x << " "; // Prints 1 2 3
    cout << "\n";

    // 6. UNORDERED SET - stores unique elements, no specific order
    unordered_set<int> us = {1, 2, 3, 3};
    us.insert(4); // Fast insert and lookup (average O(1))

    // 7. MAP - stores key-value pairs in sorted order of keys
    map<string, int> mp;
    mp["apple"] = 3;
    mp["banana"] = 2;
    for (auto it : mp) {
        cout << "Map: " << it.first << " -> " << it.second << "\n";
    }

    // 8. MULTIMAP - allows multiple values for the same key
    multimap<string, int> mmp;
    mmp.insert({"apple", 1});
    mmp.insert({"apple", 2}); // Both values are stored

    // 9. UNORDERED MAP - key-value pairs, no order, faster average time
    unordered_map<string, int> ump;
    ump["one"] = 1;
    ump["two"] = 2;

    // 10. STACK - last-in-first-out (LIFO) structure
    stack<int> st;
    st.push(1);       // Stack: [1]
    st.push(2);       // Stack: [1, 2]
    cout << "Top of stack: " << st.top() << "\n"; // Outputs 2
    st.pop();         // Removes 2

    // 11. QUEUE - first-in-first-out (FIFO) structure
    queue<int> q;
    q.push(10);       // Queue: [10]
    q.push(20);       // Queue: [10, 20]
    cout << "Front of queue: " << q.front() << "\n"; // Outputs 10
    q.pop();          // Removes 10

    // 12. PRIORITY QUEUE - by default max heap (largest at top)
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    cout << "Max element: " << pq.top() << "\n"; // Outputs 5

    // Min heap using greater<int>
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5);
    minpq.push(1);
    cout << "Min element: " << minpq.top() << "\n"; // Outputs 1

    // 13. DEQUE - double-ended queue (can push/pop from front and back)
    deque<int> dq = {1, 2, 3};
    dq.push_front(0); // Now: [0, 1, 2, 3]
    dq.push_back(4);  // Now: [0, 1, 2, 3, 4]
    dq.pop_front();   // Removes 0

    // 14. ALGORITHMS - common STL functions
    vector<int> a = {5, 3, 1, 4, 2};
    sort(a.begin(), a.end());         // Sorts ascending
    reverse(a.begin(), a.end());      // Reverses the vector
    cout << "Sorted & reversed: ";
    for (int x : a) cout << x << " "; // Prints 5 4 3 2 1
    cout << "\n";

    // 15. FIND and COUNT - search and count values
    if (find(a.begin(), a.end(), 3) != a.end()) {
        cout << "3 is in the vector\n";
    }
    cout << "Count of 3: " << count(a.begin(), a.end(), 3) << "\n";

    // 16. LOWER_BOUND and UPPER_BOUND - for sorted ranges
    sort(a.begin(), a.end()); // Needed before using these
    cout << "Lower bound of 3: " << (lower_bound(a.begin(), a.end(), 3) - a.begin()) << "\n";
    cout << "Upper bound of 3: " << (upper_bound(a.begin(), a.end(), 3) - a.begin()) << "\n";

    // 17. LAMBDA FUNCTION with sort - inline comparator for flexibility
    vector<pair<int, int>> vpp = {{1, 2}, {2, 1}, {4, 3}};
    sort(vpp.begin(), vpp.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second < b.second; // Sort by second value
    });

    // 18. ITERATORS - general-purpose object to traverse containers
    cout << "Using iterator on vector: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // Dereference to get value
    }
    cout << "\n";
}

int main() {
    stlExamples();
    return 0;
}
