#include<iostream>
using namespace std;

# define PI 3.14

int main(){

    /*
     Macro is a piece of code in a program that is repalced by value of macro 
     Ex -> define PI 3.14 ;
     not extra stroge needed . 

     What are macros in C++?
       Macros in C++ are a feature of the preprocessor, which runs before the actual compilation of your code. 
       They are typically defined using the #define directive.

     Example:
      Whenever the preprocessor sees PI in your code, it replaces it with 3.14159 before compilation.
   
     Common Uses:
      1.Defining constants (like PI above)
      2.Creating simple inline functions (function-like macros)
      3.Conditional compilation (using #ifdef, #ifndef, etc.)
      Gotchas:
       . Macros are replaced by the preprocessor, so they don’t respect C++ scope or type safety.
       . Debugging macro-related issues can be tricky because errors may not point directly to the macro definition.
       . Example of a function-like macro:
      But be careful: macros don’t check types or parentheses, so unexpected results can occur if not used carefully.
   
      Modern C++ Tip:
       Prefer const, constexpr, or inline functions over macros for constants and simple functions, as they are safer and scoped.
    */

    int r=5;

    int area = PI* r * r;
    cout<<area<<endl;

    return 0;
}