#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
2.Fa�a um programa que permita aos espectadores de um cinema avaliarem um
determinado filme com essas notas, at� que a op��o 5 seja digitada (op��o de
parada). N�o permita que notas inv�lidas sejam atribu�das � se um usu�rio n�o
inserir uma nota v�lida, pe�a para ele repetir a vota��o

3.Altere o programa para que o usu�rio possa errar na vota��o por, no m�ximo, tr�s
vezes. Acima disso, o programa deve alertar o usu�rio sobre o ocorrido e pedir
para ele passar a vez para o pr�ximo espectador.
*/
int main()
{
    int nota,n1=0,n2=0,n3=0,n4=0, j=0;
    setlocale(LC_ALL, "Portuguese");


    printf("D� uma nota ao cinema de 1 a 4.\n 1)(muito ruim) \n 2(ruim) \n 3)(bom) \n 4)(muito bom)  \nDigite 5:para parar a avalia��o.\n");
    for(int i=0; i>=0; i++)
    {
        scanf("%d", &nota);
        switch(nota)
        {
        case 1:
            n1++;
            break;

        case 2:
            n2++;
            break;

        case 3:
            n3++;
            break;

        case 4:
            n4++;
            break;
        case 5:
            system("cls");
            printf("A quantidade de notas respctivamente s�o:\n 1)(muito ruim) - %d \n 2(ruim) - %d \n 3)(bom) - %d \n 4)(muito bom) - %d\n",n1,n2,n3,n4);
            return 0;
        default:
            j++;
            printf("Digite uma nota valida.\n");
            if(i>2)
            {
                printf("\nVoc� digitou tr�s vezes uma nota inv�lida, passe a sua vez para outro espectador.");
            }

        }
    }



}
