#include <iostream>
extern int out_value;
extern int inside_value;
int main(){
    std::cout << out_value << std::endl;    //should print 20
    std::cout << inside_value << std::endl; //should cause compile error, since inside_value is static(internal)
    return 0;
}