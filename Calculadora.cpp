#include <iostream>
using namespace std;
int main() {
   int n1, n2, n3, opS, opR, opM, opD;
    
    printf("Ingresa dos números se va a realizar una\nSuma\nResta\nMultiplicación\nDivisión\nIngrese el primer número:\n");
        cin >> n1;
        printf("Ingrese el segundo número:\n");
        scanf("%d", &n2);
            opS = n1 + n2;
            opR = n1 - n2;
            opM = n1 * n2;
            opD = n1 / n2;
    printf("La respuesta de la operacion suma es: %d\nDe la resta: %d\nDe la multiplicación: %d\nDe la división: %d", opS, opR, opM, opD);        
}
