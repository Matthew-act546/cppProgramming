#include <iostream>
/*
namespace - provides a solution for preventing name conflicts
            in large projects. Each entity needs a unique name.
            A namespace allows for identically named entities
            as long as the namespace are different
*/

namespace first {
    int y = 5;
}

namespace second {
    int y = 10;
}

int main() {
    int y = 15;

    std::cout << first::y << std::endl;
    std::cout << second::y << std::endl;
    std::cout << y << std::endl;

    {
        using namespace std;
        cout << "i use the using namespace and it's efficient this is nice!" << endl;
        cout << "i love my baby" << endl;

    }
    
    return 0;
}