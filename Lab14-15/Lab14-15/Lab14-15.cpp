﻿// Lab14-15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int i=1, j=2, buf, n=10; //ввод переменных
    int arr[10]{}; // Объявляем массив из 10 элементов
    for (i = 0; i < 10; i++) // Вводим значения элементов массива через клавиатуру
    {
        scanf_s("%d", &arr[i]);
    }
    while (i < n)
    {
        if (arr[i-1] > arr[i])
        {
            buf = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = buf;
            i--;
            if (i > 0) continue;
        }
        i = j++;
    }
    printf("Отсортированный массив:\n");
    for (i = 0; i < 10; i++) //вывод массива на экран
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
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
