/******************************************************************************

Elabore um algoritmo que receba um número inteiro e exiba na tela 

*******************************************************************************/
#include <stdio.h> /******* BIblioteca padrão do C de entrada e saída****/

int main()
{
    int num = 0;
    printf("informe um número inteiro");
    scanf("%d", &num); /* scanf - Leitura,  cópia é diferente de referência (&) */
    printf("O número é %d", num); /* Se um colocar &num ele me devolve o ponto de 
    referência do sistema, e não o print do valor digitado */
    return 0;
}