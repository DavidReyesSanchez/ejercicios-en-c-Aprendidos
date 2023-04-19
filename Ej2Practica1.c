#include <stdio.h>
#define d 1500

int main(){
    
    float t, v;
    printf("Cuánto tiempo tardo el corredor en acabar la carrera?\nIntroduce el tiempo en minutos\n");
    scanf("%f",&t);
    v=d/t;
    printf("El corredor corrió a una velocidad de:%f m/s",v);

    return 0;
}