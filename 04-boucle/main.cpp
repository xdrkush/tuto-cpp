/// 04 - Boucle

/// import des modules
#include <ctime>
#include <iostream>

// Function mère
int main()
{
    int N = 0;

    std::cout << "Entrée un numéro entre 1 - 20 !" << std::endl;
    // On récupère la commande taper
    std::cin >> N;
    std::cin.ignore();

    // 01
    // Boucle d'incrémentation
    for (int i = 0; i <= N; i++)
    {
        std::cout << "index: " << i << " / numero: " << i + 1 << std::endl;
    }

    // 02
    // tant que N n'est pas égale à 0 il boucle
    // do
    // {
    //     std::cin >> N;
    //     std::cin.ignore();

    // } while (N == 0);

    // 03
    // tant que N égale à 0 il boucle
    // while (N == 0)
    // {
    //     std::cin >> N;
    //     std::cin.ignore();
    // }

    // 04
    // Attention cette boucle tourne à l'infini si vous ne mettez aucune condition pour l'arreter
    // while (true)
    // {
    //     int N = 0;
    //     // à chaque tour on demandera une reponse dans le terminal
    //     std::cin >> N;
    //     std::cin.ignore();

    //     // // Tant que N n'est pas egale à 0 il boucle sinon il met fin;
    //     if (N == 0)
    //     {
    //         break;
    //     }
    //     // // Ou
    //     // Tant que N est pas egale à 0 il continue de boucler
    //     // if (N == 0)
    //     // {
    //     //     continue;
    //     // }

    //     std::cout
    //         << "Itérations" << std::endl;
    // }

    return 0;
}
