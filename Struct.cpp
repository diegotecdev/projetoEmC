#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Questão 3 - declarar uma struct com dois membros
Ler a matrícula e o salário do funcionário, armazenar na struct e, depois,
imprimir na tela do usuário os dados armazenados*/


/*
Struct é uma estrutura de dados que comporta um conjunto de variáveis do mesmo
tipo ou de tipos diferentes

Array ou vetor é um conjunto de variáveis do mesmo tipo, n pode ter tipos diferentes
Quanto temos mais de um vetor chamamos de matriz

Strutc comporta vetores do mesmo tipo ou de tipos diferentes
*/
struct Funcionario {
    int matricula;
    float salario;
}; struct Funcionario tecnico;

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a matrícula do funcionário: ");
    scanf_s("%d", &tecnico.matricula);

    printf("Digite o salário do funcionário: ");
    scanf_s("%f", &tecnico.salario);

    printf("\n\nDADOS DO FUNCIONÁRIO\n");

    printf("\nMatrícula do Funcionário: %d\n", tecnico.matricula);
    printf("\nSalário do Funcionário: %.2f\n\n", tecnico.salario);

    system("pause");
    return 0;
}
