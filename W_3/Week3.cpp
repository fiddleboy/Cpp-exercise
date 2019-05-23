#include <iostream>

int main(){

    // >>>

    // std::cout << false << std::endl;
    // std::cout << std::boolalpha;    //turn alpha mode on
    // std::cout << false << std::endl;
    // std::cout << std::noboolalpha;  //turn alpha mode off
    // std::cout << false << std::endl;


    // >>>
    //CANNOT initialize a Boolean with an integer using uniform initialization
    //bool b{ 4 }; THIS IS WRONG
    //BUT, copy initialization is okay

    // bool b1 = 4;
    // std::cout << b1 << std::endl;


    // >>>
    //It turns out that std::cin only accepts two inputs for Boolean variables: 0 and 1 (not true or false).
    //Any other inputs will cause std::cin to silently fail.

    // bool b{};
    // std::cout << "Give a thing: ";
    // std::cin >> b;
    // std::cout << "The thing u gave is: " << b << '\n';


    // >>>
    //Char
    //NOTE: whatever is left by std::in will be left in input buffer
    //Casting

    char ch{'a'};
    std::cout << static_cast<int>(ch) << std::endl;
    std::cout << ch << std::endl;


    // >>>
    //Defining a const variable without initializing it will also cause a compile error.
    // const int sth;  // THIS IS WRONG
    const double gravity = 9.8;
    constexpr int num = 3; //this variable must be initialized at compile-time, since it has type constexpr
    

    return 0;
}