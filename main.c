#include <stdio.h>
#include <locale.h>

main() {
	int a;
	int b;

	while (1) {
		setlocale(LC_ALL, "Portuguese");
		printf("primeiro n�mero:");
		scanf_s("%d", &a);
		printf("segundo n�mero:");
		scanf_s("%d", &b);

		if (a > b) {
			printf("primeiro n�mero � maior que o segundo\n\t");
		}
		else if (a < b) {
			printf("primeiro n�mero � menor que o segundo\n\t");
		}
		else {
			printf("primeiro numero � igual ao segundo\n\t");
		}
	}
}
