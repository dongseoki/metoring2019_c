#include "pch.h"
#include <stdio.h> //#include "pch.h"�� ������ �ٲ�� ������ �߻��Ѵ�.
#include <iostream> //https://noirstar.tistory.com/12

int main(void) {
	int num = 10;
	int * ptr1 = &num;
	int * ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
	return 0;
}