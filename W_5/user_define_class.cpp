#include <iostream>
#include <string>

// An enumerated type (also called an enumeration) is a data type where every possible value is defined as a symbolic constant (called an enumerator).
enum Color
{
    COLOR_BLACK, // assigned 0
    COLOR_RED, // assigned 1
    COLOR_BLUE, // assigned 2
    COLOR_GREEN, // assigned 3
    COLOR_WHITE, // assigned 4
    COLOR_CYAN, // assigned 5
    COLOR_YELLOW, // assigned 6
    COLOR_MAGENTA = 6, // assigned 7
};  //NOTICE: we must need semicolon at the end

int main(){
    Color paint{COLOR_MAGENTA};
    std::cout << paint << std::endl;

    int input;
    std::cout << "Give a num plz: ";
    std::cin >> input;
    Color color = static_cast<Color>(input);    //we cannot assign an integer value to an enum directly
    std::cout << color << std::endl;

    // Trying to assign enumerators from one enum type to another enum type will cause a compile error.

    // With normal enumerations, enumerators are placed in the same scope as the enumeration itself, 
    // so you can typically access enumerators directly (e.g. RED). 
    // However, with enum classes, the strong scoping rules mean that all enumerators are considered part of the enumeration, 
    // so you have to use a scope qualifier to access the enumerator (e.g. Color::RED). 
    // This helps keep name pollution and the potential for name conflicts down.
    enum class Dog{
        Corgi,
        Husky,
    };

    enum class Cat{
        Engshort,
        Tiger,
    };

    // Dog whichOne = Dog::Corgi;
    // Cat thisOne = Cat::Engshort;
    // if(whichOne == thisOne){    //compile error will happen
    //     ;
    // }
    

    // With enum classes, the compiler will no longer implicitly convert enumerator values to integers.
    // std::cout << Cat::Engshort;
    std::cout << "The cat is: " << static_cast<int>(Cat::Engshort) << std::endl;
    
    // >>> 'typedef' and 'using'
    // typedef double distance_t;
    using distance_t = double;  //this decclaration is the same as above 

    

    return 0;
}