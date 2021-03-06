﻿// Lab16-17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdlib.h>
#include <locale.h>

void fastsort(int* a, int b, int e) 
{
    if (b < e) // тк программа работает через рекурсия, то создаем новый метод, для ссылки не на массив,
               //а на его имя, оставшиеся две переменные - номера первого и последнего элементов в массиве
    {
        int c, l = b, r = e, piv = a[(b + e) / 2]; //ввод переменных
        for (; l <= r;)  // пока номер левого меньше или равен номеру правого, делаем все, что выше, а после вызываем ещё 2 такие же программы
        {
            for (l; piv > a[l];)  //пока значение левого относительного опорного элемента, меньше значения опорного, увеличиваем номер левого элемента
                l++;
            for (r; piv < a[r];) // все с точность до наоборот, как для левого
                r--;
            if (l <= r) // если номер левого меньше или равен номеру правого, то переприсваиваем
            {
                c = a[l];
                a[l] = a[r];
                a[r] = c;
                l++;
                r--;
            }
        }
        fastsort(a, l, e);
        fastsort(a, b, r);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian"); //установка русского языка
    int a[10]={0}, i; // Объявляем массив из 10 элементов
    printf("Введите 10 цифр в столбик:\n");
    for (i = 0; i < 10; i++) // Вводим значения элементов массива через клавиатуру
    {
        scanf_s("%d", &a[i]);
    }
    int n = sizeof(a) / sizeof(int);
    fastsort(a, 0, n - 1); //а- массив, 0-номер первого элемента, n-1 номер последнего элемента(кол - во элементов массива - 1)
    printf("Преобразованный массив:\n");
    for (int i = 0; i < n; i++) //выводим массив на экран
        printf("%d ", a[i]);
    printf("\n"); //выводим пустую строку
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
