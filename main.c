#include <stdio.h>

void sum(int num1, int num2) {
	printf("Sum result : %d\n", num1 + num2);
}

void sub(int num1, int num2) {
	printf("Sub result : %d\n", num1 - num2);
}

void mul(int num1, int num2) {
	printf("mul result : %d\n", num1 * num2);
}

void di(int num1, int num2) {
	printf("div result : %d\n", num1 / num2);
}

void rem(int num1, int num2) {
	printf("remainder : %d\n", num1 % num2);
}

int main(void) {
	int n1, n2;

	printf("Enter first number :");
	scanf_s("%d", &n1);		// input first number

	printf("Enter second number :");
	scanf_s("%d", &n2);		// input second number

	sum(n1, n2);	// +
	sub(n1, n2);	// -
	mul(n1, n2);    // *
	di(n1, n2);		// /
	rem(n1, n2);	// %

}