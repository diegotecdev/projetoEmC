#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Quest�o 3 - declarar uma struct com dois membros
Ler a matr�cula e o sal�rio do funcion�rio, armazenar na struct e, depois,
imprimir na tela do usu�rio os dados armazenados*/


/*
Struct � uma estrutura de dados que comporta um conjunto de vari�veis do mesmo
tipo ou de tipos diferentes

Array ou vetor � um conjunto de vari�veis do mesmo tipo, n pode ter tipos diferentes
Quanto temos mais de um vetor chamamos de matriz

Strutc comporta vetores do mesmo tipo ou de tipos diferentes
*/
struct Funcionario {
    int matricula;
    float salario;
}; struct Funcionario tecnico;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a matr�cula do funcion�rio: ");
    scanf_s("%d", &tecnico.matricula);

    printf("Digite o sal�rio do funcion�rio: ");
    scanf_s("%f", &tecnico.salario);

    printf("\n\nDADOS DO FUNCION�RIO\n");

    printf("\nMatr�cula do Funcion�rio: %d\n", tecnico.matricula);
    printf("\nSal�rio do Funcion�rio: %.2f\n\n", tecnico.salario);

    system("pause");
    return 0;
}
