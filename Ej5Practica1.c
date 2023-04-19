#include <stdio.h>
#include <math.h>

int main()
{
    float ex1,ex2,ex3,exf,trf,promex,promexf,promtrf,promfin,promfred;
    printf("Cuál fue la calificación de cada uno de los 3 exámenes?\n");
    scanf("%f%f%f",&ex1,&ex2,&ex3);
    promex=((ex1+ex2+ex3)/3)*0.55;
    printf("Cuál fue la calificación del examen final?\n");
    scanf("%f",&exf);
    promexf=exf*0.30;
    printf("Cuál fue la calificación del trabajo final?\n");
    scanf("%f",&trf);
    promtrf=trf*0.15;
    promfin=promex+promexf+promtrf;
    promfred=ceil(promfin);
    printf("La calificación final exacta es:%f\nY ya redondeada:%f",promfin,promfred);
    
    return 0;
}