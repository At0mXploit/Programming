/* Complete the function dataTypeSize() which takes a string as input and returns the size of the data type represented by the given string in byte unit.
Return -1 if the input data type is invalid. */


#include <iostream>
#include <string>

using namespace std;

int dataTypeSize(const string dataType){
    if (dataType == "int"){
        return sizeof(int);
    } else if (dataType == "char"){
        return sizeof(char);
    } else if (dataType == "float"){
        return sizeof(float);
    } else if (dataType == "double"){
        return sizeof(double);
    } else if (dataType == "long"){
        return sizeof(long);
    } else if (dataType == "short"){
        return sizeof(short);
    } else if (dataType == "bool"){
        return sizeof(bool);
    } else {
        return -1; // Invalid data type
    }

  }
    int main(){
      string input;
      cout << "Enter data type: ";
      cin >> input;
      int size = dataTypeSize(input);
      if(size == -1){
        cout << "Invalid data type" << endl;
      } else {
        cout << "Size of " << input << ": " << size << " bytes" << endl;
      }
      return 0;
    }
