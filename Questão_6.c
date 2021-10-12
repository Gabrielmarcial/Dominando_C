#include <stdio.h>

int main(){
    float a,b,c;

    printf("Entre com o valor dos lado 1 :");
    scanf("%f",&a);
    printf("Entre com o valor dos lado 2 :");
    scanf("%f",&b);
    printf("Entre com o valor dos lado 3 :");
    scanf("%f",&c);

    if ( a < (b + c) && b < (a + c) && c < a + b){
        printf("O triangulo existe");
        if ((a*a)==(b*b)+(c*c)||(b*b)==(c*c)+(a*a)||(c*c)==(a*a)+(b*b)){
            printf(" e é retângulo");
        }
    }
    else{
        printf("não existe");
    }
}