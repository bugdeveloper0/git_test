#include <iostream>
int main(int argc, char** argv)
{
    int i;
    char array[10] = "asdfghjjk";
    for(i = 0; i < 10; i++)
    {
        std::cout << "The address of array " << i << " is " << array[i] << "  " << (int *)&(array[i]) << std::endl;
    }
    return 0;
}