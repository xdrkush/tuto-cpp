/// 04 - Mini Jeux

/// import des modules
#include <ctime>
#include <iostream>

// Function mère
int main()
{
    // on creer un nombre aléatoire en générant une date % 100
    std::srand(time(nullptr));

    // Le nombre d'éssaie
    int max_try = 6;
    // Le nombre à deviner
    int mystery_number = std::rand() % 100;

    // Notre boucle calcul le nombre d'essaie
    for (int i = 0; i < max_try; ++i)
    {
        // Ici on affiche notre jeux:
        std::cout << "Entrez un nombre entre 1 et 100 : ";
        // On parametre par default le nombre à 0
        int number = 0;

        // On récupère le nombre donner par le joueur
        std::cin >> number;
        std::cin.ignore();

        // Condition pour check si le joueur à gagne
        if (mystery_number == number)
        {
            // On ressort dans le terminal, "", et on clean le tampon
            std::cout << "Gagné" << std::endl;
            // Break est utiliser pour sortir de la boucle
            break;
        }
        // Condition pour check si le joueur à entré un nombre trop grand
        else if (number > mystery_number)
        {
            std::cout << "Trop grand !" << std::endl;
        }
        // Condition pour check si le joueur à entré un nombre trop petit
        else
        {
            std::cout << "Trop petit !" << std::endl;
        }
        // Condition pour check ne nombre d'essaie
        if (i == max_try - 1)
        {
            std::cout << "Perdu ! " << mystery_number << std::endl;
        }
    }
    // On supprime notre caractère de fin de ligne
    std::cin.ignore();

    return 0;
}