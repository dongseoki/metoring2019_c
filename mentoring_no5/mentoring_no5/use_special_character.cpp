// mentoring_no5.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

//
//#2
//
//Ư������ Ȱ���ϱ�
//"���� �������� ���Դϱ�?" 3.234
//
//
//ū����ǥ ����ǥ�� ����Ұ�.
//���� ���̴� ~�ڱ���!
//
//
//�ʵ����� 10ĭ �ؼ� �����������ؼ� ����� ����ض�!
//�Ҽ��� ���� ���ڸ�
//
//
//�� ������ 10���� 16���� ��� ����ϱ�!!

int main()
{
	int r;
	double result;
	const double PI = 3.14;
	
	printf("\"���� �������� ���Դϱ�\?\"\n");
	scanf_s("%d", &r);
	result = (double)r * r* PI;
	printf("%10.2f\n", result);
	printf("%10x\n", int(result));

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