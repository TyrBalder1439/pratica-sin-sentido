#include <iostream>
#include <unistd.h>

using namespace std;

void introduccion() {
    cout << "Bienvenido al Bosque Encantado. Te encuentras al inicio del bosque." << endl;
    usleep(1000000);
    cout << "De repente, ves dos caminos frente a ti." << endl;
    usleep(1000000);
    cout << "¿Qué camino eliges?" << endl;
    usleep(1000000);
    cout << "1. Camino de la izquierda" << endl;
    cout << "2. Camino de la derecha" << endl;
}

char eleccionCamino() {
    char eleccion;
    cout << "Elige 1 o 2: ";
    cin >> eleccion;
    return eleccion;
}

void continuarCamino(char eleccion) {
    if (eleccion == '1') {
        cout << "Has elegido el Camino de la izquierda." << endl;
        usleep(1000000);
        cout << "Avanzas por el bosque y encuentras una fuente mágica." << endl;
        usleep(1000000);
        cout << "¿Qué decides hacer?" << endl;
        usleep(1000000);
        cout << "1. Beber agua de la fuente" << endl;
        cout << "2. Seguir adelante sin detenerte" << endl;

    } else if (eleccion == '2') {
        cout << "Has elegido el Camino de la derecha." << endl;
        usleep(1000000);
        cout << "Te adentras en el bosque y escuchas risas lejanas." << endl;
        usleep(1000000);
        cout << "¿Qué decides hacer?" << endl;
        usleep(1000000);
        cout << "1. Seguir el sonido de las risas" << endl;
        cout << "2. Ignorar las risas y seguir tu camino" << endl;
    }
}

void resolverSituacion(char eleccion) {
    if (eleccion == '1') {
        cout << "Bebes el agua de la fuente y sientes una energía renovada." << endl;
        usleep(1000000);
        cout << "Continúas tu camino y llegas a una clara en el bosque." << endl;
        usleep(1000000);
        cout << "Felicidades, has completado tu aventura en el Bosque Encantado." << endl;
    } else if (eleccion == '2') {
        cout << "Ignoras las risas y sigues adelante." << endl;
        usleep(1000000);
        cout << "Te encuentras con un duende amistoso que te guía a través del bosque." << endl;
        usleep(1000000);
        cout << "Felicidades, has completado tu aventura en el Bosque Encantado." << endl;
    }
}

int main() {
    introduccion();
    char eleccion1 = eleccionCamino();
    continuarCamino(eleccion1);
    char eleccion2 = eleccionCamino();
    resolverSituacion(eleccion2);

    return 0;
}
