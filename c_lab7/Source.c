#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void t1()
{
	char c;
	printf("Введите символ: ");
	scanf_s("%c", &c);

	switch (c)
	{
	case '1':
		printf("Это цифра!\n");
		break;
	case '2':
		printf("Это цифра!\n");
		break;
	case '3':
		printf("Это цифра!\n");
		break;
	case '4':
		printf("Это цифра!\n");
		break;
	case '5':
		printf("Это цифра!\n");
		break;
	case '6':
		printf("Это цифра!\n");
		break;
	case '7':
		printf("Это цифра!\n");
		break;
	case '8':
		printf("Это цифра!\n");
		break;
	case '9':
		printf("Это цифра!\n");
		break;
	case '0':
		printf("Это цифра!\n");
		break;
	default:
		printf("Это буква!\n");
	}
}

void t2()
{
	float x, y;
	char c;
	printf("Введите выражение: ");
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
		printf("Недопустимая операция");
	}
}

void t3()
{
	char c;
	printf("Площадь какой фигуры вы хотите вычислить?");
	scanf("%c", &c);

	switch (c)
	{
	case 't':
	{
		printf("Введите стороны треугольника ");
		scanf("%f %f %f", &a, &b,)
	}
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");

	//1 задание
	//t1();

	//2 задание
	//t2();
	
	//3 задание
	t3();

	return 0;
}