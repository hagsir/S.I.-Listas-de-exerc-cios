#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
Quest�o 2) Implemente um programa que siga os requisitos a seguir:
1. O algoritmo deve contemplar o armazenamento de estoque para 5 produtos: �gua,
refrigerante, vinho, suco e cerveja. Utilize um vetor para armazenar a quantidade de
cada produto (Um produto em cada posi��o do vetor).
2. Uma venda s� pode ser realizada se houver saldo positivo em estoque. Caso
contr�rio, n�o haveria como entregar o produto ao cliente na venda. Certifique-se de
n�o receber um valor de venda negativa.
3. Em caso de uma venda ser bem-sucedida, exibir uma mensagem positiva do
processo. Caso contr�rio, exibir uma mensagem informando que a venda n�o pode
ser efetuada.
4. A escolha do produto deve ser feita a partir de um menu de op��es a ser exibido ao
usu�rio que escolhe a op��o desejada para em seguida, informar a quantidade
desejada. Utilize a op��o 0 (ZERO) para finalizar o estoque.
5. Todos os produtos iniciam com um estoque de 10 produtos, e ao longo das vendas
v�o sendo reduzidos estes valores, sem a necessidade de reposi��o durante a
execu��o, imaginando que seria a �nica quantidade poss�vel dispon�vel no momento
em que o algoritmo � executado.
*/
int main(){
int estoque[6]={10,10,10,10,10,10};
int i, produto=-1, qnt;
setlocale(LC_ALL, "Portuguese");

    while(produto!=0){
        printf("\n---------Estoque---------\n1 - �gua\n2 - Refrigerante\n3 - Vinho\n4 - Suco\n5 - Cerveja\n0 - Finalizar\n-------------------------");
        printf("\nEscolha um produto para vender: ");
        scanf("%d", &produto);

        if(produto > 0 && produto < 6){
            if(produto != 0){   //O programa mostra quantidade que h� no estoque para facilitar a venda
                printf("H� %d disponiveis para venda.\nDigite a quantidade para vender: ", estoque[produto-1]);
                scanf("%d", &qnt);

                //A venda n�o ser� efetuada caso o usu�rio queira vender um n�mero maior que o estoque ou um n�mero negativo
                if(estoque[produto - 1] - qnt < 0 || qnt<0){
                    system("cls");
                    printf("N�o foi poss�vel efetuar a venda!\n");
                }
                    else{
                        system("cls");
                        printf("Venda realizada com sucesso!\n");
                        estoque[produto - 1]-=qnt;
                    }
            }
        }
            else{   //Caso o usu�rio digite um n�mero que n�o est� na tabela
                system("cls");
                printf("Este n�mero n�o est� na tabela.");
            }
    }

    system("cls");  //Tabela mostrando a quantidade restante dos produtos ap�s as vendas
    printf("-------Estoque finalizado-------");
    printf("\n�gua........................%d", estoque[0]);
    printf("\nRefrigerante................%d", estoque[1]);
    printf("\nVinho.......................%d", estoque[2]);
    printf("\nSuco........................%d", estoque[3]);
    printf("\nCerveja.....................%d", estoque[4]);
    printf("\n------------------------------");

}
