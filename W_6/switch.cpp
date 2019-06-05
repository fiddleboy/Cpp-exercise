#include <iostream>


int main(){

    // You can declare (but not initialize) variables inside the switch, both before and after the case labels.
    switch (4){
        // int a = 1;   this will make compiler yell warning
        int a;
        case 1:
            a=1;
            std::cout << "Case 1: " << a << '\n';
            break;
        case 2:
            // int b=2; this will make compiler yell warning
            std::cout << "Case 2\n";
            int c;
            c=10;
            std::cout << c << '\n';
            break;
        case 3:
            c=8;    // all statements inside the switch are part of the same scope. Thus, a variable defined in one case can be used in another case
            std::cout << c << '\n';
            break;
        case 4:
        {
            int sth = 12;
            std::cout << "Case 4: " << sth << '\n';
        }
        case 5:
            // 
            // std::cout << "num defined in case 4 is: " << sth << '\n';    
            // statement above will cause compile error, since 'sth' has been destoryed at the end of the scope defined above
            break;

    }

    
    
    return 0;
}