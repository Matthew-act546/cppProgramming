#include <iostream>

int main() {
    // declaration
    double pi = 3.1416; // value of pi provided in the pic
    double r = 2.0; // radius of sphere

    double r3 = r * 4.0;// rcube
    
    double v = (4.0/3.0)*pi*r3;// process

    std::cout << v << std::endl; //output
    return 0;
}