#include <iostream>
#include <locale.h>
#include <stdio.h>

//1 возвращает количество секунд, прошедших с начала дня.
void task1()
{

	int h, m, s1, s2, sum;
	printf("Введите часы: ");
	scanf_s("%d", &h);
	printf("Введите минуты: ");
	scanf_s("%d", &m);
	printf("Введите секунды: ");
	scanf_s("%d", &s1);

	s1 = h * 3600;
	printf("Часы в секундах: %d\n", s1);
	s2 = m * 60;
	printf("Минуты в секундах: %d\n", s2);
	sum = s1 + s2;
	printf("Кол-во секунд прошедших с начала дня: %d\n", sum);
}
//2 возвращает количество дней, прошедших с начала года
void task2()
{
	int m, d, d1;
	printf("Кол-во месяцев: ");
	scanf_s("%d", &m);
	printf("Кол-во дней: ");
	scanf_s("%d", &d);

	d1 = (m * 30) + d;
	printf("Дней в году прошло: %d\n", d1);
}

//3 возвращает количество дней, прошедших с начала года 2
void task3()
{
	int m, d, d1, d2;
	printf("Кол-во месяцев: ");
	scanf_s("%d", &m);
	printf("Кол-во дней: ");
	scanf_s("%d", &d);

	if ((m == 1) ||
		(m == 3) ||
		(m == 5) ||
		(m == 7) ||
		(m == 9) ||
		(m == 11))
	{
		d1 = (m * 31) + d;
		printf("Дней в году прошло: %d\n", d1);
	}
	else if ((m == 2) ||
		    (m == 4) ||
		    (m == 6) ||
		    (m == 8) ||
		    (m == 10) ||
			(m == 12))
		 {
		d2 = (m * 30) + d;
		printf("Дней в году прошло: %d\n", d2);

		 }
}
//4 находит наименьшее число из заданного набора трех целых чисел
void task4()
{
	int m1, m2, m3;
	printf("Введите первое любое число: ");
	scanf_s("%d", &m1);
	printf("Введите второе любое число: ");
	scanf_s("%d", &m2);
	printf("Введите третье любое число: ");
	scanf_s("%d", &m3);

	if (m2 == m3)
	{
		printf("Это числа равны: %d = %d", m2, m3);
	}
	else if (m1 == m2)
	{
		printf("Это числа равны: %d = %d", m1, m2);
	}
	else if (m1 == m3)
	{
		printf("Это числа равны: %d = %d", m1, m3);
	}
	else if (m1 > m2)
	{
		printf("Число %d больше чем число %d", m1, m2);
	}
	else if (m1 > m3)
	{
		printf("Число %d больше чем число %d", m1, m3);
	}
	else if (m2 > m1)
	{
		printf("Число %d больше чем число %d", m2, m1);
	}
	else if (m2 > m3)
	{
		printf("Число %d больше чем число %d", m2, m3);
	}
	else if (m3 > m1)
	{
		printf("Число %d больше чем число %d", m3, m1);
	}
	else if (m3 > m2)
	{
		printf("Число %d больше чем число %d", m3, m2);
	}

}















int main()
{
	setlocale(LC_ALL, "");

	int task = 0;
	int restart = 0;
	do
	{
		printf("\n----------------------------------\n");
		printf("Введите номер задание от 1 до 4");
		printf("\n----------------------------------\n");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;
		}

		printf("\n----------------------------------\n");
		printf("ВЫ хотите продолжить? 1/0");
		printf("\n----------------------------------\n");
		scanf_s("%d", &restart);

	} while (restart == 1);
}