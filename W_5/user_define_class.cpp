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
    Color color = static_cast<Color>(input);
    std::cout << color << std::endl;

    // Trying to assign enumerators from one enum type to another enum type will cause a compile error.
    

    return 0;
}