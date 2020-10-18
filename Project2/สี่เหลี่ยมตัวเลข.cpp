#include <stdio.h>
#include<string.h>
void before(int a) {
	for (int i = 1; i <= (a / 2) + 1; i++) {
		for (int j = 1; j <= (a / 2) + 1; j++) {
			printf("%d ", j + i - 1);
		}

		for (int k = (a / 2); k >= 1; k--) {
			printf("%d ", k + i - 1);
		}
		printf("\n");
	}
}
void after(int a) {
	for (int i = a / 2; i >= 1; i--) {
		for (int j = 1; j <= (a / 2) + 1; j++) {
			printf("%d ", j + i - 1);
		}

		for (int k = (a / 2); k >= 1; k--) {
			printf("%d ", k + i - 1);
		}
		printf("\n");
	}
}

int main() {
	int a;
	scanf_s("%d", &a);
	before(a);
	after(a);


	return 0;
}