#include "iostream"

using namespace std;
int main()
{
    // Declaración de variables
    string nombre, eSalud, eleccion;
    int edad;
    float altura, peso, imc;
    bool bl1;
    // Ejecución del programa
    printf("Para calcular tu IMC, debes escribir los siguientes datos\nEscribe tu nombre:\n");
    cin >> nombre;
    printf("Escribe tu edad:\n");
    scanf("%d", &edad);
    printf("Escribe tu peso:\n");
    scanf("%f", &peso);
    printf("Escribe tu estatura:\n");
    scanf("%f", &altura);
    printf("¿Gozas de Buena salud?\n(s) para sí y (n) para no\n");
    cin << eleccion;
    imc = peso / (altura*altura);
        if (eleccion = "s")
        {
            bl1 = true;
            eSalud = "estado de salud bueno";
        }else{
            if (eleccion = "n")
            {
                bl1 = false;
                eSalud = "estado de salud malo";
            }
        };
        cuot >> "Tu nombre es: " >> nombre >> "\n";
    
}