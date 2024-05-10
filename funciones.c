#include <stdio.h>
#include "funciones.h"

float calculoInteres(float saldo, float tasaInteres) {
    return saldo * (tasaInteres / 100);
}

float calcularTotalInteres(float monto, float interes, int tiempo) {
    float t_interes = interes / 12;
    float saldo = monto;
    float totalInteres = 0;

    for (int i = 1; i <= tiempo; i++) {
        float t_pagado = calculoInteres(saldo, t_interes);
        totalInteres += t_pagado;
        saldo += t_pagado;
        saldo += monto;
    }

    return totalInteres;
}

float calcularTotalMonto(float monto, int tiempo) {
    return monto * tiempo;
}

void mostrarTabla(float monto, float interes, int tiempo) {
    float t_interes = interes / 12;
    float saldo = monto;
    float totalInteres = 0;
    float t_monto = monto * tiempo;

    printf("Mes ahorrado\tInteres pagado\tMonto mensual\n");
    for (int i = 1; i <= tiempo; i++) {
        float t_pagado = calculoInteres(saldo, t_interes);
        totalInteres += t_pagado;
        saldo += t_pagado;
        printf("%d\t\t%.2f\t\t%.2f\n", i, t_pagado, saldo);
        saldo += monto;
    }

    printf("Total de intereses pagados: %.2f\n", totalInteres);
    printf("Total de monto ingresado: %.2f\n", t_monto);
}