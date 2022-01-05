#include <stdio.h>
#include <stdlib.h>

int  main()
{
    int contador = 1, soma = 0;

    printf("Imprimir numero de 1 a 100 e o resultado da somatoria!\n");
    printf("------------------------------------------------------\n");

    for(contador = 1; contador <= 100; contador++)
        {
            printf("%d", contador);
            printf(",");

            soma = soma + contador;
        }

    printf("\n------------------------------------------------------\n");
    printf("O resultado da soma de todos os numeros e: %d!", soma);

    return 0;
}
