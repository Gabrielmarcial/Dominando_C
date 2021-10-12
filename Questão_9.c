#include <stdio.h>

int main(){
    int n,cont=0;
    float a;

    printf("Entre com o número n :");
    scanf("%d",&n);
    while (cont<n){
        cont = cont + 1;
        a = a +  1/((float)(cont*cont));  
    }
    printf("%f\n",a); 
}