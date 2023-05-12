#include "iostream"

using namespace std;
int main()
{
    // Declaración de variables
    char nombre[20], eSalud[25], eleccion[0];
    int edad;
    float altura, peso, imc;
    bool elecciones;
    int formula = peso/(altura*altura);
    // Ejecución del programa
    printf("Para calcular tu IMC, debes escribir los siguientes datos\nEscribe tu nombre:\n");
    scanf("%s", nombre);
    printf("Escribe tu edad:\n");
    scanf("%d", &edad);
    printf("Escribe tu peso:\n");
    scanf("%f", &peso);
    printf("Escribe tu estatura:\n");
    scanf("%f", &altura);
    printf("¿Gozas de Buena salud?\n(s) para sí y (n) para no\n");
    scanf("%s", eleccion);
    imc = peso / (altura*altura);
        if (eleccion[0] == "s")
        {
            elecciones = true;
            eSalud[21] = "estado de salud bueno";
        }else{
            if (eleccion[0] == ("n"))
            {
                elecciones = false;
                eSalud[20] = "estado de salud malo";
            }
        };
    printf("Tu nombre es %s\nTu edad es: %d\nTu peso es: %f\nTu altura es: %f\nTienes un IMC de: %s\nRecuerda que tu iMC solo es un referente para que tengas una idea de que peso debes tener para que así puedas cuidar de tu salud de la mejor manera posible", nombre, edad, peso, altura, eSalud, formula);
}