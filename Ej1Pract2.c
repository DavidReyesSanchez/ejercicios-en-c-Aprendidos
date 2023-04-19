#include <stdio.h>
#define sb 7000

float Comision(float);

int main()
{
    float v;
    
    printf("Cual es el total de ventas?\n");
    scanf("%f",&v);
    printf("El sueldo final es:$%f\n",Comision(v));
    
    return 0;
}
float Comision(float v){
    
    float c, sf;
    
    if(v<0){
        printf("Error al ingresar las ventas\n");
    }
    else if(v>=0 && v<1000){
            return sb;
        }
        else if(v>=1000 && v<3000){
            c=sb*0.05;
            sf=sb+c;
            return sf;
            }
        else if(v>=3000 && v<5000){
            c=sb*0.6;
            sf=sb+c;
            return sf;
        }
        else if(v>=5000 && v<7000){
            c=sb*0.7;
            sf=sb+c;
            return sf;
        }
        else if(v>6999){
            c=sb*0.8;
            sf=sb+c;
            return sf;
        }
}