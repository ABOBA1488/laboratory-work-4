/******************************************************************************
Макаричев Семён Вячеславович
КТбо1-2
Лабораторная работа №4 «Файлы данных
Вариант № 6
Задание: Написать   программу,   которая   во   вводимом   с   клавиатуры   тексте   сделает   разбиение   на   предложения.
Условие  конца предложения  -  точка,  восклицательный  или  вопросительный  знаки и выведет результат  на экран
*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <locale>
using namespace std;

int main()
{
    const char ch = '\n';
    const int a = 3;// КОЛИЧЕСТВО СТОЛБЦА
    const int b = 90;// КОЛИЧЕСТВО СТРОК
    setlocale(LC_ALL, "russian");
    char c[a][b];
    ifstream fin("F1.txt");
    ofstream fout("F2.txt");
    if (!fin) return 1;
    for (int i = 0; i != a; i++)
    {
        fin.getline(c[i], 100, ch);
    }
    for (int i = 0; i != a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (c[i][j] != 'М' && c[i][j] != '\0')
            {
                fout << c[i][j];
            }
            if ((c[i][j] == '.' && c[i][j + 1] != '.' && c[i][j + 2] != '.') || c[i][j] == '!' || c[i][j] == '?')
            {
                fout << endl;
            }
        }
    }
}