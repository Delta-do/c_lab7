#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI 3.1415926535

void t1()
{
	char c;
	printf("������� ������: ");
	scanf_s("%c", &c);

	switch (c)
	{
	case '1':
		printf("��� �����!\n");
		break;
	case '2':
		printf("��� �����!\n");
		break;
	case '3':
		printf("��� �����!\n");
		break;
	case '4':
		printf("��� �����!\n");
		break;
	case '5':
		printf("��� �����!\n");
		break;
	case '6':
		printf("��� �����!\n");
		break;
	case '7':
		printf("��� �����!\n");
		break;
	case '8':
		printf("��� �����!\n");
		break;
	case '9':
		printf("��� �����!\n");
		break;
	case '0':
		printf("��� �����!\n");
		break;
	default:
		printf("��� �����!\n");
	}
}

void t2()
{
	float x, y;
	char c;
	printf("������� ���������: ");
	scanf("%f%c%f", &x, &c, &y);

	switch (c)
	{
	case '+':
	{
		printf("=%.1f", x + y);
		break;	
	}
	case '-':
	{
		printf("=%.1f", x - y);
		break;
	}
	case '*':
	{
		printf("=%.1f", x * y);
		break;
	}
	case '/':
	{
		printf("=%.1f", x / y);
		break;
	}
	default:
		printf("������������ ��������");
	}
}

void t3()
{
	char c;
	float res;
	printf("������� ����� ������ �� ������ ���������? ");
	scanf("%c", &c);

	switch (c)
	{
	case 't':
	{
		float a, b, c, p;
		printf("������� ������� ������������ ");
		scanf("%f %f %f", &a, &b, &c);
		p = (a + b + c) / 2.;
		res = pow(p * (p - a) * (p - b) * (p - c), 0.5);
		break;
	}
	case 's':
	{
		float a;
		printf("������� ������� �������� ");
		scanf("%f", &a);
		res = a * a;
		break;
	}
	case 'o':
	{
		float r;
		printf("������� ������ ����� ");
		scanf("%f", &r);
		res = PI * r * r;
		break;
	}
	case 'r':
	{
		float a, b;
		printf("������� ������� �������������� ");
		scanf("%f %f", &a, &b);
		res = a * b;
		break;
	}
	default:
		printf("����� ������ ��� � ���� ������");
	}

	printf("������� ����� %.1f", res);
}

int main()
{
	setlocale(LC_ALL, "RUS");

	//1 �������
	//t1();

	//2 �������
	//t2();
	
	//3 �������
	t3();

	return 0;
}