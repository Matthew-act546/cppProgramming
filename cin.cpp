#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)


int main() {
    std::string name;
    int age;
    double weight;
    char sex;
    bool isStudent;

    std::cout << "What is your name?: ";
    std::getline(std::cin >> std::ws, name); // for inputting a whitespaces

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "What is your gender?: ";
    std::cin >> sex;

    std::cout << "Are you a Student?: ";
    std::cin >> isStudent;

    std::cout << "Your name is " << name << std::endl;
    std::cout << "Your age is " << age << std::endl;
    std::cout << "Your gender is " << sex << std::endl;
    std::cout << "You're a Student?:" << isStudent << std::endl;

    return 0;
}