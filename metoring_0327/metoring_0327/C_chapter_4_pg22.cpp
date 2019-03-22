#include "pch.h"
#include <stdio.h>
int main(void) {
	int num = 16;
	printf("오른쪽으로 2칸이동하면 : %d\n", num>>2);
	printf("왼쪽으로 2칸이동하면 : %d\n", num<<2);
	return 0;

}