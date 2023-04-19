#include<stdio.h>
#include<math.h>

int main(){
    
    float a, p, l1, l2, l3;
    printf("Dame el valor de los 3 lados del triángulo\n");
    scanf("%f%f%f",&l1,&l2,&l3);
    p=(l1+l2+l3)/2;
    a=sqrt(p*(p-l1)*(p-l2)*(p-l3));
    printf("El area del triangulo es:%f\n",a);

    return 0;
}