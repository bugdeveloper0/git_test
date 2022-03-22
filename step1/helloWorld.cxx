
#include <cmath>
#include <iostream>
#include <string>
#include "helloWorld.h"
int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        std::cout << argv[0] << " Version " << helloWorld_VERSION_MAJOR << ","
            << helloWorld_VERSION_MINOR << std::endl;
        std::cout << "Usage:" << argv[0] << " number" << std::endl;
        return 1;
    }

    const double inputValue = std::stod(argv[1]);

    const double outputValue = sqrt(inputValue);

    std::cout << "The square root of " << inputValue << " is " << outputValue
        << std::endl;
    int a = 10;
    char c = 'c';
    const char word[9] = "a string";
    printf("very few to use printf function %s, %c, %d\n", word, c, a);
    std::cout << "helloWorld\n";
    return 0;
}
