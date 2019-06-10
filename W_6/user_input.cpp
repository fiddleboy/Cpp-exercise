#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x;
    std::cin >> x;
    std::cin.ignore(32767, '\n');   // clear (up to 32767) characters out of the buffer until a '\n' character is removed
    return x;
}

int main(){
    std::cout << getDouble() << '\n';
    return 0;
}