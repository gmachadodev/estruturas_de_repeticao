/*Se as variaveis forem inteiras
apenas ate o numero 12 o resultado sera preciso.
Se forem floats, ate o numero 13*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, fat;

    printf("Digite o numero para calcular o fatorial: ");
    scanf("%f", &num);

    printf("O fatorial do numero %f e de: ", num);

    for(fat = 1; num > 1;
        num--)
    {
        fat = fat * num;
    }

    printf("%f", fat);

    return 0;
}
