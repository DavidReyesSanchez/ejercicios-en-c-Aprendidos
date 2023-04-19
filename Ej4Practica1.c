#include <stdio.h>
#define Acres 4047
#define Hectareas 10000

int main(){
    
    float a,h;
    printf("Cuál es la extensión del terreno dada en acres?\n");
    scanf("%f",&a);
    h=(a*Acres)/Hectareas;
    printf("La extensión del terreno es de %f hectareas\n",h);

    return 0;
}