#include <stdio.h>
#include "calculadora.h"

void q2_subtracao() {
    int valor1, valor2, res; //mudo as variaveis pra "a" e "b"?

    scanf("%d - %d", &valor1, &valor2);

    res = valor1 - valor2;

    printf("%d\n", res);
}

void q4_divisao(){
    double valor1, valor2, res;

    scanf("%lf / %lf", &valor1, &valor2);

    res = valor1 / valor2;
    printf("%.3lf\n", res);
}

void q7_fatorial() {
    int n, i;
    long long int fatorial = 1;

    scanf("%d !", &n);

    for(i = n; i > 0; i--) {
        fatorial *= i;
    }

    printf("%lld\n", fatorial);
}

void q9_or() {
    int valor1, valor2, res;

    scanf("%d | %d", &valor1, &valor2);

    res = valor1 | valor2;

    printf("%d\n", res);
}

void q11_shift_direita(){
    int a, b, res;

    scanf("%d >> %d", &a, &b);
    res = a >> b;

    printf("%d\n", res);
}

void q14_somatorio_invervalo() {
    int a, b, i;
    long long int soma = 0;
    scanf("%d S %d", &a, &b);

    for(i = a; i <= b; i++) {
        soma += i;
    }

    printf("%lld\n", soma);
}

void q16_minimo() {
    int valor1, valor2;

    scanf("%d min %d", &valor1, &valor2);

    if (valor1 < valor2)
        printf("%d\n", valor1);
    else 
        printf("%d\n", valor2);
}

void q18_abs(){
    int valor1;
    scanf("%d abs", &valor1);

    if(valor1 < 0) valor1 *= -1;
    printf("%d\n", valor1);
}

void q21_maior_que() {
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

void q23_maior_igual() {
    int valor1, valor2;

    scanf("%d >= %d", &valor1, &valor2);

    if (valor1 >= valor2)
        printf("SIM\n");
    else
        printf("NAO\n");
}

void q25_and(){
    int valor1, valor2;
    scanf("%d && %d", &valor1, &valor2);

    if(valor1 == 0 || valor2 == 0) printf("NAO\n");
    else printf("SIM\n");
}

void q28_nor() {
    int a, b;
    scanf("%d !| %d", &a, &b);

    if(a == 0 && b == 0) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
}