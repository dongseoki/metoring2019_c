// mentoring_no6_c_ch8_.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
int fibo(int index);
int max = -199999999;
int min = +200000000;
int result = 0;
int main()
{
	//https://alisa2304.tistory.com/106
	//scanf_s 를 이용할 때.]

	//https://m.blog.naver.com/123gtf/220905979083
	// 컴파일러에 따라 시스템 주소의 크기가 달라진다.

	int x = 100;
	printf("sizeof(x) = %d\n", sizeof(x));
	printf("addressof x = %p\n", &x);
	printf("address size of x = %d\n", sizeof(&x));
	char arr[100];
	printf("문자열 입력:");
	scanf_s("%s", arr,sizeof(arr));
	int i = 0;
	int length = strlen(arr);
	int j = length / 2;
	printf("정상 문자열:%s\n", arr);
	for (i = 0; i <= j; i++) {
		char temp = arr[i];
		arr[i] = arr[length - 1 - i];
		arr[length - 1 - i] = temp;
	}
	printf("뒤집힌 문자열:%s\n", arr);
	//int num = -199999999;
	return 0;
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
