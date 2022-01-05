#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd = 0, nt_pac, ida_pac, pac_mv;
    char sn;

    printf("Digite o numero total de pacientes: ");
    scanf("%d", &nt_pac);

    while(qtd < nt_pac)
    {
        printf("Digite a idade do paciente: ");
        scanf("%d", &ida_pac);
        qtd++;

        if (ida_pac > pac_mv)
        {
            pac_mv = ida_pac;
        }
        else
        {
            pac_mv = pac_mv;
        }
    }

        printf("\nFinalizado programa.\n\nOs dados sao: \n");
        printf("Numero total de pacientes: %d\n", nt_pac);
        printf("Paciente mais velho tem %d anos de idade!\n", pac_mv);

    return 0;
}
