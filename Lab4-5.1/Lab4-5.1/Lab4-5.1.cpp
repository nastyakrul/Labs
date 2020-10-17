﻿// Lab4-5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int arr[10]; // Объявляем массив из 10 элементов
    int n = sizeof(arr) / sizeof(int); //размер массива 
    for (int i = 0; i < 10; i++)  // Вводим значения элементов массива через клавиатуру
    {
        printf("[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
    int i = 0, j = 0; //начальное значение
    while (i < n - 1) //внешний цикл
    {
        while (j < n-1-i) //внутренний цикл
        {
            if (arr[j +1] < arr[j]) // условие, если текущий элемент больше предыдущего
            {
                int c = arr[j]; // меняем их местами
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
            j++;
        }
        i++; 
        j = 0;
    }
    // Выводим отсортированные элементы массива
    printf("Отсортированный массив:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    system("pause");
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