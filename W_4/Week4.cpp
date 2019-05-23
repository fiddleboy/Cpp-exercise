#include <iostream>
//>>>
//Global Variable and Scopes

//>>> Define a global variable here
int value {20};

//>>>
//Internal and External Variables
//Variables with internal linkage can be used anywhere within the file they are defined in, but can not be referenced outside the file they exist in.
//Variables with external linkage can be used both in the file they are defined in, as well as in other files.
//By default, non-const variables declared outside of a function are assumed to be external. 
//However, const variables declared outside of a function are assumed to be internal.
//Internal: using static
// static int inside_value{25}; //Only test for fun, this will caue error when u run the main in global.cpp

//External: using extern; In the other files(where u want to use this variable), also use extern to access this variable
int out_value{20};

//>>>
//Function Linkage
//Functions always default to external linkage, but can be set to internal linkage via the static keyword.


int main(){

    int value {30};
    std::cout << value << std::endl;    //should be 30, local scope
    std::cout << ::value << std::endl;  //should be 20, global scope

    // std:cout << inside_value << std::endl;
    std::cout << out_value << std::endl;

    return 0;
}