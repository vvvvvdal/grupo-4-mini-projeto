#include <stdio.h>
#include "calculadora.h"

void q2_subtracao(int *a, int *b, int *resultado){
    scanf("%d - %d", a, b);

    resultado = *a - *b;
}

void q4_divisao(double *a, double *b, double *resultado){
    double res;

    scanf("%lf / %lf", a, b);

    res = *a / *b;
    *a = res;
}

void q7_fatorial(long long int *a, long long int *resultado) {
    int n, i;
    long long int fatorial = 1;

    scanf("%d !", a);

    for(i = *a; i > 0; i--) {
        fatorial *= i;
    }

    printf("%lld\n", fatorial);
}

void q9_or(int *a, int *b, int *resultado) {
    int res;

    scanf("%d | %d", a, b);

    res = *a | *b;

    printf("%d\n", res);
}

void q11_shift_direita(int *a, int *b, int *resultado){
    int res;

    scanf("%d >> %d", a, b);
    res = *a >> *b;

    printf("%d\n", res);
}

void q14_somatorio_invervalo(int *a, int *b, int *resultado) {
    int i;
    long long int soma = 0;
    scanf("%d S %d", a, b);

    for(i = *a; i <= *b; i++) {
        soma += i;
    }

    printf("%lld\n", soma);
}

void q16_minimo(int *a, int *b, int *resultado) {
    int min;
    scanf("%d min %d", a, b);

    if (*a < *b) min = *a;
    else min = *b;

    *a = min;
}

void q18_abs(int *a, int *resultado) {
    scanf("%d abs", a);

    if(*a < 0) *a *= -1;
    printf("%d\n", *a);
}

void q21_maior_que(int *a, int *b, int *resultado) {
    int a, b, ehMaior = 0;
    scanf("%d > %d", &a, &b);

    if(a > b) {
        ehMaior = !ehMaior;
    }

    if(ehMaior) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
}

void q23_maior_igual(int *a, int *b, int *resultado) {

    scanf("%d >= %d", a, b);

    if (*a >= *b)
        printf("SIM\n");
    else
        printf("NAO\n");
}

void q25_and(int *a, int *b, int *resultado) {
    scanf("%d && %d", a, b);

    if(*a == 0 || *b == 0) printf("NAO\n");
    else printf("SIM\n");
}

void q28_nor(int *a, int *b, int *resultado) {
    scanf("%d !| %d", a, b);

    if(*a == 0 && *b == 0) {
        resultado = 1;
    } else {
        resultado = 0;
    }
}