#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    // Variables
    int vida = 100;
    int monedas = 0;
    int decision;
    bool continuar = true;

    // Mensaje de bienvenida
    cout << "Bienvenido a la Aventura en la Mazmorra!" << endl;

    while (continuar) {
        // Menú principal
        cout << "\n=== Menú Principal ===" << endl;
        cout << "1. Explorar una habitación" << endl;
        cout << "2. Recoger tesoros" << endl;
        cout << "3. Descansar" << endl;
        cout << "4. Revisar estado" << endl;
        cout << "5. Salir" << endl;

        // Elección del usuario
        cout << "Elige una opción (1-5): ";
        cin >> decision;

        switch (decision) {
            case 1:
                // Explorar una habitación
                cout << "\nTe adentras en una oscura habitación..." << endl;

                // Generar un número aleatorio para simular eventos diferentes
                int evento = rand() % 3;

                if (evento == 0) {
                    cout << "¡Encuentras un enemigo! Pierdes 20 de vida." << endl;
                    vida -= 20;
                } else if (evento == 1) {
                    cout << "Encuentras un cofre con monedas. Ganas 10 monedas." << endl;
                    monedas += 10;
                } else {
                    cout << "La habitación está vacía, continúa tu camino." << endl;
                }
                break;


        
        }

        // Verificar si el jugador sigue vivo
        if (vida <= 0) {
            cout << "\n¡Oh no! Has perdido toda tu vida. La aventura ha llegado a su fin." << endl;
            continuar = false;
        }
    }

    return 0;
}
