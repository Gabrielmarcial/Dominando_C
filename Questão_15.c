#include <stdio.h>

int main()
{
    int x[] = {1,7,10,11,8,3};
    int y[] = {3,2,0,5,7,6};
    float A,cx,cy =0; 
    int t = sizeof(x)/sizeof(x[0]);//verificar o tamanho da lista 

    for (int i=0;t-1>i;i++){
        
        cx += (x[i]+x[i+1])*(x[i]*y[i+1] - x[i+1]*y[i]);
        cy += (y[i]+y[i+1])*(x[i]*y[i+1] - x[i+1]*y[i]);
        A += ((x[i]*y[i+1]) - (x[i+1]*y[i]));
        
        };
    
    A = A*0.5 ;
    cx /= (6*A);
    cy /= (6*A);

    printf("Área %f",A);
    printf("Centroide é o Ponto (%f,%f) ",cx,cy);

    return 0;
}