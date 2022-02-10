#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main(void)
{
	setlocale(LC_ALL, "");


	//Задача 1
	/*int a, b;
	
	int c = 0;
	printf("Введите первое значение: \n");
	scanf_s("%d", &a);
	printf("\nВведите второе значение: \n");
	scanf_s("%d", &b);
	for (int i = 0; i < b; i++)
	{
		c += a;
	}
	printf("\nВывод значения c = %d \n", c);*/


	//Задача2
	/*int a[10];
	int chet = 0, nechet = 0;
	printf("Введите значения массиву: \n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] % 2 == 0)
		{
			chet += 1;
		}
		else
		{
			nechet += 1;
		}
	}
	printf("\n Количество четных = %d \n", chet);
	printf("\n Количество нечетных = %d \n", nechet);*/



	//Задача 3
	/*char str[100];
	scanf_s("%s",str,100);
	for (int i = 0; i < 50; i++)
	{
		if (str[i] == '?')
		{
			str[i] = '!';
		}
	}
	printf("%s", str);*/


	//Задача 4
	/*int a = 0, b = 0, c = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a + b > c && a+c>b && b+c>a)
	{
	
	 if (a == b && b == c)
	 {
	 printf("Треугольник равнсторонний");
	 }

	 else if ((a == b && a!=c) || (a == c && b!=c) || (b == c && a!=b))
	 {
	 printf("Треугольник равнобедренный");
	 }
	 else if (a*a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	 {
	 printf("Треугольник прямоугольный ");
	 }
	}
	else
	{
	 printf(" Треугольник построить не возможна ");
	}*/


	//Задача 5
	/*int a = 0, b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	a = powf(a, b);
	printf("%d",a);*/

}