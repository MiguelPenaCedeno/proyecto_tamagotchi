#include <iostream>
using namespace std;

void mostrarEstado (int, int, int, int, string);
void comer (int, int);
void eleccion (int, string);

int main () {

    string nombre;
    string id;
    string figura;

    int numero = 0;
    int hambre = 0;
    int energia = 100;
    int felicidad = 100;
    int dinero = 0;

    eleccion(numero, figura);

    
    // zᶻ   ૮˶- ﻌ -˶ა⌒)ᦱ PA DORMIR


    //switch (menu){
      //  case a
    //}
    mostrarEstado (hambre, energia, felicidad, dinero, figura);

    comer(dinero, hambre);

    mostrarEstado (hambre, energia, felicidad, dinero, figura);


}

void eleccion(int n, string texto) {
        
    cout << "¡Bienvenid@ a tu Tamagotchi!" << endl;
    cout << "Para empezar, por favor elige tu mascota" << endl;
    cout << "1. ≽(•⩊ •マ≼ GATO" <<  endl;
    cout << "2. ૮ • ⩊ - ა PERRO" << endl;
    cout << "3. ૮꒰˶ᵔ ᗜ ᵔ˶꒱ა CONEJO" << endl;
    cout << "Introduce tu eleccion: ";
    cin >> n;

    while (n != 1 && n != 2 && n != 3) {
        cout << "Introduce una eleccion valida (1, 2 o 3): ";
        cin >> n;
    }
    if (n == 1) {
        cout << "¡Haz escogido gato! ≽(•⩊ •マ≼";
        texto = "≽(•⩊ •マ≼";
    } else if (n == 2) {
        cout << "¡Haz escogido perro! ૮ • ⩊ - ა";
        texto = "૮ • ⩊ - ა";
    } else if (n == 3) {
        cout << "¡Haz escogido conejo! ૮꒰˶ᵔ ᗜ ᵔ˶꒱";
        texto = "૮꒰˶ᵔ ᗜ ᵔ˶꒱ა";
    }
}

void mostrarEstado(int n, int n1, int n2, int n3, string texto) {
    cout << "ESTADO ACTUAL DE TU TAMAGOTCHI"<< endl;
    cout << texto << endl;
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
        cout << "No tiene suficiente dinero para comer, su dinero actual es de: " << n << endl;
    }
}
