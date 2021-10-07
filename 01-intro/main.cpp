// 02 - Variable

// Import de module depuis le prépocesseur (machine)
// Permet de faire une entrée - sortie comunication avec le terminal
#include <iostream>
// permet déviter les collision entre variable
using namespace std;

// Function mère
int main()
{
    // std::endl permet de metre fin à la ligne du terminal
    std::cout << "Bienvenue dans c++ !" << std::endl;
    std::cout << "Tape sur entrée pour continuer !" << std::endl;
    std::cin.ignore();

    return 0;
}
