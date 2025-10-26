#include <iostream>
using namespace std;

void mostrarEstado (int, int, int, int, string);
void comer (int, int);
void eleccion (int, string);
void dormir (int, int);
char menu(char, string);
void trabajar (int, int, int, int);
int main () {

    string nombre;
    string id;
    string figura;

    int mapa[4][4];
    int numero = 0;
    int hambre = 0;
    int energia = 100;
    int felicidad = 100;
    int dinero = 0;
    char caracter;

    eleccion(numero, figura);

    cout << "Ingresa el nombre de tu mascota: ";
    cin >> nombre;
    cout << "Ahora, por favor ingresa el id de tu mascota: ";
    cin >> id;

    // zᶻ   ૮˶- ﻌ -˶ა⌒)ᦱ PA DORMIR
    menu(caracter, nombre);
while(caracter != -1) {
    switch (caracter){

        case 1:
        mostrarEstado (hambre, energia, felicidad, dinero, figura);
        break;

        case 2:
        comer(dinero, hambre);
        break;

        case 3:
        dormir(energia, hambre);
        break;

        case 4:
        trabajar(energia, dinero, felicidad, hambre);

        case 5:
        // aqui va la funcion para moverse en el mapa
        break;

        case 6:
        // aqui va la funcion para guardar en un archivo pero eso no lo hemos visto
        break;

        case 7:
        // aqui va la funcion para cargar en un archivo pero tampoco lo hemos visto
        break;
    
        case -1:
        break;
    }

}
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

void dormir(int n, int n1) {
    n = 100;
    n1 += 20;
    while (n1 > 100) {
        n1--;
    }
}

// No tiene sentido que la accion de trabajar pida al menos 20 de energia
// pero que disminuya la energia en 40 puntos ya que eso daria -20 de energia 
// debido a esto voy a diseñar la funcion para energia > 40

void trabajar (int n, int n1, int n2, int n3) {
    if (n >= 40) {


        n -= 40;
        while (n <= 0) {
            n++;
        }

        n1 += 100;

        n2 -= 10;
        while (n2 <= 0) {
            n++;
        }


        n3 +=10;
        while (n > 100) {
            n3--;
        }

    } else (n < 40); {
        cout << "No tienes suficiente energia para trabajar, descansa!";
    }
}

char menu (char n, string n1) {
    cout << "Elija la accion que realizara su mascota " << n1 << endl;
    cout << "1. Ver su estado" << endl;
    cout << "2. Darle de comer" << endl;
    cout << "3. Ponerle a dormir" << endl;
    cout << "4. Que vaya a trabajar" << endl;
    cout << "5. Moverse en el mapa" << endl;
    cout << "6. Guardar su progreso" << endl;
    cout << "7. Cargar su progreso" << endl;
    cout << "-1 para matar el programa" << endl;
    cin >> n;
    return n;
}
