#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int t,d1,d2,sd,ganancia=0,perdida=0,i=1;
    float gana,pierde,r;

    do{
        puts("Cuántas veces quieres tirar los dados?\n");
        scanf("%d",&t);
    }while(t<0);

    srand(time(NULL));

    while(i<=t){
        d1=rand()%7;
        d2=rand()%7;

        if(d1==0 || d2==0)
            continue;

        printf("Tirada %d:\n",i);
        printf("Dado 1: %d , Dado 2: %d\n",d1,d2);

        sd=d1+d2;
        printf("La suma de los dados es: %d\n",sd);

        if(sd%2==0 && sd!=12){
            gana=sd*10.5;
        }
        else if(sd%2!=0){
                pierde=sd*10;
            }
        else if (sd==12){
                gana=0;
            }
        ganancia=ganancia+gana;
        perdida=perdida+pierde;

        i++;
    }
    r=ganancia-perdida;
    if(r>=0){
        printf("Ganaste $%f!!!\n",r);
    }
    else
        printf("Perdiste $%f",r*-1);

    return 0;
}
