// mentoring_no6_c_ch8_.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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
	//scanf_s �� �̿��� ��.]

	//https://m.blog.naver.com/123gtf/220905979083
	// �����Ϸ��� ���� �ý��� �ּ��� ũ�Ⱑ �޶�����.

	int x = 100;
	printf("sizeof(x) = %d\n", sizeof(x));
	printf("addressof x = %p\n", &x);
	printf("address size of x = %d\n", sizeof(&x));
	char arr[100];
	printf("���ڿ� �Է�:");
	scanf_s("%s", arr,sizeof(arr));
	int i = 0;
	int length = strlen(arr);
	int j = length / 2;
	printf("���� ���ڿ�:%s\n", arr);
	for (i = 0; i <= j; i++) {
		char temp = arr[i];
		arr[i] = arr[length - 1 - i];
		arr[length - 1 - i] = temp;
	}
	printf("������ ���ڿ�:%s\n", arr);
	//int num = -199999999;
	return 0;
}

// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.
