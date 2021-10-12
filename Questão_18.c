int main() {  
  
  float ponto[2] = {};
  float primeiro[2] = {};

  printf("Entre com x:");
  scanf("%f",&primeiro[0]);
  
  printf("Entre com y:");
  scanf("%f",&primeiro[1]);

  while (true)
  {
    printf("Entre com x:");
    scanf("%f",&primeiro[0]);
  
    printf("Entre com y:");
    scanf("%f",&primeiro[1]);
    
    if (ponto[0] == primeiro[0] && ponto[1] == primeiro[1]){
        break;
    };

  }