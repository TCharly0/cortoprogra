
//Ordenación de números: Crea un programa que permita al usuario ingresar una lista de números enteros y luego ordene esos números de menor a mayor utilizando el algoritmo de ordenación de burbuja o cualquier otro algoritmo de ordenación que prefieras.
#include <iostream>
using namespace std;
int main() {
    int size;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> size;

    int numeros[size];

    for (int i = 0; i < size; i++) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (numeros[j] > numeros[j+1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    cout << "Numeros ordenados de menor a mayor: ";
    for (int i = 0; i < size; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
