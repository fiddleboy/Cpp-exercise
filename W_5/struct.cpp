#include <iostream>
#include <string>

int main(){
    struct Employee{
        short id;
        int age;
        float wage;
    };

    struct Company{
        Employee CEO;
        int numberOfEmployees;
    };

    // Company myCompany {{1, 42, 60000.012f}, 12138};
    Company myCompany = {{1, 42, 60000.012f}, 12138};   // same as above;
    std::cout << myCompany.CEO.id << std::endl;

    // If you want to access a struct variable across multiple files, 
    // just use 'extern' as applied to other normal variables
    

    return 0;
}