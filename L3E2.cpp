﻿#include <Windows.h>
#include <iostream>

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int v1, v2, v3, v4, v5;
    int max;
    
    printf("Введите 5 чисел ");
    scanf_s("%d%d%d%d%d", &v1, &v2, &v3, &v4, &v5);

    max = v1;
    if (v2 > max) {
        max = v2;
    }if (v3 > max) {
        max = v3;
    }if (v4 > max) {
        max = v4;
    }if (v5 > max) {
        max = v5;
    }

    printf("Максимальное число = %d", max);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
