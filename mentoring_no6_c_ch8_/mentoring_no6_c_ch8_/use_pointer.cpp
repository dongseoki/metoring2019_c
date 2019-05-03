#include "pch.h"
#include <stdio.h> //#include "pch.h"와 순서가 바뀌면 오류가 발생한다.
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