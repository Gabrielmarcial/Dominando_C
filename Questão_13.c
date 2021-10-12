#include <stdio.h>

int main(){
    char a[100],b[100];
    int len=0,len1=0;

    printf("Entre com a primeira string:");
    fgets(a, sizeof(a), stdin);  // read string
    
    printf("Entre com a primeira string:");
    fgets(b, sizeof(b), stdin);  // read string
    printf("Primeira String:%sSegunda String:%s",a,b);
    
    // achando o tamanho de a 
    while(a[len]!= '\0')
    {
        len++;
    }
    //printf("%s",a[len]);

    for (int i =0;b[i]!='\0';i++,len++){
        a[len-1] = b[i];
    }
    a[len]='\0';
    
    while(a[len1]!= '\0')
    {
        len1++;
    }

    printf("contenado:%s",a);
    printf("Tamanho:%d",len1);

}