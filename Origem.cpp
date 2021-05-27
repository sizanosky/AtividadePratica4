/*
* Atividade Prática - Exercício 4
* Aluno: Marcos Fabricio Sizanósky RU-3395570
* Professor: Winston Sen Lun Fung
* Data criação: 03/05/2021
*/

#include <stdio.h>
#include <locale.h>

// Função para limpar o buffer do teclado após um "scanf_s".
void limpa_buffer_teclado();
// Função efetua somas sucessivas para realizar uma multiplicação.
int mult_soma_recurssiva(int num1, int num2);

int main() {
    printf("Hello World!\n\n");

    // Função para habilitar a utilização de caracteres da língua portuguesa.
    setlocale(LC_ALL, "Portuguese");

    // Declaração de variáveis.
    int numero1, numero2, resultado;

    // Cabeçalho do programa e informações ao usuário.
    printf("+=+=+=+= MULTIPLICAÇÃO COM FUNÇÃO RECURSIVA =+=+=+=+\n\n");
    printf("- Digite dois números para efetuar uma multiplicação .\n");
    printf("- Visualize na tela o resultado da operação.\n\n");

    // Entradas do usuário.
    printf("Digite o primeiro número: ");
    scanf_s("%d", &numero1);
    limpa_buffer_teclado();

    printf("Digite o segundo número: ");
    scanf_s("%d", &numero2);
    limpa_buffer_teclado();

    // A variável "resultado" recebe o retorno da função.
    resultado = mult_soma_recurssiva(numero1, numero2);

    // Imprime o resultado da multiplicação.
    printf("\n*** Resultado da multiplicação ***\n\n");
    printf("O resultado da sua multiplicação é: %d\n", resultado);


    return 0;
}

// Funções.

void limpa_buffer_teclado() {
    /* Está função é utilizada para limpar o buffer do teclado após
     * um "scanf_s".
     */

    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int mult_soma_recurssiva(int num1, int num2) {
    /*
     * Está função faz a multiplicação de dois números "num1" e "num2",
     * o calculo é feito de forma recursiva com somas sucessivas.
     */

    if (num1 == 1) {
        return num2;
    }
    else {
        return num2 + mult_soma_recurssiva(num1 - 1, num2);
    }
}