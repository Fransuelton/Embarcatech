#include <stdio.h>

int main()
{
    int i, soma = 0;

    printf("Iniciando a execução ...\n");

    for (i; i < 10; i++)
    {
        soma += i;
        printf("O valor de i e: %d \n", i);
    }
    printf("o valor final de i e: %d \n", i);
}