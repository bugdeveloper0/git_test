#include <iostream>
int main(int argc, char** argv)
{
    int i;
    char array[10] = "as5x0xj";
    char num = 0x30;
    std::cout << num << std::endl;
    int a[10] = {1, 2, 3, 45, 21, 5, 54, 23};
    std::cout << "a[3] " << a[3] << "   " << sizeof(a[3]) << std::endl;
    std::cout << "a " << a << "   " << sizeof(a) << std::endl;
    std::cout << "a + 5 " << a[5] << "  " << a + 2 << std::endl;
    std::cout << "&a " << &(a) << "  " << &(a[1]) << std::endl;
    std::cout << sizeof(int) << sizeof(int *) << std::endl;

    std::cout << "array " << array << "  " << array + 2 << std::endl;
    std::cout << "&array " << &array << "  " << *(int *)(array + 1) << std::endl;

    for(i = 0; i < 10; i++)
    {
        std::cout << "The address of array " << i << " is " << array[i] << "  " << (int *)&(array[i]) << std::endl;
    }
    return 0;
}