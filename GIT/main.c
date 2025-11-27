#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"
int main() {
    int questao = -1;
    int a_int, b_int, resultado_int;
    double a_double, b_double, resultado_double;
    long long int a_lli, b_lli, resultado_lli;

    while(questao != 0) {
        questao = -1;
        printf("----------------------------------\n");
        printf("--escolha uma questao de 1 a 28--\n");//colocar o que cada questao faz aqui? tipo 1. soma sla
        printf("(digite 0 para encerrar o programa)\n");
        printf("----------------------------------\n");
        printf("opcao: ");
        scanf("%d", &questao);
        printf("\n");
        system("clear"); //linux
        //system("cls"); //windows

        switch (questao) {
            case 0:
                printf("encerrando o programa...\n");
                break;
            case 1:
                printf("executando a questao 1...\n");
                printf("soma\n");
                printf("digite dois valores inteiros separados por + .\n");
                break;
            case 2:
                printf("executando a questao 2...\n");
                printf("subtracao\n");
                printf("digite dois valores inteiros separados por - .\n");
                q2_subtracao(&a_int, &b_int, &resultado_int);
                printf("%d\n", resultado_int);
                break;
            case 3:
                printf("executando a questao 3...\n");
                printf("multiplicacao\n");
                printf("digite dois valores inteiros separados por * .\n");
                break;
            case 4:
                printf("executando a questao 4...\n");
                printf("divisao\n");
                printf("digite dois valores reais separados por / .\n");
                q4_divisao(&a_double, &b_double, &resultado_double);
                printf("%.3lf\n", resultado_double);
                break;
            case 5:
                printf("executando a questao 5...\n");
                printf("resto\n");
                printf("digite dois valores inteiros separados por %% .\n");
                break;
            case 6:
                printf("executando a questao 6...\n");
                printf("potencia\n");
                printf("digite dois valores inteiros separados por ~ .\n");
                break;
            case 7:
                printf("executando a questao 7...\n");
                printf("fatoracao\n");
                printf("digite um valor inteiro seguido por ! .\n");
                q7_fatorial(&a_lli, &resultado_lli);
                printf("%lld\n", resultado_lli);
                break;
            case 8:
                printf("executando a questao 8...\n");
                printf("AND bit a bit\n");
                printf("digite dois valores inteiros separados por & .\n");
                break;
            case 9:
                printf("executando a questao 9...\n");
                printf("OR bit a bit\n");
                printf("digite dois valores inteiros separados por | .\n");
                q9_or(&a_int, &b_int, &resultado_int);
                printf("%d\n", resultado_int);
                break;
            case 10:
                printf("executando a questao 10...\n");
                printf("XOR bit a bit.\n");
                printf("digite dois valores inteiros separados por ^ .\n");
                break;
            case 11:
                printf("executando a questao 11...\n");
                printf("shift a direita\n");
                printf("digite dois valores inteiros separados por >> .\n");
                q11_shift_direita(&a_int, &b_int, &resultado_int);
                printf("%d\n", resultado_int);
                break;
            case 12:
                printf("executando a questao 12...\n");
                printf("shift a esquerda\n");
                printf("digite dois valores inteiros separados por << .\n");
                break;
            case 13:
                printf("executando a questao 13...\n");
                printf("media de dois numeros\n");
                printf("digite dois valores inteiros separados por \"M\".\n");
                break;
            case 14:
                printf("executando a questao 14...\n");
                printf("somatorio de um intervalo\n");
                printf("digite dois valores inteiros separados por \"S\".\n");
                q14_somatorio_invervalo(&a_int, &b_int, &resultado_int);
                printf("%d\n", resultado_int);
                break;
            case 15:
                printf("executando a questao 15...\n");
                printf("produtorio de um intervalo\n");
                printf("digite dois valores inteiros separados por \"P\".\n");
                break;
            case 16:
                printf("executando a questao 16...\n");
                printf("minimo entre dois numeros\n");
                printf("digite dois valores inteiros separados por \"min\".\n");
                q16_minimo(&a_int, &b_int, &resultado_int);
                printf("%d\n", resultado_int);
                break;
            case 17:
                printf("executando a questao 17...\n");
                printf("maximo entre dois numeros\n");
                printf("digite dois valores inteiros separados por \"max\".\n");
                break;
            case 18:
                printf("executando a questao 18...\n");
                printf("valor absoluto de um numero\n");
                printf("digite um valor inteiro com \"abs\" depois.\n");
                q18_abs(&a_int, &resultado_int);
                printf("%d\n", resultado_int);
                break;
            case 19:
                printf("executando a questao 19...\n");
                printf("igualdade\n");
                printf("digite dois valores inteiros separados por == .\n");
                break;
            case 20:
                printf("executando a questao 20...\n");
                printf("diferenca\n");
                printf("digite dois valores inteiros separados por != .\n");
                break;
            case 21:
                printf("executando a questao 21...\n");
                printf("maior que\n");
                printf("digite dois valores inteiros separados por > .\n");
                q21_maior_que(&a_int, &b_int, &resultado_int);
                if (resultado_int == 1) printf("SIM\n");
                else printf("NAO\n");
                break;
            case 22:
                printf("executando a questao 22...\n");
                printf("menor que\n");
                printf("digite dois valores inteiros separados pelo simbolo < .\n");
                break;
            case 23:
                printf("executando a questao 23...\n");
                printf("maior ou igual\n");
                printf("digite dois valores inteiros separados por >= .\n");
                q23_maior_igual(&a_int, &b_int, &resultado_int);
                printf("%d\n", resultado_int);
                break;
            case 24:
                printf("executando a questao 24...\n");
                printf("menor ou igual\n");
                printf("digite dois valores inteiros separados por >= .\n");
                break;
            case 25:
                printf("executando a questao 25...\n");
                printf("AND\n");
                printf("digite 1 ou 0 separados por && .\n");
                q25_and(&a_int, &b_int, &resultado_int);
                if (resultado_int == 1) printf("SIM\n");
                else printf("NAO\n");
                break;
            case 26:
                printf("executando a questao 26...\n");
                printf("NAND\n");
                printf("digite 1 ou 0 separados por !& .\n");
                break;
            case 27:
                printf("executando a questao 27...\n");
                printf("OR\n");
                printf("digite 1 ou 0 separados por || .\n");
                break;
            case 28:
                printf("executando a questao 28...\n");
                printf("NOR\n");
                printf("digite 1 ou 0 separados por !| .\n");
                q28_nor(&a_int, &b_int, &resultado_int);
                if (resultado_int == 1) printf("SIM\n");
                else printf("NAO\n");
                break;
            default:
                printf("valor invalido\n");
                break;
        }

    }

    return 0;
}