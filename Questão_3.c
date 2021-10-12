#include <stdio.h>

int main()
{
    int a,b;
    int pot = 1;
    
    printf("Entre com a base da potência:");
    scanf("%d",&a);
    
     printf("Entre com o expoente da potência:");
    scanf("%d",&b);

    
    for (int i = 0; b > i;i++){
        pot = pot*a;
    };
    
    printf("Potencia de %d elevado a %d é %d",a,b,pot);
}