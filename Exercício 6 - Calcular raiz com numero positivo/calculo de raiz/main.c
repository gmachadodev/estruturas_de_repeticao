#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num, raiz;

    inicio:              //Definindo um "ponto de retorno" com ':'

        printf("Digite numero para realizar a raiz quadrada: ");
        scanf("%f", &num);

        if(num > 0)
        {
            raiz = sqrt(num);
            printf("A raiz de %.2f e: %.2f", num, raiz);
        }
        else
        {
            printf("O numero e negativo.\n");
            goto inicio;  //Direciona para o "ponto de retorno" antes do ':'
        }

    return 0;
}
