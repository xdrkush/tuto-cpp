// 05 - Fonction

// Import de module depuis le prépocesseur (machine)
// Permet de faire une entrée - sortie comunication avec le terminal
#include <iostream>

void Foo(int* a)
{
    if(a)
        *a = 50;
}

// Function mère
int main()
{
    int a = 0;
    float b = 0;

    int* p_int = &a;
    float* p_float = &b;

    p_int--;
    Foo(p_int);

    std::cout << "valeur de a = " << a << std::endl;
    std::cout << "valeur de b = " << b << std::endl;

    std::cout << "address de a = " << p_int << std::endl;
    std::cout << "address de b = " << p_float << std::endl;

    std::cout << "value de a = " << *p_int << std::endl;
    std::cout << "value de b = " << *p_float << std::endl;

    std::cin.ignore();
    
    return 0;
}