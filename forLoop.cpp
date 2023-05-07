#include "iostream"

using namespace std;
int main()
{
    int n1, n2;
    printf("Debes ingresar diez números para ya que se van a sumar\nIngresa el primer numero:\n");
    scanf("%d", &n1);
   for (int i = 1; i < 10; i++)
   {
    printf("Ingresa el número siguiente:\n");
    scanf("%d", &n2);
    printf("Suma numero: %d\n", i);
    n1 = n2 + n1;
    printf("Suma hasta el momento es igual a: %d\n", n1);
   }
    printf("El total de la suma es: %d", n1);
   
}