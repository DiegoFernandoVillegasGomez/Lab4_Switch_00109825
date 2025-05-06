#include <iostream>
using namespace std;

int main()
{

    // Declaracion de varibales
    double Num1, Num2, Resultado;
    int Opciones;

    // Menu de opciones para que el usuario eliga que quiere hacer
    cout << "----------------------------------------------------------" << endl;
    cout << "Bienvenido al sistema porfavor elija una opcio3n" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Divicion" << endl;
    cout << "5. Salida" << endl;
    cin >> Opciones;
    cout << "----------------------------------------------------------" << endl;

    // Validacion para la eleccion del 1 al 4 y si elije 5 mostrar mensaje de salida
    if (Opciones >= 1 && Opciones <= 4)
    {
        // Ingreso de datos de los numeros que se va realizar las operaciones
        cout << "Ingrese el primer numero " << endl;
        cin >> Num1;
        cout << "Ingrese el segundo numero" << endl;
        cin >> Num2;
    }

    // Sentencia Switch para verificar que tipo de opcion tomo el usuario
    switch (Opciones)
    {
    case 1:
        // Caso 1 ponemos la formula de la suma
        Resultado = Num1 + Num2;
        cout << "Su resultado es: " << Resultado << endl;
        break;
    case 2:
        // Caso 2 ponemos la formula de la resta
        Resultado = Num1 - Num2;
        cout << "Su resultado es: " << Resultado << endl;
        break;

    case 3:
        // Caso 3 ponemos la formula de la multiplicación
        Resultado = Num1 * Num2;
        cout << "Su resultado es: " << Resultado << endl;
        break;

    case 4:
        // Caso 4 ponemos la formula de la divición
        Resultado = Num1 / Num2;
        cout << "Su resultado es: " << Resultado << endl;
        break;

    case 5:
        // Caso 5 Validacion para poder salir del sistema mostrando un mensaje
        cout << "Gracias por ingresar al sistema" << endl;
        break;

    default:
        // Default para validar que el usuario ponga un numero valido en la selección
        cout << "Ingrese un numero valido" << endl;
        break;
    }

    return 0;
}