#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char x[1000];
	int a = 1, b = 0, c = 0, temp;
	scanf("%s", &x);
	for (int i = 0; i < strlen(x); i++)
	{
		if (x[i] == 'A') {
			temp = a;
			a = b;
			b = temp;
		}
		else if (x[i] == 'B') {
			temp = c;
			c = b;
			b = temp;
		}
		else if (x[i] == 'C') {
			temp = a;
			a = c;
			c = temp;
		}
	}
	if (a == 1) {
		printf("1");
	}
	else if (b == 1) {
		printf("2");
	}
	else if (c == 1) {
		printf("3");
	}
}