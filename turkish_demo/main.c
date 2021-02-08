#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //setlocale ile Türkçe karakter kullanımı:

    setlocale(LC_ALL, "Turkish");
    printf("Merhaba Dünya.\n");
    printf("Hoş geldiniz.\n");
    printf("*****");

    return 0;
}