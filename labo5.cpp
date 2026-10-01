#include <iostream>
using namespace std;

int main(){

    int opcion;
    float radio, lado, base, altura, area;

    cout << "1. circulo" << endl;
    cout << "2. cuadrado" << endl;
    cout << "3. triangulo" << endl;
    cout << "seleccione una opcion: ";
    cin >> opcion;

    switch (opcion){
        case 1:
        cout << "ingrese el radio: ";
        cin >> radio;

        area = 3.1416 * radio * radio;
        cout << "el area del circulo es: " << area << endl;
        break;

        case 2:
        cout << "ingrese el lado: ";
        cin >> lado;

        area = lado * lado;
        cout << "el area del cuadrado es: " << area << endl;
        break;

        case 3:
        cout << "ingrese la base: ";
        cin >> base;
        cout << "ingrese la altura: ";
        cin >> altura;

        area = (base * altura) / 2;
        cout << "el area del triangulo es: " << area << endl;
        break;

    default:
        cout << "opcion no valida" << endl;

    }


    return 0;
}