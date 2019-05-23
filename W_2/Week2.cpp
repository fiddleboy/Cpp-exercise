#include <iostream>
//Function Calls
//Warning: The C++ specification does not define whether function calls evaluate arguments left to right or right to left. Take care not to make function calls where argument order matters.
//Function prototype: same as in C
//
//In C++, a namespace is a grouping of identifiers that is used to reduce the possibility of naming collisions.
//It turns out that std::cout‘s name isn’t really std::cout. It’s actually just cout, and std is the name of the namespace
//In modern C++, all of the functionality in the C++ standard library is now defined inside namespace std (short for standard).


int main(){
    
// #if 0       // Don't compile anything starting here
//     std::cout << "Yeah";
// #endif      //until this point
//     std::cout << "Works fine\n";

    std::cout << "The size of \\t is: " << sizeof('\n') << " bytes.\n";
    return 0;
}