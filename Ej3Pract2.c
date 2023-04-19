#include<stdio.h>

float Costo(int,int,int);

int main(){
    
    int d, e, enf;
    
    printf("Ingresa tu edad y los dias que estuviste hospitalizado\n");
    scanf("%d%d",&e,&d);
    printf("Ingresa la opcion de enfermedad por la que estuviste hospitalizado\n1=Diabetes\n2=Hipertencion\n3=Cancer\n");
    scanf("%d",&enf);
    
    printf("El costo total de su hospitalización es de: $%f\n",Costo(e,d,enf));
    
    return 0;
}
float Costo(int e, int d, int enf){
    float c, extra;
    switch(enf){
        case 1: c=d*1300; break;
        case 2: c=d*900; break;
        case 3: c=d*2200; break;
        default: printf("Opción no existente\n");
    }
    if(e>=14 && e<=22){
        extra=c*0.10;
        c=c+extra;
    }
    return c;
}