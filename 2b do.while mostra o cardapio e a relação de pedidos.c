#include <stdio.h>

int main ()
{
    int i, cq, h, cb, ecb, r, op, rep;
    float tcq, th, tcb, tecb, tr, totalgeral;

    do
    {
        i=1;
        cq=0;
        h=0;
        cb=0;
        ecb=0;
        r=0;
        tcq=0;
        th=0;
        tcb=0;
        tecb=0;
        tr=0;

        do
        {
            printf("\nPROGRAMA PARA FAZER PEDIDOS\n");
            printf("\n______________________________\n");
            printf ("\n\nMENU\n\n");
            printf ("1 - Cachorro Quente: R$ 1.50\n");
            printf ("2 - Hamburger: R$ 2.00\n");
            printf ("3 - Cheeseburger: R$ 2.50\n");
            printf ("4 - Eggcheeseburger: R$ 3.00\n");
            printf ("5 - Refrigerante: R$ 1.50\n");
            printf ("0 - Fechamento de pedido.\n");
            printf ("\nDigite uma opcao:  \n");
            scanf ("%d", &op);

            switch(op)
            {
                case 1:
                    printf ("\nCachorro Quente.\n");
                    cq++;
                    tcq += 1.50;
                    break;

                case 2:
                    printf ("\nHamburger.\n");
                    h++;
                    th += 2.00;
                    break;

                case 3:
                    printf ("\nCheeseburger.\n");
                    cb++;
                    tcb += 2.50;
                    break;

                case 4:
                    printf ("\nEggcheeseburger.\n");
                    ecb++;
                    tecb += 3.00;
                    break;

                case 5:
                    printf ("\nRefrigerante.\n");
                    r++;
                    tr += 1.50;
                    break;

                case 0:
                    break; 

                default:
                    printf ("\nOpcao Invalida.\n");
            }

        } while (op!=0);

        printf ("\nDESCRICAO DO PEDIDO:\n");

        if (cq != 0)
            printf ("%d CACHORRO QUENTE: R$ %.2f\n", cq, tcq);
        if (h != 0)
            printf ("%d HAMBURGER: R$ %.2f\n", h, th);
        if (cb != 0)
            printf ("%d CHEESEBURGER: R$ %.2f\n", cb, tcb);
        if (ecb != 0)
            printf ("%d EGGCHEESEBURGER: R$ %.2f\n", ecb, tecb);
        if (r != 0)
            printf ("%d REFRIGERANTE: R$ %.2f\n", r, tr);

        totalgeral = tcq + th + tcb + tecb + tr;
        printf ("\nTOTAL: R$ %.2f\n", totalgeral);

        printf("\nDeseja repetir o pedido? (1 = Sim / 0 = Nao): \n");
        scanf("%d", &rep);

    } while (rep == 1);
    
    
    	printf("\n______________________________\n");
   		printf("\nPedido encerrado. Obrigado\n");
		printf("\n______________________________\n");
		
		
		
    return 0;
}

