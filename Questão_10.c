#include <stdio.h>

int main(){
    int n,i,fat=1;

    printf("Entre com o número desejado(inteiro):");
    scanf("%d",&n);
    
    while(n>0){
        printf("%dx",n);
        fat = fat*n; 
        n = n - 1 ;
    }
    printf("=%d",fat);

}   
