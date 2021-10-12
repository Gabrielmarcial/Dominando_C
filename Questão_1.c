#include <stdio.h>

int main() {  
   float num_atual = 0.0;
   float maior,menor = 0.0;
   
   for (int i;i<10;i++) {
        
        printf("\nEntre com o numero %d:",i);
        scanf("%f",&num_atual);
        
        if (i ==0){
            maior = num_atual;
            menor = num_atual;
        };
        
        if (num_atual > maior){
            maior = num_atual;
        };
         if (num_atual < menor){
            menor = num_atual;
        };
   };
    printf("\nMaior numero:%f",maior);
    printf("\nMenor numero:%f",menor);

}