#include <stdio.h>
#define d 1500

int main(){
    
    float t, v;
    printf("Cu�nto tiempo tardo el corredor en acabar la carrera?\nIntroduce el tiempo en minutos\n");
    scanf("%f",&t);
    v=d/t;
    printf("El corredor corri� a una velocidad de:%f m/s",v);

    return 0;
}