#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenar_arreglo(float a[]){
    int i,b=20;
    for(i=0;i<20;i++){
        a[i]=(float)rand()/RAND_MAX;
    }
}
void imp_arreglo(float a[]){
    int i;
    for(i=0;i<20;i++){
        printf("%f  ",a[i]);
    }
    printf("\n");
}
void son_iguales(float a[], float b[]){
    int i, j, c=0;
    for(i=0,j=0;i<20,j<20;i++,j++){
        if(a[i]==b[j])
            c++;
    }
    if(c==20)
        printf("Los arreglos son iguales\n");
    else 
        printf("Los arreglos son distintos\n");
}
int main(){

    float a[20], b[20];
    
    srand(time(NULL));
    llenar_arreglo(a);
    llenar_arreglo(b);
    imp_arreglo(a);
    printf("\n");
    imp_arreglo(b);
    printf("\n");
    son_iguales(a,b);

    return 0;
}
