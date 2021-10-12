#include <stdio.h>

float det(float matriz[3][3]){
    float Detmatriz;
    Detmatriz = (matriz[0][0] * matriz[1][1] * matriz[2][2]);
    Detmatriz = Detmatriz + (matriz[0][1] * matriz[1][2] * matriz[2][0]);
    Detmatriz = Detmatriz + (matriz[0][2] * matriz[1][0] * matriz[2][1]);
    Detmatriz = Detmatriz - (matriz[2][0] * matriz[1][1] * matriz[0][2]);
    Detmatriz = Detmatriz - (matriz[2][1] * matriz[1][2] * matriz[0][0]);
    Detmatriz = Detmatriz - (matriz[2][2] * matriz[1][0] * matriz[0][1]);
    return Detmatriz;
}

float triangulo(float pontos[3][2]){
    float area;
    float matriz[3][3] = {
        {pontos[0][0],pontos[0][1],1},
        {pontos[1][0],pontos[1][1],1},
        {pontos[2][0],pontos[2][1],1}};
    
    area = det(matriz)/2;
    return area;
}


int main() {  
  
  float area;
  float pontos[3][2] = {{3,3},{6,3},{3,5}};
  area = triangulo(pontos);

  printf("area:%f ",area);  

}