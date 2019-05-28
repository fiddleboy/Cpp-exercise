#include <iostream>
#include <string>

int main(){
    // >>>
    // std::cout << "Enter your full name: ";
    // std::string name;
    // std::cin >> name;   // this won't work as expected since std::cin breaks on whitespace

    // std::cout << "Enter your age: ";
    // std::string age;
    // std::cin >> age;    //cin won't wait for us to input 'age'

    // std::cout << "Your name is " << name << " and your age is " << age << std::endl;
    

    // >>>
    // A good way to read a whole line from stdin is std::getline(std::cin, VariableName)
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Your name is: " << name << std::endl;


    // >>>
    //  If reading values with std::cin, it’s a good idea to remove the extraneous newline using std::cin.ignore().
    std::cout << "Pick 1 or 2: ";
	int choice { 0 };
	std::cin >> choice;

	// ignore up to 32767 characters until a \n is removed, 
    // 32767 is the largest signed value guaranteed to fit in a (2-byte) integer on all platforms.
    std::cin.ignore(32767, '\n');


    // String Concatnation
    std::string s1 {"jason"};
    std::string s2 {" is handsome!"};
    std::cout << s1+s2 << std::endl;
    s1+=" is more than handsome";
    std::cout << s1+s2 << std::endl;
    std::cout << s1.length() << std::endl; 
     
    return 0;
}