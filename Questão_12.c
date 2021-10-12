#include <stdio.h>

int main(){
    float vet[5];
    int aux = 0;

    // quardando os valores 
    for (int i = 0;i<5;i++){
        printf("Entre com o valor %d:",i);
        scanf("%f",&vet[i]);
    }
    // ordenando
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++){
            if (vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
                }
            }
            
    // vizualizando
    for (int i = 0;i<5;i++){
        printf("valor :%f ",vet[i]);
    }

}