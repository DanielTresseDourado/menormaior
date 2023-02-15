#include <stdio.h>
#include <locale.h>

main() {
	int a;
	int b;

	while (1) {
		setlocale(LC_ALL, "Portuguese");
		printf("primeiro número:");
		scanf_s("%d", &a);
		printf("segundo número:");
		scanf_s("%d", &b);

		if (a > b) {
			printf("primeiro número é maior que o segundo\n\t");
		}
		else if (a < b) {
			printf("primeiro número é menor que o segundo\n\t");
		}
		else {
			printf("primeiro numero é igual ao segundo\n\t");
		}
	}
}
