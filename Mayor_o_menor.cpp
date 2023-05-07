
#include "iostream"

using namespace std;
int main()
{
    int n1, n2;
    printf("Debes ingresar dos números para averiguar cual es mayor\nIngresa el primer numero:\n");
    scanf("%d", &n1);
    printf("Ingresa el segundo numero:\n");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        printf("El primer número: %d es mayor que el segundo número: %d\n", n1, n2);
    }else {
        printf("El segundo número: %d es mayor que el segundo número: %d\n", n2, n1);
    }
}