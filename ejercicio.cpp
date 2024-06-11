#include <iostream>
using namespace std;
void verificarEdad(int *edad){
    if(*edad >=18 ){
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "No eres mayor de edad." << endl;
    }
}
int main(){
    int edad;
    cout << "Ingrese tu edad: ";
    cin >> edad;
    int *ptrEdad = &edad;
    cout << "Edad ingresada: " << edad << endl;
    cout << "Direccion de memoria de la variable edad: " << edad << endl;
    verificarEdad(ptrEdad);

    return 0;
}
