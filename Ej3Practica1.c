#include <stdio.h>
#include <math.h>
#define Pi 3.1416

int main()
{
    float r, c, a;
    printf("Cual es el radio del circulo?\n");
    scanf("%f",&r);
    c=(2*(Pi))*r;
    a=Pi*pow(r,2);
    printf("La longitud de la circunferencia es: %f \n el valor del área es:%f",c,a);

    return 0;
}