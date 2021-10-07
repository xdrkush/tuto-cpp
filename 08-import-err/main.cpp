// 08 - Import

// Import de module depuis le prépocesseur (machine)
// Permet de faire une entrée - sortie comunication avec le terminal
#include <iostream>
#include "service/function.hpp"

// permet déviter les collision entre variable
using namespace std;

// On déclare une fonction (cela nous permet que notre function sois lu même au dessus d'elle)
// int calcul(int x, char s, int y);

// Function mère
int main()
{
    // Integer
    int N = 1;
    int N2 = 1;
    char S = '+';

    std::cout << "Entrer un nombre, suivi d'un opérateur, puis d'un nombre !( 15 + 25 )" << std::endl;
    std::cin >> N >> S >> N2;

    // Exec notre function
    std::cout << calcul(N, S, N2) << std::endl;

    std::cin.ignore();

    std::cout << "Script terminée !" << std::endl;
    return 0;
}

// Et voici le corps de la fonction
// int calcul(int x, char s, int y)
// {
//     int result = 0;

//     switch (s)
//     {
//     case '+':
//         result = x + y;
//         break;
//     case '-':
//         result = x - y;
//         break;
//     case '*':
//         result = x * y;
//         break;
//     case '/':
//         result = x / y;
//         break;
//     default:
//         std::cout << "les seuls character accepté sont, + - * /";
//     }
//     return result;
// }