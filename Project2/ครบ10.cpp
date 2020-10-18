#include<stdio.h>
#include<string.h>
int main2() {
	int i = 0;
	char input[100];
	scanf_s("%s", input,100);
	int n = strlen(input);
	for (i = 0; i <= n; i++) {
		printf("%c", input[i]);

		if ((i + 1) % 10 == 0 ) {
			printf("\n");
		}
	}

	return 0;
}