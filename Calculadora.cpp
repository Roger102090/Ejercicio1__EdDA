#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3, op;
    
        printf("Ingresa dos números y elige la opción deseada entre las siguientes:\n1: Suma\n2: Resta\n3: Multiplicación\n4: División\nIngrese el primer número:\n");
        cin >> n1;
        printf("Ingrese el segundo número:\n");
        scanf("%d", &n2);
        printf("Ingrese la opción deseada:\n");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
                op = n1 + n2;
                
                break;
            case 2:
                op = n1 - n2;
             
                break;
            case 3:
                op = n1 * n2;
                
                break;
            case 4:
                op = n1 / n2;
                
                break;
            default:
                printf("Debes elegir opción adecuada");
                break;
        }
        printf("La respuesta de la operacion es: %d", op);        
}
