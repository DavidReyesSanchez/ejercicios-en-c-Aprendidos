#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imp_arreglo(int a[]){
    int i;
    for(i=0;i<6;i++){
        printf("Lado %d: %d veces  ",i+1,a[i]);
    }
    printf("\n");
}
int main(){

    int a[6];
    int i,dado,c=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
    
    do{
        dado=rand()%6+1;
        switch(dado){
            case 1: c1++;break;
            case 2: c2++;break;
            case 3: c3++;break;
            case 4: c4++;break;
            case 5: c5++;break;
            case 6: c6++;break;
        }
        c++;
    }while(c<3000);
    
    for(i=0;i<6;i++){
        switch(i){
            case 0: a[i]=c1;break;
            case 1: a[i]=c2;break;
            case 2: a[i]=c3;break;
            case 3: a[i]=c4;break;
            case 4: a[i]=c5;break;
            case 5: a[i]=c6;break;
        }
    }
    
    imp_arreglo(a);

    return 0;
}
