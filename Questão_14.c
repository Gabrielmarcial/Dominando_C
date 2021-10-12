#include <stdio.h>

float quadrado(float lado){
    float area;
    area = lado*lado;
    return area;
}

float retangulo(float comprimeto, float largura){
    float area;
    area = comprimeto*largura;
    return area;
}

float triangulo(float base , float altura){
    float area;
    area = (base*altura)/2;
    return area;
}

float circulo(float raio){
    float area,pi=3.14;
    area = pi*(raio*raio);
    return area;
}

int main(){
    int n;
    float l,a,l2,h,raio;
    printf("Entre com a Área desejada:\n[1]- Quadrado\n[2]- Retângulon\n[3]- Triângulo\n[4]- circunferência\n");
    scanf("%d",&n);

    switch(n){
    
    case 1:
        printf("Entre com o lado do Quadrado[l]:");
        scanf("%f",&l);
        a = quadrado(l);
        printf("%f",a);
        break;

    case 2:
        printf("Entre com o comprimento do retângulo:");
        scanf("%f",&l);
        printf("Entre com a largura do retângulo:");
        scanf("%f",&l2);
        a = retangulo(l,l2);
        printf("%f",a);
        break;

    case 3:
        printf("Entre com a base do triângulo:");
        scanf("%f",&l);
        printf("Entre com a altura do triângulo:");
        scanf("%f",&h);
        a = triangulo(l,h);
        printf("%f",a);
        break;

    case 4:
        printf("Entre com o Raio do circulo:");
        scanf("%f",&raio);
        a = circulo(raio);
        printf("%f",a);
        break;
    }
}