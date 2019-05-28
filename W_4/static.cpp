#include <iostream>

namespace Foo{
    namespace Goo{
        const int i = 5;
    }
}

namespace Boo = Foo::Goo;


//>>> A example to 
void increment(void){
    static int point{1};
    point++;
    std::cout << point << std::endl;
}

//>>> Another example
int generateID(){
    static int employeeID {0};
    return employeeID++;    //employeeID is incremented every time this function is called
}

int main(){
    increment();
    increment();
    increment();

    std::cout << Boo::i << '\n';

    int i = 20;
    int i2 = 3;
    float result = static_cast<float>(i)/i2;
    std::cout << result << std::endl;
    
    return 0;
}