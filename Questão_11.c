#include <stdio.h>

int main(){
    int ia,ib,ja,jb,n;

    // Definindo o Tamanho das matrizes 
    printf("Entre com o número de linhas da Primeira Matriz [A]:");
    scanf("%d",&ia);
    printf("Entre com o número de colunas da Primeira Matriz [A]:");
    scanf("%d",&ja);

    printf("Entre com o número de linhas da Primeira Matriz [B]:");
    scanf("%d",&ib);
    printf("Entre com o número de colunas da Primeira Matriz [B]:");
    scanf("%d",&jb);
    
    printf("Entre com o número a ser múltiplicado:");
    scanf("%d",&n);

    int A[ia][ja],B[ib][jb],soma[ia][ja];

    if (ia!=ib || ja!=jb){
        printf("Não é possivel realzar a operação ");
    }
    else {
        for (int i = 0;i<ia;i++)
            for (int j = 0;j<ja;j++){
                printf("Entre com o termo A[%d][%d]:",i,j);
                scanf("%d",&A[i][j]);
                printf("Entre com o termo B[%d][%d]:",i,j);
                scanf("%d",&B[i][j]);
            }     
    }
    
    // realizando as operações 
    for (int i = 0;i<ia;i++)
            for (int j = 0;j<ja;j++){
                soma[i][j] = n*(A[i][j] + B[i][j]);
            }
    
    // Visualizando A 
    for (int i = 0;i<ia;i++)
            for (int j = 0;j<ja;j++){
                printf("A[%d][%d]:%d \n",i,j,A[i][j]);
                }

    // Visualizando B 
    for (int i = 0;i<ia;i++)
            for (int j = 0;j<ja;j++){
                printf("B[%d][%d]:%d \n",i,j,B[i][j]);
                }

    // Visualizando soma 
    for (int i = 0;i<ia;i++)
            for (int j = 0;j<ja;j++){
                printf("soma[%d][%d]:%d \n",i,j,soma[i][j]);
                }
}