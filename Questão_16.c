#include <stdio.h>

int main() 
{   
  float lat,longi;
  int lat_grau,long_grau;
  int lat_min,long_min;
  float lat_seg,long_seg;
  float lat_minutos,long_minutos;

  printf("Entre com o Valor da Latitude");
  scanf("%f",&lat);  

  printf("Entre com o Valor da Latitude");
  scanf("%f",&longi);  

  lat_grau = (int) lat;
  long_grau = (int) longi;
  
  lat_minutos = (lat - lat_grau)*60;
  lat_min = (int) lat_minutos;
  
  long_minutos = (longi - long_grau)*60;
  long_min = (int) long_minutos;
  
  lat_seg = (lat_minutos - lat_min)*60;
  long_seg = (long_minutos - long_min)*60;
 
  printf("%d° %d' %f''\n",lat_grau,lat_min,lat_seg);
  printf("%d° %d' %f''",long_grau,long_min,long_seg);



  return 0;

}