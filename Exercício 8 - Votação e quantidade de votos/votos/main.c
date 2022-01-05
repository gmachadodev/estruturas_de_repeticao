#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nt_vot;
    int voto;
    int c1 = 0, c2 = 0, c3 = 0;
    int i = 0;

    printf("Digite o numero total de votantes: ");
    scanf("%d", &nt_vot);

    printf("\nOs candidatos e seus numeros sao:\n\n");
    printf("Squirtle = 1\n");
    printf("Bulbassauro = 2\n");
    printf("Charmander = 3\n\n");

    inicio:
        printf("Informe o numero do seu candidato: ");
        scanf("%d", &voto);

        nt_vot--;
        if (voto == 1)
            c1++;
        else if (voto == 2)
            c2++;
        else if (voto == 3)
            c3++;
        else
        {
            printf("Voto invalido.\n");
            nt_vot++;
        }

        if (nt_vot > 0)
        {
            goto inicio;
        }
        else
        {
            goto resultado;
        }

        resultado:
            if (c1 > c2 && c2 > c3)
                printf("\nO candidato vencedor e Squirtle com %d votos, contra:\nBulbassauro com %d votos\nCharmander com %d votos\n", c1, c2, c3);

            else if (c1 > c2 && c2 == c3)
                printf("\nO candidato vencedor e Squirtle com %d votos, contra:\nBulbassauro com %d votos\nCharmander com %d votos\n", c1, c2, c3);

            else if (c1 > c3 && c3 > c2)
                printf("\nO candidato vencedor e Squirtle com %d votos, contra:\nCharmander com %d votos\nBulbassauro com %d votos\n", c1, c3, c2);

            else if (c1 > c3 && c3 == c2)
                printf("\nO candidato vencedor e Squirtle com %d votos, contra:\nCharmander com %d votos\nBulbassauro com %d votos\n", c1, c3, c2);

            else if (c2 > c1 && c1 > c3)
                printf("\nO candidato vencedor e Bulbassauro com %d votos, contra:\nSquirtle com %d votos\nCharmander com %d votos\n", c2, c1, c3);

            else if (c2 > c1 && c1 == c3)
                printf("\nO candidato vencedor e Bulbassauro com %d votos, contra:\nSquirtle com %d votos\nCharmander com %d votos\n", c2, c1, c3);

            else if (c2 > c3 && c3 > c1)
                printf("\nO candidato vencedor e Bulbassauro com %d votos, contra:\nCharmander com %d votos\nSquirtle com %d votos\n", c2, c3, c1);

            else if (c2 > c3 && c3 == c1)
                printf("\nO candidato vencedor e Bulbassauro com %d votos, contra:\nCharmander com %d votos\nSquirtle com %d votos\n", c2, c3, c1);

            else if (c3 > c1 && c1 > c2)
                printf("\nO candidato vencedor e Charmander com %d votos, contra:\nSquirtle com %d votos\nBulbassauro com %d votos\n", c3, c1, c2);

            else if (c3 > c1 && c1 == c2)
                printf("\nO candidato vencedor e Charmander com %d votos, contra:\nSquirtle com %d votos\nBulbassauro com %d votos\n", c3, c1, c2);

            else if(c3 > c2 && c2 > c1)
                printf("\nO candidato vencedor e Charmander com %d votos, contra:\nBulbassauro com %d votos\nSquirtle com %d votos\n", c3, c2, c1);

            else if(c3 > c2 && c2 == c1)
                printf("\nO candidato vencedor e Charmander com %d votos, contra:\nBulbassauro com %d votos\nSquirtle com %d votos\n", c3, c2, c1);

            else
                printf("\nEmpate, votos distribuidos em:\nCharmander com %d votos\nBulbassauro com %d votos\nSquirtle com %d votos\n", c3, c2, c1);

    return 0;
}
