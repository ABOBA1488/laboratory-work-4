/******************************************************************************
��������� ���� ������������
����1-2
������������ ������ �4 ������ ������
������� � 6
�������: ��������   ���������,   �������   ��   ��������   �   ����������   ������   �������   ���������   ��   �����������.
�������  ����� �����������  -  �����,  ���������������  ���  ��������������  ����� � ������� ���������  �� �����
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
    const int a = 3;// ���������� �������
    const int b = 90;// ���������� �����
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
            if (c[i][j] != '�' && c[i][j] != '\0')
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