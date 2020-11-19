﻿// Lab10-11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int i, j, x, d; //ввод переменных
    int arr[5]; // Объявляем массив из 5 элементов
    printf("Введите 5 цифр в столбик:\n");
    for (i = 0; i < 5; i++)  // Вводим значения элементов массива через клавиатуру
    {
        scanf_s("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(int); //размер массива 
    for (d = n / 2; d > 0; d /= 2) //шагу присваивается начальное значение
    {
        for (i = d; i < n; i++) //начало цикла
        {
            x = arr[i]; //запоминаем значение анализируемого элемента
            for (j = i; j >= d; j -= d) //номеру текущего значения присваивается значение анализируемого элемент
            {
                if (x < arr[j - d]) //сравнение значений
                    arr[j] = arr[j - d]; //перестановка
                else break;
            }
            arr[j] = x; //значение текущего элемента становится равно анализир.элементу
        }
    }
    printf("Отсортированный массив:\n");
    for (i = 0; i < 5; i++) //вывод массива на экран
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
