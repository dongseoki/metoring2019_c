// mentoring_no6_c_ch8_.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
int fibo(int index);
int max = -199999999;
int min = +200000000;
int result = 0;
int main()
{
	int arr[5] = {};
	int num = -199999999;
	for (int i = 0; i < 5; i++) {
		printf("입력된 정수 :");

		scanf_s("%d", &arr[i]);
		num = arr[i];
		if (max < num)
			max = num;
		if (min > num)
			min = num;
		result += num;
	}
	
	printf("입력한 정수중 최댓값은 %d 입니다.\n", max);
	printf("입력한 정수중 최솟값은 %d 입니다.\n", min);
	printf("입력한 정수들의 합은 %d 입니다.\n", result);

	return 0;
}
int fibo(int index) {
	if (index < 1)
		return -1;
	if (index == 1)
		return 1;
	if (index == 2)
		return 1;
	return fibo(index - 1) + fibo(index - 2);
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
