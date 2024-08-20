#include <iostream>

int main() {
    //type conversion - conversion a value of one data type to another
    //                  Implicit = automatic
    //                  Explicit = Precede value with new data type 

    int correct = 32;
    int question = 50;
    double answer = correct/(double) question * 100;

    std::cout << answer << "%";
    return 0;
}