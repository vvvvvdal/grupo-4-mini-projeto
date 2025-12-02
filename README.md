# Mini Projeto - Calculadora Multifuncional em C

Este projeto foi desenvolvido como atividade avaliativa da disciplina de Introdução à Programação. O objetivo foi criar uma calculadora robusta em linguagem C, capaz de realizar 28 operações diferentes, variando desde aritmética básica até operações bit-a-bit (bitwise), estatística básica e lógica booleana.

O desenvolvimento seguiu rigorosamente as instruções de utilizar funções do tipo `void`, manipulação de ponteiros para retorno de valores e estruturação modular do código.

## 👥 Integrantes do Grupo

**Alunos:**
* Amanda Sales Alborgueti
* Felipe Gonçalves Vidal
* Joaquim Pedro Braga Tavares
* Lucas Fernandes Machado
* Paulo Adriano Valotto
* Sara Raquel Lima Montelo
* Sarah Cristina de Oliveira

**Monitores:**
* João Frederico
* Raphaelle Oliveira

---

## 🚀 Como Compilar e Executar

Como o projeto está dividido em módulos (`main.c`, `calculadora.c` e `calculadora.h`), é necessário compilar os arquivos de código-fonte juntos.

-----

## 📖 Instruções de Uso

O programa funciona através de um menu numerado controlado por um loop. O fluxo de utilização é o seguinte:

1.  **Menu Principal:** Ao iniciar, você verá uma lista (implícita) de 28 operações. Digite o número da operação desejada (1 a 28) e pressione ENTER.
2.  **Entrada de Dados:** O programa solicitará os valores.
      * ⚠️ **Atenção:** A entrada deve seguir o formato especificado na tela. Por exemplo, se a operação for Soma (`+`), você deve digitar o operador entre os números.
      * *Exemplo:* Para somar 1 e 2, digite: `1 + 2`.
3.  **Resultado:** O resultado será calculado e exibido na tela.
4.  **Repetição:** O programa retornará ao menu inicial.
5.  **Encerrar:** Digite `0` no menu principal para sair.

-----

## 🛠️ Lista de Operações Implementadas

| Nº | Operação | Símbolo/Comando | Descrição |
|:---:|:--- |:---:|:--- |
| **1** | Soma | `+` | Soma dois inteiros. |
| **2** | Subtração | `-` | Subtrai dois inteiros. |
| **3** | Multiplicação | `*` | Multiplica dois inteiros. |
| **4** | Divisão | `/` | Divisão real de dois números. |
| **5** | Resto | `%` | Resto da divisão inteira. |
| **6** | Potência | `~` | Base elevada ao expoente. |
| **7** | Fatorial | `!` | Fatorial de um número. |
| **8** | AND (Bitwise) | `&` | Operação E bit a bit. |
| **9** | OR (Bitwise) | `\|` | Operação OU bit a bit. |
| **10** | XOR (Bitwise) | `^` | Operação OU Exclusivo bit a bit. |
| **11** | Shift Right | `>>` | Deslocamento de bits à direita. |
| **12** | Shift Left | `<<` | Deslocamento de bits à esquerda. |
| **13** | Média | `M` | Média aritmética de dois números. |
| **14** | Somatório Intervalo | `S` | Soma de todos números entre A e B. |
| **15** | Produtório Intervalo| `P` | Produto de todos números entre A e B. |
| **16** | Mínimo | `min` | Retorna o menor entre dois números. |
| **17** | Máximo | `max` | Retorna o maior entre dois números. |
| **18** | Valor Absoluto | `abs` | O valor positivo de um número. |
| **19** | Igualdade | `==` | Verifica se A é igual a B. |
| **20** | Diferença | `!=` | Verifica se A é diferente de B. |
| **21** | Maior que | `>` | Verifica se A é maior que B. |
| **22** | Menor que | `<` | Verifica se A é menor que B. |
| **23** | Maior ou Igual | `>=` | Comparação maior ou igual. |
| **24** | Menor ou Igual | `<=` | Comparação menor ou igual. |
| **25** | AND Lógico | `&&` | E lógico (Boolean). |
| **26** | NAND Lógico | `!&` | NÃO E lógico. |
| **27** | OR Lógico | `\|\|` | OU lógico (Boolean). |
| **28** | NOR Lógico | `!\|` | NÃO OU lógico. |

-----

## ⚙️ Detalhes da Implementação

Para atender aos requisitos técnicos do projeto:

  * **Funções Void:** Todas as funções de cálculo (`q1` a `q28`) foram declaradas como `void`.
  * **Ponteiros:** A comunicação entre as funções e a `main` é feita exclusivamente através de **passagem por referência**. Os endereços das variáveis de entrada e da variável de resultado são passados para a função, que lê os dados do teclado, processa e armazena o resultado diretamente no endereço de memória apontado.
  * **Modularização:**
      * `main.c`: Responsável pela interface com o usuário e controle de fluxo.
      * `calculadora.c`: Contém a lógica matemática de todas as funções.
      * `calculadora.h`: Arquivo de cabeçalho com os protótipos das funções.

<!-- end list -->

```
```
