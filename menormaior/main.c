#include <stdio.h>
#include <locale.h>

main() {
	int a;
	int b;

	printf("primeiro número:");
	scanf("%d", &a);
	printf("segundo número:");
	scanf("%d", &b);

	while (1) {

		if (a > b) {
			printf("primeiro numero maior que o segundo");
		}
		else if (a < b) {
			printf("primeiro numero menor que o segundo");
		}
		else(a == b) {
			printf("primeiro numero igual ao segundo");
		}
	}
}