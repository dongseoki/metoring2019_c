// mentoring_no5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

//
//#2
//
//특수문자 활용하기
//"원의 반지름은 몇입니까?" 3.234
//
//
//큰따옴표 물음표도 출력할것.
//원의 넓이는 ~겠군요!
//
//
//필드폭을 10칸 해서 오른쪽정렬해서 결과를 출력해라!
//소수점 이하 두자리
//
//
//그 넓이의 10진수 16진수 결과 출력하기!!

int main()
{
	int count = 0;
	int r;
	double sum = 0;
	double result;
	const double PI = 3.14;

	printf("구하고 싶은 값의 개수:");
	scanf_s("%d", &count);
	int i = 0;
	while (1) {
		if (i >= count)
			break;
		printf("\"원의 반지름은 몇입니까\? ");
		scanf_s("%d", &r);
		result = (double)r * r* PI;
		printf("%d번째 원의 넓이: %10.2f\n", i + 1, result);
		switch (int(result) / 10) {
			case 5:
				printf("%c 등급의 원이네요\n", 'C');
				break;
			case 4:
				printf("%c 등급의 원이네요\n", 'D');
				break;
			case 3:
				printf("%c 등급의 원이네요\n", 'E');
			default:
				printf("%c 등급의 원이네요\n", 'F');

		}
		sum += result;

		i++;
	}
	printf("모든 원의 넓이의 합은 %10.2f 입니다.\n", sum);

	//printf("%10x\n", int(result));

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
