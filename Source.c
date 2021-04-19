#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char * const argv[], char * const envp[]) {
	setlocale(LC_ALL, "Portuguese");
	printf("%d\n", argc);
	printf("%s\n", argv[0]);
	printf("%s\n", envp[0]);
	printf("%s\n", envp[1]);
	printf("%s\n", envp[2]);
	printf("%s\n", envp[3]);
	printf("%s\n", envp[4]);

	return 0;
}
