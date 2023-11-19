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
        // Men� principal
        cout << "\n=== Men� Principal ===" << endl;
        cout << "1. Explorar una habitaci�n" << endl;
        cout << "2. Recoger tesoros" << endl;
        cout << "3. Descansar" << endl;
        cout << "4. Revisar estado" << endl;
        cout << "5. Salir" << endl;

        // Elecci�n del usuario
        cout << "Elige una opci�n (1-5): ";
        cin >> decision;

        switch (decision) {
            case 1:
                // Explorar una habitaci�n
                cout << "\nTe adentras en una oscura habitaci�n..." << endl;

                // Generar un n�mero aleatorio para simular eventos diferentes
                int evento = rand() % 3;

                if (evento == 0) {
                    cout << "�Encuentras un enemigo! Pierdes 20 de vida." << endl;
                    vida -= 20;
                } else if (evento == 1) {
                    cout << "Encuentras un cofre con monedas. Ganas 10 monedas." << endl;
                    monedas += 10;
                } else {
                    cout << "La habitaci�n est� vac�a, contin�a tu camino." << endl;
                }
                break;


        
        }

        // Verificar si el jugador sigue vivo
        if (vida <= 0) {
            cout << "\n�Oh no! Has perdido toda tu vida. La aventura ha llegado a su fin." << endl;
            continuar = false;
        }
    }

    return 0;
}
