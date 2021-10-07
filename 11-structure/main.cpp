// 11 - Structure

// Import de module depuis le prépocesseur (machine)
// Permet de faire une entrée - sortie comunication avec le terminal
#include <iostream>
#include <cmath>
using namespace std;

struct Position
{
    double x;
    double y;
};

int main()
{
    Position A, B;
    double dx, dy, distance;

    std::cout << "Tapez l'abscisse de A : ";  std::cin >> A.x;
    std::cout << "Tapez l'ordonnée de A : ";  std::cin >> A.y;
    std::cout << "Tapez l'abscisse de B : ";  std::cin >> B.x;
    std::cout << "Tapez l'ordonnée de B : ";  std::cin >> B.y;
 
    dx = A.x - B.x;
    dy = A.y - B.y;
    distance = sqrt( dx*dx + dy*dy );

    std::cout << "La distance AB vaut : " << distance << std::endl;

    return 0;
}