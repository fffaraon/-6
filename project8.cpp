// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
int main() // 3-ий пункт.
{
    const int n = 6; // 1-ый пункт.
    int mas[n];
    for (int i = 0;i < n;i++)
        mas[i] = rand() % 100; // 2-ой пункт.
    int p = 1;

    for (int i = 0;i < n;i++)
        if (i % 2 == 0)
            p *= mas[i];

    for (int i = 0;i < n;i++)
    {
        printf("%d\n", mas[i]);
    }
    return 0;
}
