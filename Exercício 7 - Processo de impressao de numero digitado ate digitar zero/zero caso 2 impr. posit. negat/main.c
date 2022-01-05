#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;

    INICIO:

    printf("Digite um numero. Caso queira fechar o programa, digite 0 (zero)!\n");
    scanf("%f", &n);

    if(n > 0)
        {
            printf("Numero positivo: %.2f \n", n);
            goto INICIO;
        }
        else if(n < 0)
            {
                printf("Numero negativo: %.2f \n", n);
                goto INICIO;
            }
    else
    {
        printf("O numero digitado foi: %d \n", n);
    }

    return 0;
}
