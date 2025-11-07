#include <stdio.h>
void q2_subtracao();
void q5_divisao();
void q7_fatorial();
void q9_or();
void q11_shift_direita();
void q14_somatorio_invervalo();
void q16_minimo();
void q18_abs();
void q21_maior_que();
void q23_menor_igual();
void q25_and();
void q28_nor();

int main() {
    int questao = -1;

    while(questao != 0) {
        printf("----------------------------------\n");
        printf("--escolha uma questao: de 1 a 28--\n");
        printf("(digite 0 para encerrar o programa)\n");
        printf("----------------------------------\n");
        printf("opcao: ");
        scanf("%d", &questao);
        printf("\n");

        switch (questao) {
            case 0:
                printf("encerrando o programa...\n");
                break;
            case 1:
                printf("executando a questao 1...\n");
                break;
            case 2:
                printf("executando a questao 2...\n");
                break;
            case 3:
                printf("executando a questao 3...\n");
                break;
            case 4:
                printf("executando a questao 4...\n");
                break;
            case 5:
                printf("executando a questao 5...\n");
                q5_divisao();
                break;
            case 6:
                printf("executando a questao 6...\n");
                break;
            case 7:
                printf("executando a questao 7...\n");
                q7_fatorial();
                break;
            case 8:
                printf("executando a questao 8...\n");
                break;
            case 9:
                printf("executando a questao 9...\n");
                break;
            case 10:
                printf("executando a questao 10...\n");
                break;
            case 11:
                printf("executando a questao 11...\n");
                q11_shift_direita();
                break;
            case 12:
                printf("executando a questao 12...\n");
                break;
            case 13:
                printf("executando a questao 13...\n");
                break;
            case 14:
                printf("executando a questao 14...\n");
                q14_somatorio_invervalo();
                break;
            case 15:
                printf("executando a questao 15...\n");
                break;
            case 16:
                printf("executando a questao 16...\n");
                break;
            case 17:
                printf("executando a questao 17...\n");
                break;
            case 18:
                printf("executando a questao 18...\n");
                q18_abs();
                break;
            case 19:
                printf("executando a questao 19...\n");
                break;
            case 20:
                printf("executando a questao 20...\n");
                break;
            case 21:
                printf("executando a questao 21...\n");
                q21_maior_que();
                break;
            case 22:
                printf("executando a questao 22...\n");
                break;
            case 23:
                printf("executando a questao 23...\n");
                break;
            case 24:
                printf("executando a questao 24...\n");
                break;
            case 25:
                printf("executando a questao 25...\n");
                q25_and();
                break;
            case 26:
                printf("executando a questao 26...\n");
                break;
            case 27:
                printf("executando a questao 27...\n");
                break;
            case 28:
                printf("executando a questao 28...\n");
                q28_nor();
                break;
        }

    }

    return 0;
}

void q2_subtracao() {
    int valor1, valor2, res; //mudo as variaveis pra "a" e "b"?

    scanf("%d - %d", &valor1, &valor2);

    res = valor1 - valor2;

    printf("%d\n", res);
}

void q5_divisao(){
    int valor1, valor2;
    double res;

    scanf("%d%d", &valor1, &valor2);

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

    scanf("%d%d", &valor1, &valor2);
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
    scanf("%d", &valor1);

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

void q23_menor_igual() {
    int valor1, valor2;

    scanf("%d <= %d", &valor1, &valor2);

    if (valor1 <= valor2)
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
