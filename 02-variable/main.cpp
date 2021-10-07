// 02 - Variable

// Import de module depuis le prépocesseur (machine)
// Permet de faire une entrée - sortie comunication avec le terminal
#include <iostream>
#include <string>

// permet déviter les collision entre variable
using namespace std;

// Function mère
int main()
{
    // type name
    // char     - charachter       - 'r'
    // int      - integer          - 50, 42, 500, -400
    // float    - floating points  - 4.2f
    // double   - doucle precision - 5.0
    // bool     - boolean          - true || false

    // Initialisation des variables
    int annee = 2021;
    int naissance = 1999;
    string entree = "Bonjour comment tu t'appel ? ";

    // Nom
    // cout permet de ressortir dans le terminal
    std::cout << entree;
    //  in permet de recupérer depuis le terminal
    std::cin >> entree;
    // On supprime notre caractère de fin de ligne
    std::cin.ignore();

    // std::endl permet de metre fin à la ligne du terminal
    std::cout << "Bienvenue dans c++, " << entree << " !" << std::endl;
    std::cout << "Tape sur entrée pour continuer !" << std::endl;
    std::cin.ignore();

    // Date de naissance
    std::cout << "En quelles année sommes nous ? ";
    std::cin >> annee;
    std::cin.ignore();
    std::cout << "En quelles année est tu née ? ";
    std::cin >> naissance;

    int age = annee - naissance;

    std::cout << "Tu as " << age << " ans !" << std::endl;
    std::cout << "Script terminée !" << std::endl;
    std::cin.ignore();

    return 0;
}
