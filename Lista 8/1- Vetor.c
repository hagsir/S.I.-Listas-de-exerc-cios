#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define num 4
/*
Fa�a um programa que leia um vetor com 5 inteiros. Exiba um menu de op��es, execute a a��o
escolhida e exiba o resultado. O programa deve ser capaz de solicitar ao usu�rio se deseja
realizar uma nova opera��o. O programa deve encerrar quando o usu�rio digitar a op��o 0
(ZERO), portanto, caso o mesmo digite uma op��o inv�lida, o programa n�o deve encerrar.
Dado o menu de op��es, exiba:
1. O maior valor
2. A m�dia dos valores
3. As posi��es em que existam valores �mpares
4. Os valores dispostos em ordem inversa
5. Buscar n�mero: informe um n�mero e o procure no vetor preenchido, retornando a posi��o e
o valor desse n�mero. (retorne -1 caso n�o encontre)
6. Multiplique os valores pelo inverso de seu �ndice. (Ex.: se o �ndice � 2, ent�o o valor deve
ser multiplicado por -2)
*/
int main(){
int v[num], i=0, j=0, k=0, maiorvalor=0, soma=0, opcao=-1, impares=0, valor, inverso;
float media;
setlocale(LC_ALL, "Portuguese");

    printf("Digite 5 valores inteiros:\n");
    while(i<=num){
    scanf("%d", &v[i]);
        if(v[i]>maiorvalor){
            maiorvalor = v[i];
        }
        if(v[i]%2!=0){
            impares++;

        }
    soma+=v[i];
    i++;
    }
    media = soma / i;

int posicao[impares];
    i=0;
    while(i<=num){
        if(v[i]%2!=0){
            j++;
            posicao[j]=i+1;
            }
        i++;
    }




    printf("\n\nEscolha uma das op��es:");
    printf("\n( 1 ) - Exibir o maior valor digitado");
    printf("\n( 2 ) - A m�dia dos valores digitados");
    printf("\n( 3 ) - As posi��es dos valores �mpares");
    printf("\n( 4 ) - Exibir os valores em ordem inversa");
    printf("\n( 5 ) - Mostrar a posi��o de um n�mero");
    printf("\n( 6 ) - M�ltiplicar os valores pelo inverso de seu �ncide ");
    printf("\n( 0 ) - Para encerrar o programa.\n:");
    while(opcao!=0){
        scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("O maior valor digitado foi %d.\n", maiorvalor);
            printf("Escolha outra op��o:\n");
            break;

        case 2:

            printf("A m�dia dos valores digitados � %.2f.\n", media);
            printf("Escolha outra op��o:\n");
            break;

        case 3:
            if(impares!=0){
                printf("As posi��es dos valores �mpares s�o");
                for(i=0; i<impares; i++){
                    printf("; %d", posicao[i+1]);
                }
                printf(".\nEscolha outra op��o:\n");
            }
            else{
                printf("N�o h� valores �mpares.\n");
                printf("Escolha outra op��o:\n");
            }
            break;

        case 4:
            printf("A ordem inversa dos n�meros �:");
            for(i=4; i>=0; i--){
                printf(" %d", v[i]);
            }
            printf("\nEscolha outra op��o:\n");
            break;


        case 5:
            k=0;
            printf("Escolha um n�mero para mostrar sua posi��o caso ele exista no vetor: ");
            scanf("%d", &valor);
            for(i=0; i<num; i++){
                if(v[i]==valor){
                    k++; // k >=1 h� este valor no vetor
                }
            }
            if(k==1){
                printf("A posi��o deste valor �" );
                for(i=0; i<=num; i++){
                    if(valor==v[i]){
                        printf(" %d.", i+1);
                    }
                }
                printf("\nO valor deste n�mero �: %d", valor);

            }
            if(k==0){
                k=-1;
                printf("N�o h� este valor no vetor, ent�o a posi��o deste valor � %d.", k);
            }
            if(k>1){
                printf("H� %d valores no vetor igual ao n�mero digitado.", k);
                printf("\nAs posi��es desses valores s�o");
                for(i=0; i<=num; i++){
                    if(valor==v[i]){
                        printf("; %d", i+1);
                    }
                }
                printf(".\nO valor deste n�mero �: %d", valor);
            }
            printf("\nEscolha outra op��o:\n");
            break;


        case 6:
            printf("Os valores do vetores multiplicados pelo inverso do seu �ndice:");
            for(i=0; i<=num; i++){
                    inverso = v[i] * (-v[i]);
                printf(" %d", inverso);
            }
            break;


        case 0:
            printf("O programa foi encerrado.");
            break;

        default:
            printf("\nEsta n�o � uma op��o v�lida.\n");
            break;
        }
    }
}
