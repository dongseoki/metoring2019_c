#include "pch.h"
#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("(num1-num2)(num2+num3)(num3 %% num1)= %d\n",(num1 - num2)*(num2 + num3)*(num3%num1));
}