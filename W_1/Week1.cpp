#include <iostream>
using namespace std;

int main() {
    //uniform(brace) initialization
    // int width{5};
    // int length{}; //in this case, length has a value of 0
    //direct initialization
    int fixed(2);
    //copy initializtion & copy declaration
    // int i;
    // i = 10;
    cout << "Hello, World!" << endl;
    cout << "The value of fixed: " << fixed << endl;
    cout << "The end!"<<endl;
    return 0;
}