#include <iostream>
using namespace std;

void mostrarEstado (int, int, int, int);
void comer (int, int);

int main () {

    string nombre;
    string id;

    int hambre = 0;
    int energia = 100;
    int felicidad = 100;
    int dinero = 0;

    mostrarEstado (hambre, energia, felicidad, dinero);


}

void mostrarEstado(int n, int n1, int n2, int n3) {
    cout << "ESTADO ACTUAL DE TU TAMAGOTCHI"<< endl;
    cout << "Hambre: " << n << endl;
    cout << "Energia: " << n1 << endl;
    cout << "Felicidad: " << n2 << endl;
    cout << "Dinero: " << n3 << endl;
}

void comer(int n, int n1) {
    if (n >= 20) {
        n1 -= 30;
        while (n1 <= 0) {
            n1++;
        } 
        n -= 20;
    } else if (n < 20) {
        cout << "No tiene suficiente dinero para comer, su dinero actual es de: " << n;
    }
}
