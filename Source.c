#define _CRT_SECURE_NO_WARNINGS 
#include <conio.h> 
#include <locale.h> 
#include <stdio.h> 
#define D 2.54 
#define OldLitv 2.7076 
#define suhoput 1.8520 
#define rim 1.6090 
#define starorus 14750 
#define geogr 7.4680000 
#define morsk 7412.60000 
#define isp 2.32
#define velikobr 2.54
void main() {
    setlocale(LC_ALL, "RUS"); // ��� ������������ ������� ��������� 
    int put;
    float res, res1, res2, res3, res4, res5, res6, res7, res8;

    puts("������� �������� ��� �������");

    scanf("%d", &put);
    res = D * put;
    res1 = OldLitv * put ;
    res2 = suhoput * put;
    res3 = rim * put;
    res4 = starorus * put;
    res5 = geogr * put;
    res6 = morsk * put;
    res7 = isp * put;
    res8 = velikobr * put;

    printf("% d ������ � ��� % .1f ��\n", put, res);
    printf("% d ������� ���� � ��� % .1f ��\n", put, res6);
    printf("% d ���������� ���� � ��� % .1f ��\n", put, res2);
    printf("% d ������� ���� � ��� % .1f ��\n", put, res3);
    printf("% d ������������ ���� � ��� % .1f ��\n", put, res4);
    printf("% d �������������� ���� � ��� % .1f ��\n", put, res5);
    printf("% d �������������� � ��� % .1f ��\n", put, res1);
    printf("% d ��������� ���� � ��� % .1f ��\n", put, res7);
    printf("% d ���������������� ���� � ��� % .1f ��\n", put, res8);
}