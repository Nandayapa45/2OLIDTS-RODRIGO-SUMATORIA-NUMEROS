// inciio_01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Programador: Rodrigo Nandayapa Medina 2°O

#include <iostream>
using namespace std;
const int NUM = 8;
int main()
{
    cout << "Hello World!\n";
    int nums[NUM];
    int total = 0;
    for (int i = 0; i < NUM; i++)
    {
        cout << "Por favor, introduzca el numero: ";
        cin >> nums[i];
        total += nums[i]; //Esta funcion es para que aguarde y sume.

    }

    cout << "El total de numero es: " << total << endl;
    system("pause");
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
