#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI 3.1415926535

void t1()
{
	char c;
	printf("Введите символ: ");
	scanf("%c", &c);

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
	float res;
	printf("Площадь какой фигуры вы хотите вычислить? ");
	scanf("%c", &c);

	switch (c)
	{
	case 's': //квадрат
	{
		float a;
		printf("Введите сторону квадрата ");
		scanf("%f", &a);
		res = a * a;
		printf("Площадь равна %.1f", res);
		break;
	}
	case 'r': //прямоугольник
	{
		float a, b;
		printf("Введите стороны прямоугольника ");
		scanf("%f %f", &a, &b);
		res = a * b;
		printf("Площадь равна %.1f", res);
		break;
	}
	case 't': //треугольник
	{
		float a, b, c, p;
		printf("Введите стороны треугольника ");
		scanf("%f %f %f", &a, &b, &c);
		p = (a + b + c) / 2.;
		res = pow(p * (p - a) * (p - b) * (p - c), 0.5);
		printf("Площадь равна %.1f", res);
		break;
	}
	case 'o': //круг
	{
		float r;
		printf("Введите радиус круга ");
		scanf("%f", &r);
		res = PI * r * r;
		printf("Площадь равна %.1f", res);
		break;
	}
	
	default:
		printf("Такой фигуры нет в базе данных");
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");

	//1 задание
	//t1();

	//2 задание
	//t2();
	
	//3 задание (33 вариант)
	t3();

	return 0;
}