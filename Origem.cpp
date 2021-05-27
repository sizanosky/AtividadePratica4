/*
* Atividade Pr�tica - Exerc�cio 4
* Aluno: Marcos Fabricio Sizan�sky RU-3395570
* Professor: Winston Sen Lun Fung
* Data cria��o: 03/05/2021
*/

#include <stdio.h>
#include <locale.h>

// Fun��o para limpar o buffer do teclado ap�s um "scanf_s".
void limpa_buffer_teclado();
// Fun��o efetua somas sucessivas para realizar uma multiplica��o.
int mult_soma_recurssiva(int num1, int num2);

int main() {
    printf("Hello World!\n\n");

    // Fun��o para habilitar a utiliza��o de caracteres da l�ngua portuguesa.
    setlocale(LC_ALL, "Portuguese");

    // Declara��o de vari�veis.
    int numero1, numero2, resultado;

    // Cabe�alho do programa e informa��es ao usu�rio.
    printf("+=+=+=+= MULTIPLICA��O COM FUN��O RECURSIVA =+=+=+=+\n\n");
    printf("- Digite dois n�meros para efetuar uma multiplica��o .\n");
    printf("- Visualize na tela o resultado da opera��o.\n\n");

    // Entradas do usu�rio.
    printf("Digite o primeiro n�mero: ");
    scanf_s("%d", &numero1);
    limpa_buffer_teclado();

    printf("Digite o segundo n�mero: ");
    scanf_s("%d", &numero2);
    limpa_buffer_teclado();

    // A vari�vel "resultado" recebe o retorno da fun��o.
    resultado = mult_soma_recurssiva(numero1, numero2);

    // Imprime o resultado da multiplica��o.
    printf("\n*** Resultado da multiplica��o ***\n\n");
    printf("O resultado da sua multiplica��o �: %d\n", resultado);


    return 0;
}

// Fun��es.

void limpa_buffer_teclado() {
    /* Est� fun��o � utilizada para limpar o buffer do teclado ap�s
     * um "scanf_s".
     */

    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int mult_soma_recurssiva(int num1, int num2) {
    /*
     * Est� fun��o faz a multiplica��o de dois n�meros "num1" e "num2",
     * o calculo � feito de forma recursiva com somas sucessivas.
     */

    if (num1 == 1) {
        return num2;
    }
    else {
        return num2 + mult_soma_recurssiva(num1 - 1, num2);
    }
}