#include <stdio.h>
#include "funciones.h"

int main() {
    float monto, interes;
    int tiempo;

    printf("Ingrese su monto a ahorrar: ");
    scanf("%f", &monto);
    printf("Ingrese la tasa de interes: ");
    scanf("%f", &interes);
    printf("Ingrese el tiempo en meses: ");
    scanf("%d", &tiempo);

    float totalInteres = calcularTotalInteres(monto, interes, tiempo);
    float totalMonto = calcularTotalMonto(monto, tiempo);
    mostrarTabla(monto, interes, tiempo);

    return 0;
}