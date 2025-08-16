#include <iostream>
#include <vector>
using namespace std;

/*
The move constructor is a recent addition to the family of constructors in 
C++. It is like a copy constructor that constructs the object from 
the already existing objects., but instead of copying the object in the 
new memory, it makes use of move semantics to transfer the ownership of 
the already created object to the new object without creating extra copies.

Example:
*/

#include <iostream>
#include <vector>
using namespace std; 

class MyClass {
private:
    int b;

public:
    // Constructor
    MyClass(int &&a) : b(move(a)) {
        cout << "Move constructor called!" << endl;
    }

    void display() {
            cout << b <<endl;
    }
};

int main() {
    int a = 4;
    MyClass obj1(move(a));  // Move constructor is called

    obj1.display();
    return 0;
}

/*
  Explanation: In the above program he MyClass constructor takes an 
  rvalue reference (int &&a) and moves the value of a into the private 
  member b using std::move. The main function creates an integer a, and 
  +
  then moves it into obj1 by calling the move constructor.
*/