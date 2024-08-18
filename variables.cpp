#include <iostream>

int main() {
    int x; // declaration
    x = 10; // assignment

    int y = 5;
    int sum = x+y;
    
    std::cout << x << " + "; // outputing
    std::cout << y << " = "; 
    std::cout << sum << std::endl; 

    // string can store an alphanumeric texts
    std::string fullName = "Matthew David Fernandez";

    // integer can store a whole number
    int age = 18;

    // char can store only one character
    char middleInitial = 'C';

    // Boolean it's either true or false 
    bool isStudying = true;

    // Double can store a decimal value
    double prevGrades = 93.3;

    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Middle Initial: " << middleInitial << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Studying? " << isStudying << std::endl;
    std::cout << "Previous Grade: " << prevGrades << std::endl;

    return 0;
}