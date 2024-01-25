// L3E1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <Windows.h>
#include <iostream>

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, min, max;

    printf("Введите первое число = ");
    scanf_s("%d", &a);
    printf("Введите второе число = ");
    scanf_s("%d", &b);

    if (a < b) {
        min = a;
        max = b;
    }
    else
    {
        max = a;
        min = b;
    }
    printf("Максимальное число %d \n",max);
    printf("Минимальное число %d \n",min);
}

