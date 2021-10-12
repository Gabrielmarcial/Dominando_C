#include <stdio.h>

int main()
{   int a,b,cont;

    printf("Entre com o dividendo :");
    scanf("%d",&a);
    
    printf("Entre com o divisor:");
    scanf("%d",&b);    

    while (a >= b){
        cont +=1 ;
        a = a -b;
    };
    printf("o quociente é : %d",cont);
   
}