﻿// Lab14-15.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int i, j, temp, n = 10; //ввод переменных
    int arr[10] = { 56, 12, 9, 88, 2, 74, 166, 35, 90, 1 }; // Объявляем массив из 10 элементов
    for (i = 0; i < n; i++) //вывод исходного массива на экран
        printf("%d ", arr[i]);
    printf("\n");
    for (i = 1, j = 2; i < n;) //ввод цикла
    {
        if (arr[i - 1] > arr[i]) //ввод условия, если предыдущий элемент больше взятого
        {
            temp = arr[i]; //обмен значениями
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            i--; //уменьшение переменной
            if (i > 0) continue; //если это не конец массива, то продолжаем
        }
        i = j++; //присвоение ового значения
    }
    printf("Отсортированный массив:\n");
    for (i = 0; i < n; i++) //вывод преобразованного массива на экран
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
