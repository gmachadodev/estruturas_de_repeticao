#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, resto, n;
    contador = 1;

    printf("Digite numero inteiro como limite! \n");
    scanf("%d", &n);

    printf("-----\n");

    do
    {
        resto = contador % 2;

        if (resto == 0)
            printf("%d\n", contador);

            contador++;
    }
    while(contador <= n);

    printf("-----\n");

    return 0;
}
