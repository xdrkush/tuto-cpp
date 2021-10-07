// 10 - Références
// Une référence à une autre variable permet de reprendre le controle 
// de la variable et d'en changer son contenu depuis la référence

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
    int a = 98,
        b = 78,
        c;

    int &x = a;
    c = x + 5;  // équivaut à :  c = a + 5;

    int &y = b;
    y = a + 10; // équivaut à :  b = a + 10;

    std::cout << "La variable b vaut : " << b << std::endl;
    std::cout << "La variable c vaut : " << c << std::endl;

    return 0;
}