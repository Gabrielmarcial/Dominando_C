#include <stdio.h>

int main(){
    int option;
    float lado,volume_cubo;
    float lado2,altura,volume_parale;
    float raio,pi,volume_esfera;
    printf("Escolha o volume: [1]-cubo ,[2]-paralelepípedo, [3]-esfera: ");
    scanf("%d", &option);

    switch (option){
        case 1:
            printf("Volume do cubo ==> entre com o lado: ");
            scanf("%f", &lado);
            volume_cubo = lado*lado*lado;
            printf("%f",lado);
            printf("volume do cubo:%f",volume_cubo);
            break;
        case 2:
            printf("Volume do paralelepípedo ==> entre com o lado 1: ");
            scanf("%f", &lado);
            printf("Volume do paralelepípedo ==> entre com o lado 2: ");
            scanf("%f", &lado2);
            printf("Volume do paralelepípedo ==> entre com a altura: ");
            scanf("%f", &altura);
            volume_parale = lado*lado2*altura;
            printf("volume do cubo:%f",volume_parale);
            break;
        case 3:
            printf("Volume da esfera ==> entre com o lado raio :");
            scanf("%f",&raio);
            printf("Volume da esfera ==> entre com o valor de pi :");
            scanf("%f",&pi);
            volume_esfera = (4*pi*(raio*raio*raio))/3;
            printf("volume do cubo:%f",volume_esfera);
            break;
		   }
	}