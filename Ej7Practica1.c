#include<stdio.h>
#include<math.h>
#define Pi 3.1416

int main(){
    
    float l, l2, r, a, h, h2;
    
    printf("Dame el valor de un lado del triángulo equilatero\n");
    scanf("%f",&l);
    l2=l/2;
    h=sqrt(pow(l,2)-pow(l2,2));
    r=h*(0.666);
    a=Pi*pow(r,2);
    printf("El area de la circunferencia circunscrita es:%f",a);
    
    return 0;
}