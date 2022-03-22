
#include <cmath>
#include <iostream>
#include <string>
#include "helloWorld.h"

#ifdef USE_MYMATH
    #include "MathFunctions.h"
#endif

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << argv[0] << " Version " << helloWorld_VERSION_MAJOR << ","
            << helloWorld_VERSION_MINOR << std::endl;
        std::cout << "Usage:" << argv[0] << " number" << std::endl;
        return 1;
    }
    
    const double inputValue = std::stod(argv[1]);

#ifdef USE_MYMATH
    const double outputValue = mysqrt(inputValue);
    std::cout << "use_mymath" << std::endl;
#else
    const double outputValue = sqrt(inputValue);
    std::cout << "not use_mymath" << std::endl;
#endif

    std::cout << "The square root of " << inputValue << " is " << outputValue
        << std::endl;
    int a = 10;
    char c = 'c';
    const char word[9] = "a string";
    printf("very few to use printf function %s, %c, %d\n", word, c, a);
    std::cout << "helloWorld\n";
    return 0;
}
