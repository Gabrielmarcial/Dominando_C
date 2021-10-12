#include <stdio.h>

int main(){
    int n,soma=0,produto=1,media,maior,menor;

    printf("entre com número de valores :");
    scanf("%d",&n);
    int vet[n];
    
    for (int i =0;i<n;i++){
        printf("Entre com o numero %d :",i);
        scanf("%d",&vet[i]);
    }
    
    maior = vet[0];
    menor = vet[0];
    
    for (int i =0;i<n;i++){
        soma = soma +vet[i];
        produto = produto*vet[i];

        if (vet[i]>maior){
            maior = vet[i];
        }
        if (vet[i]<menor){
            menor = vet[i];
        }
    }
    
    media = soma / n ;
    printf("soma = %d | Produto = %d\n",soma,produto);
    printf("Media = %d | Maior = %d | Menor = %d\n",media,maior,menor);
    printf("Impares: ");
    
    for (int i =0;i<n;i++){
        if (vet[i]%2 != 0){
            printf("%d  ",vet[i]);
        }
    }

}