#include <iostream>
#include <locale.h>
#include <stdio.h>

//1 ���������� ���������� ������, ��������� � ������ ���.
void task1()
{

	int h, m, s1, s2, sum;
	printf("������� ����: ");
	scanf_s("%d", &h);
	printf("������� ������: ");
	scanf_s("%d", &m);
	printf("������� �������: ");
	scanf_s("%d", &s1);

	s1 = h * 3600;
	printf("���� � ��������: %d\n", s1);
	s2 = m * 60;
	printf("������ � ��������: %d\n", s2);
	sum = s1 + s2;
	printf("���-�� ������ ��������� � ������ ���: %d\n", sum);
}
//2 ���������� ���������� ����, ��������� � ������ ����
void task2()
{
	int m, d, d1;
	printf("���-�� �������: ");
	scanf_s("%d", &m);
	printf("���-�� ����: ");
	scanf_s("%d", &d);

	d1 = (m * 30) + d;
	printf("���� � ���� ������: %d\n", d1);
}

//3 ���������� ���������� ����, ��������� � ������ ���� 2
void task3()
{
	int m, d, d1, d2;
	printf("���-�� �������: ");
	scanf_s("%d", &m);
	printf("���-�� ����: ");
	scanf_s("%d", &d);

	if ((m == 1) ||
		(m == 3) ||
		(m == 5) ||
		(m == 7) ||
		(m == 9) ||
		(m == 11))
	{
		d1 = (m * 31) + d;
		printf("���� � ���� ������: %d\n", d1);
	}
	else if ((m == 2) ||
		    (m == 4) ||
		    (m == 6) ||
		    (m == 8) ||
		    (m == 10) ||
			(m == 12))
		 {
		d2 = (m * 30) + d;
		printf("���� � ���� ������: %d\n", d2);

		 }
}
//4 ������� ���������� ����� �� ��������� ������ ���� ����� �����
void task4()
{
	int m1, m2, m3;
	printf("������� ������ ����� �����: ");
	scanf_s("%d", &m1);
	printf("������� ������ ����� �����: ");
	scanf_s("%d", &m2);
	printf("������� ������ ����� �����: ");
	scanf_s("%d", &m3);

	if (m2 == m3)
	{
		printf("��� ����� �����: %d = %d", m2, m3);
	}
	else if (m1 == m2)
	{
		printf("��� ����� �����: %d = %d", m1, m2);
	}
	else if (m1 == m3)
	{
		printf("��� ����� �����: %d = %d", m1, m3);
	}
	else if (m1 > m2)
	{
		printf("����� %d ������ ��� ����� %d", m1, m2);
	}
	else if (m1 > m3)
	{
		printf("����� %d ������ ��� ����� %d", m1, m3);
	}
	else if (m2 > m1)
	{
		printf("����� %d ������ ��� ����� %d", m2, m1);
	}
	else if (m2 > m3)
	{
		printf("����� %d ������ ��� ����� %d", m2, m3);
	}
	else if (m3 > m1)
	{
		printf("����� %d ������ ��� ����� %d", m3, m1);
	}
	else if (m3 > m2)
	{
		printf("����� %d ������ ��� ����� %d", m3, m2);
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
		printf("������� ����� ������� �� 1 �� 4");
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
		printf("�� ������ ����������? 1/0");
		printf("\n----------------------------------\n");
		scanf_s("%d", &restart);

	} while (restart == 1);
}