/*
 Encapsulation is one of the four fundamental pillars of Object-Oriented Programming (OOP). 
 It refers to the bundling of data (variables) and methods (functions) that operate on the data into a single unit, called a class. 
 Encapsulation restricts direct access to some of an object's components, which is a means of preventing unintended interference and misuse of data. 
 This is typically achieved by making data members private and providing public getter and setter methods to access and modify them.
 Benefits of encapsulation include improved code maintainability, security, and flexibility.
*/

// wrapper of data member ( properties) and functions( method , functions ) into a single unit called as encapsulation ( class ).
//  fully encapsulated class - all data member is marked as private( to protect it access from other object) and get accesed ofit by public getter and setter .

// why ? 
// encapsulation means -> information hiding / data hiding 
// if we want , we can make class - read only 

#include<iostream>
using namespace std;

// Example of encapsulation
class Student {
 private:
    string name;
    int age;
    int height;

 public:
    // Setter methods to modify private members
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void setHeight(int h) {
        height = h;
    }

    // Getter methods to access private members
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    int getHeight() {
        return height;
    }
};

int main() {
    Student std1;
    std1.setName("Alice");
    std1.setAge(20);
    std1.setHeight(165);

    cout << "Name: " << std1.getName() << endl;
    cout << "Age: " << std1.getAge() << endl;
    cout << "Height: " << std1.getHeight() << endl;

    return 0;
}
