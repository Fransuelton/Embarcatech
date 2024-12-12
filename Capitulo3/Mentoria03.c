#include <stdio.h> // Uso opcional pois as funções usadas são built'in do C

int main()
{
    int mes;

    printf("Digite o mês em numeral: \n");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("O mês selecionado é Janeiro\n");
        break;
    case 2:
        printf("O mês selecionado é Fevereiro \n");
        break;
    case 3:
        printf("O mês selecionado é Marco \n");
        break;
    case 4:
        printf("O mês selecionado é Abril \n");
        break;
    case 5:
        printf("O mês selecionado é Maio \n");
        break;
    case 6:
        printf("O mês selecionado é Junho \n");
        break;
    case 7:
        printf("O mês selecionado é Julho \n");
        break;
    case 8:
        printf("O mês selecionado é Agosto \n");
        break;
    case 9:
        printf("O mês selecionado é Setemebro \n");
        break;
    case 10:
        printf("O mês selecionado é Outubro \n");
        break;
    case 11:
        printf("O mês selecionado é Novembro \n");
        break;
    case 12:
        printf("O mês selecionado é Dezembro \n");
        break;
    default:
        printf("O mês selecionado nao e valido! \n");
        break;
    }
}