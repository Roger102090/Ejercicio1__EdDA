#include <iostream>
using namespace std;
int main() {
   float n1, n2, opD, opS, opR, opM;
    
    printf("Ingresa dos números se va a realizar una\nSuma\nResta\nMultiplicación\nDivisión\nIngrese el primer número:\n");
       scanf("%f", &n1);
        printf("Ingrese el segundo número:\n");
        scanf("%f", &n2);
            opS = n1 + n2;
            opR = n1 - n2;
            opM = n1 * n2;
            opD = n1 / n2;
    printf("La respuesta de la operacion de\nsuma: %f\nDe la resta: %f\nDe la multiplicación: %f\nDe la división: %f", opS, opR, opM, opD);        
}
