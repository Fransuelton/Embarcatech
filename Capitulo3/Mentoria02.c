#include <stdio.h>

// int main()
// {
//     int i;

//     printf("Iniciando a execução...\n");
//     printf("Digite um numero:");
//     scanf("%d", &i);

//     do
//     {
//         printf("O numero digitado foi: %d \n", i);
//     } while (i != 0);
// }

/* Solução do problema de loop infinito*/

int main()
{
    int i;

    printf("Iniciando a execução... \n");

    do
    {
        printf("Digite um numero: \n");
        scanf("%d", &i);
        printf("O numero digitado foi: %d \n", i);
    } while (i != 0);
}