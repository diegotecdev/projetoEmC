#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void sum(int *num1, int *num2);
void alterar(int* nu1, int* nu2);
int main() {
	setlocale(LC_ALL, "Portuguese");
	char c;
	int *p;
	int n1,n2;
	printf("Digite o valor de n1: ");
	scanf_s("%i", &n1);
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	printf("Digite o valor de n2: ");
	scanf_s("%i", &n2);
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	// ponteiro p aponta para o endereço de n1
	p = &n1;
	
	printf("Endereço de n1: %p\n", &n1);
	printf("Endereço de n1 usando ponteiro %p\n\n\n", p);

	// ponteiro p aponta para o endereço de n2
	p = &n2;

	//sum recebe n1 + n2
	sum(&n1,&n2);
	printf("Endereço de n2: %p\n", &n2);
	printf("Endereço de n2 usando ponteiro %p\n\n\n", p);
	

	alterar(&n1, &n2);
	printf("Valor do resultado de n1 alterado através da função: %i\n\n",n1);
	printf("Valor do resultado de n2 alterado através da função: %i\n\n", *p);
	

	system("pause");
	return 0;
}
void sum(int *num1, int *num2) {
	*num1 + *num2 ;
	printf("%i + %i = %i\n\n", *num1, *num2, *num1 + *num2);
}
void alterar(int *nu1, int *nu2) {
	*nu1 = *nu1 + 1;
	*nu2 = *nu2 + 1;
}