#include <iostream>

#include "Paquete.h"
#include "Sobre.h"

using namespace std;

int main() {
    Paquete paquete(
        "Sofia", "E quinta", "MTY", "NL", "66640",
        "Armando", "A tercera", "CH","VER", "45635", 100, 50, 60, 30, 5, 20
    );

    Sobre sobre(
        "Carlos", "Av. Revolución", "MTY", "NL", "66450",
        "Luz", "Av. del Estado", "MTY", "NL", "66720", 30, 25, 20, 15
    );

    cout << "Costo del paquete: $" << paquete.calculaCosto() << endl;
    cout << "Costo del sobre: $" << sobre.calculaCosto() << endl;
    
    return 0;
}