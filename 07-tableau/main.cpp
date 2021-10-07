// 05 - Fonction

// Import de module depuis le prépocesseur (machine)
// Permet de faire une entrée - sortie comunication avec le terminal
#include <iostream>

// permet déviter les collision entre variable
using namespace std;

// Et voici le corps de la fonction
void ComputerTable(int table, int *output)
{
    for (int i = 0; i <= 10; i++)
    {
        output[i] = i * table;
    }

    // output[0] = 0 * 5
    // output[1] = 1 * 5
    // output[2] = 2 * 5
    // ...
}

void DisplayTable(int *output)
{
    for (int i = 0; i <= 10; i++)
    {
        std::cout << output[i] << std::endl;
    }
}

// Function mère
int main()
{
    int table[11]  = { 0 };

    ComputerTable(5, table);
    DisplayTable(table);

    std::cin.ignore();
    
    return 0;
}