#include <stdio.h>
#include <stdlib.h>

int main()
{
float valor_final, valor, taxa;
int tempo; // DIAS

printf("informe o valor da presta�ao:");
scanf("%f", &valor);

printf("informe a taxa de juros:");
scanf("%f", &taxa);

printf("informe o tempo: ");
scanf("%d", &tempo);

valor_final= valor + (valor*(taxa/100)*tempo);
printf("/n/n/nA Prestacao a ser paga eh: %.2f", valor_final);
}
