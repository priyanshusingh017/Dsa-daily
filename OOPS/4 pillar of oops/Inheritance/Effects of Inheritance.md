# Effects of Inheritance (Notes)

## Static Members
- Belong to the class, not objects.
- Shared across all instances.
- Not inherited traditionally; accessible via `className::staticMember`.

## Friend Functions & Classes
- Allow access to private/protected members.
- Not inherited by derived classes.
- Friends of base class ≠ friends of derived class.

## Constructors & Destructors
- Not inherited by derived class.
- Base class constructor called first, then derived class constructor.
- Destructors called in reverse order.
- Can manually call base constructors/destructors in derived class.
- Compiler generates default constructors/destructors if not defined.

## Example

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    static int staticVar;
    int x;
    Base() { cout << "Base constructor\n"; }
    ~Base() { cout << "Base destructor\n"; }
    friend void show(Base&);
};
int Base::staticVar = 10;

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor\n"; }
    ~Derived() { cout << "Derived destructor\n"; }
};

void show(Base& b) {
    cout << "Friend: " << b.x << "\n";
}

int main() {
    Derived d;
    cout << "Static: " << Base::staticVar << "\n";
}
```

### Output
```
Base constructor
Derived constructor
Static: 10
Derived destructor
Base destructor
```