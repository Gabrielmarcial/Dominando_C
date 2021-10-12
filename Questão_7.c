#include <stdio.h>

int main(){
    
    int n,cont=1,a=1,b=0,c=0,soma=0;
    printf("entre com o n :");
    scanf("%d",&n);
    do{
        //printf(" %d ", a);
        c = a;
				a = a + b;
				b = c;
		    if (a %2 != 0){
		       printf("%d--> ", a);
		       soma = soma + a;
		    }
		        cont = cont+1;
    }while(cont<=n);
    printf("soma = %d",soma);
}