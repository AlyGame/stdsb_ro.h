#ifndef stdsb_ro_H
#define stdsb_ro_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef int intreg;
typedef char caracter;
typedef long long int lung_lung_intreg;
typedef long int lung_intreg;
typedef char sir_de_caractere;
typedef void creeaza_functie;
typedef void fara_parametru;
typedef unsigned int intreg_fara_semn;
typedef unsigned long int intreg_lung_fara_semn;
typedef unsigned long long int intreg_lung_lung_fara_semn;
typedef float declara_cu_precizie; 

void linie_noua()
{
    printf("\n");
}

void aduna_2_numere(int num1, int num2)
{
    printf("%d", num1 + num2);
}

void aduna_3_numere(intreg num1, intreg num2, intreg num3)
{
    printf("%d", num1 + num2 + num3);
}

void printeaza_string(sir_de_caractere str[])
{
    printf("%s", str);
}

void printeaza_numar_intreg(intreg num1)
{
    printf("%d", num1);
}

void printeaza_cu_precizie(float num)
{
    printf("%f", num);
}

void printeaza_patratul_perfect(int a)
{
    printf("%d", a * a);
}

void inmulteste_2_numere(int n1, int n2)
{
    printf("%d", n1 * n2);
}

void inmulteste_3_numere(int n1, int n2, int n3)
{
    printf("%d", n1 * n2 * n3);
}

void imparte_la_2_numere(int n1, int n2)
{
    printf("%d", n1 / n2);
}

void imparte_la_2(int n1)
{
    printf("%d", n1 / 2);
}

void imparte_la_3_numere(int n1, int n2, int n3)
{
    printf("%d", n1 / n2 / n3);
}

void afla_medie_aritmetica_2(float n1, float n2)
{
    printf("%f", (n1 + n2) / 2);
}

void afla_medie_artitmetica_3(float n1, float n2, float n3)
{
    printf("%f", (n1 + n2 + n3) / 3);
}

void obtine_data()
{
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    printf(" %d-%d-%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}

void obtine_ora()
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d", tm.tm_hour);
}

void obtine_an()
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d", tm.tm_year + 1900);
}

void obtine_secunde()
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d", tm.tm_sec);
}

void obtine_luna()
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    printf("%d", tm.tm_mon + 1);
}

void este_sarbatoare()
{
    time_t t;
    t = time(NULL);
    struct tm tm;
    tm = *localtime(&t);
    if (tm.tm_mon == 12 || tm.tm_mday == 24)
    {
        printf("It's Christmas Eve!");
    }
    else if (tm.tm_mon == 12 || tm.tm_mday == 31)
    {
        printf("Este ajunul anului nou!");
    }
    else if (tm.tm_mon == 3 || tm.tm_mday == 8)
    {
        printf("Este ziua mamei!");
    }
    else if (tm.tm_mon == 10 || tm.tm_mday == 31)
    {
        printf("Este Halloween-ul!\n  Booo...");
    }
    else if (tm.tm_mon == 12 || tm.tm_mday == 25)
    {
        printf("Este Craciunul!\nCraciun fericit!\n  HO..HO..HO!");
    }
    else if (tm.tm_mon == 12 || tm.tm_mday == 26)
    {
        printf("Este a ziua zi de Craciun!!\n  HO..HO..HO!");
    }
    else if (tm.tm_mon == 12 || tm.tm_mday == 27)
    {
        printf("Este a treea zi de Craciun!\n  HO..HO..HO!");
    }
    else
    {
        printf("In acest moment nu este o sarbatoare definita!O poti defini oricand printr-o functie!");
    }
}

void transforma_in_litere_mari(char str[])
{
    int j = 0;
    char ch;
    while (str[j])
    {
        ch = str[j];
        putchar(toupper(ch));
        j++;
    }
}

void transforma_in_litere_mici(char str[])
{
    int j = 0;
    char ch;
    while (str[j])
    {
        ch = str[j];
        putchar(tolower(ch));
        j++;
    }
}

void obtine_lungimea_sirului_de_caractere(char str[])
{
    int n;
    n = strlen(str);
    printf("%d", n);
}

void interschimba_valorile(int n1, int n2)
{
    int temp;
    n1 = n2;
    n1 = temp;
    printf("%d %d", n1, n2);
}

void testeaza_libraria()
{
    interschimba_valorile(1, 2);
    printf("\n");
    aduna_2_numere(1, 3);
}

void afiseaza_numar_de_versiune()
{
    printf("Copyright for Sebastian Enache aka AlyGame\n");
    printf("Version number: 0.0.1\n");
}

void compara_nr_mai_mare(int n1, int n2)
{
    if (n1 < n2)
    {
        printf("%d is greater than %d", n2, n1);
    }
    else if (n1 > n2)
    {
        printf("%d is greater than %d", n1, n2);
    }
}

void compara_nr_mai_mic(int num,int num1)
{
    if (num < num1)
    {
        printf("%d is lower than %d", num, num1);
    }
    else if (num > num1)
    {
        printf("%d is lower than %d", num1, num);
    }
}
#endif
