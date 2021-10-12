#include <stdio.h>

int main() {  
   int num;
   float num_atual = 0.0;
   float maior = 0.0;

   printf("Entre com a quantidade:");
   scanf("%d",&num);
   
   for (int i;i<num;i++) {
        printf("\nEntre com o numero %d:",i);
        scanf("%f",&num_atual);
        
        if (num_atual > maior){
            maior = num_atual;
        };
   };
    printf("\nMaior numero:%f",maior);