#include <stdio.h>
#include "calculadora.h"
void q1_soma(int*a,int*b,int*resultado){
    int soma=0;
    scanf("%d + %d", a, b);
    soma = *a + *b;
    *resultado=soma;
}

void q2_subtracao(int *a, int *b, int *resultado){
    scanf("%d - %d", a, b);
    *resultado = *a - *b;
}

void q3_multiplicacao(int *a, int *b, int *resultado){
    scanf("%d * %d", a, b);     //nao deveria ser long long int? porque com numero grange da overflow
    *resultado = *a * *b;
}

void q4_divisao(double *a, double *b, double *resultado){
    scanf("%lf / %lf", a, b);
    *resultado = 1.0 * (*a) / (*b);
}

void q5_resto(int *a, int *b, int *resultado){
    scanf("%d %% %d", a, b);

    *resultado = (*a) % (*b);
}

void q6_potencia(int *a, int *b, long long int *resultado){
    scanf("%d ~ %d", a, b);
    *resultado = 1;
    if(*b>=0){//faz a conta somente se o expoente for positivo
        int expoente = *b;
        while(expoente--) *resultado *= *a;
    }
}

void q7_fatorial(long long int *a, long long int *resultado) {
    int i;
    long long int fatorial = 1;
    scanf("%lld !", a);
    for(i = *a; i > 0; i--) fatorial *= i;
    *resultado = fatorial;
}

void q8_and_bit_a_bit(int *a,int *b,int *resultado){
    scanf("%d & %d%*c", a, b);
    *resultado= *a & *b;
}

void q9_or(int *a, int *b, int *resultado) {
    scanf("%d | %d", a, b);
    *resultado = *a | *b;
}

void q10_XOR(int *a, int *b, int *resultado){
    scanf("%d ^ %d", a, b);
    *resultado = *a ^ *b;
}

void q11_shift_direita(int *a, int *b, int *resultado){
    scanf("%d >> %d", a, b);
    *resultado = *a >> *b;
}

void q12_shift_esquerda(int *a, int *b, int *resultado){
    scanf("%d << %d", a, b);

    *resultado = *a << *b;
}

void q13_media(int *a, int *b, double *resultado){
    scanf("%d M %d", a, b);
    *resultado = ((long long int)*a + (long long int)*b)/2.0;
}

void q14_somatorio_invervalo(int *a, int *b, int *resultado) {
    int i;
    long long int soma = 0;
    scanf("%d S %d", a, b);
    for(i = *a; i <= *b; i++) soma += i;
    *resultado = soma;
}

void q15_produtorio_de_um_intervalo(int *a, int *b, long long int *resultado){
    int i;
    long long int aux = 1;
    scanf("%d P %d", a, b);
    for(i = *a; i <= *b; i++){
        aux*= i;
        *resultado = aux;
    }
}

void q16_minimo(int *a, int *b, int *resultado) {
    int min;
    scanf("%d min %d", a, b);
    if (*a < *b) min = *a;
    else min = *b;
    *resultado = min;
}

void q17_max(int *a, int *b, int *resultado){
    scanf("%d max %d", a, b);
    if(*a > *b) *resultado = *a;
    else *resultado = *b;
}

void q18_abs(int *a, int *resultado) {
    scanf("%d abs", a);
    if(*a < 0) *a *= -1;
    *resultado = *a;
}

void q19_igualdade(int *a, int *b, int *resultado){
    scanf("%d == %d", a, b);

    if(*a == *b) *resultado = 1;
    else *resultado = 0;
}

void q20_diferenca(int *a, int *b, int *resultado){
    scanf("%d != %d", a, b);
    if(*a != *b) *resultado = 1;
    else *resultado = 0;
}

void q21_maior_que(int *a, int *b, int *resultado) {
    scanf("%d > %d", a, b);
    if(*a > *b) *resultado = 1;
    else *resultado = 0;
}

void q22_menor_que(int *a, int *b, int *resultado){
    scanf ("%d < %d", a, b);
    if(*a < *b){*resultado = 1;// 1 SIM,verdadeiro
    }else if(*a >= *b){ *resultado = 0;// 0 NÃO,falso
    }
}

void q23_maior_igual(int *a, int *b, int *resultado) {
    scanf("%d >= %d", a, b);
    if (*a >= *b) *resultado = 1;
    else *resultado = 0;
}

void q24_menor_igual(int *a, int *b, int *resultado) {
    scanf("%d <= %d", a, b);
    if(*a <= *b) *resultado = 1;
    else *resultado = 0;
}

void q25_and(int *a, int *b, int *resultado) {
    scanf("%d && %d", a, b);
    if((*a != 0 && *a != 1) || (*b != 0 && *b != 1)) *resultado = -1;//entrada invalida
    else if(*a == 0 || *b == 0) *resultado = 0;
    else *resultado = 1;
}

void q26_nand(int *a, int *b, int *resultado){
    scanf("%d !& %d", a, b);

    if(*a == 0 && *b == 0) *resultado = 1;
    else if(*a == 0 && *b == 1) *resultado = 1;
    else if(*a == 1 && *b == 0) *resultado = 1;
    else if(*a == 1 && *b == 1) *resultado = 0;
}

void q27_or(int *a, int *b, int *resultado){
    scanf("%d || %d", a, b);
    if((*a != 0 && *a != 1) || (*b != 0 && *b != 1)) *resultado = -1;//entrada invalida
    else if(*a || *b) *resultado = 1;
    else *resultado = 0;
}

void q28_nor(int *a, int *b, int *resultado) {
    scanf("%d !| %d", a, b);
    if(*a == 0 && *b == 0) *resultado = 1;
    else *resultado = 0;
}