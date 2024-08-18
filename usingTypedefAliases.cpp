#include <iostream>

/*
using and typedef - is a reserved uses to create an additional name
                    (aliases) for another data type.
                    New identifier for an existing type
                    Helps with the readibility and reduces typos
                    use when there is a clear benefit
                    Replaced with 'using' (working better w/ templates)
*/
using varString = std::string;
using integer = int;

// using print = std::cout;
// typedef std::string varString;
int main() {
    varString firstName = "Matthew";
    integer age = 18;
    std::cout << firstName << std::endl; 
    std::cout << age << std::endl; 
    return 0;
}