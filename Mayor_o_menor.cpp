#include "iostream"

using namespace std;
int main()
{
    float n1, n2;
    printf("Debes ingresar dos números para averiguar cual es mayor\nIngresa el primer numero:\n");
    scanf("%f", &n1);
    printf("Ingresa el segundo número:\n");
    scanf("%f", &n2);
    if (n1 > n2)
    {
        printf("El primer número: %f es mayor que el segundo número: %f\n", n1, n2);
    }else {
        printf("El segundo número: %f es mayor que el segundo número: %f\n", n2, n1);
    }
}