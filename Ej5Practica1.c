#include <stdio.h>
#include <math.h>

int main()
{
    float ex1,ex2,ex3,exf,trf,promex,promexf,promtrf,promfin,promfred;
    printf("Cu�l fue la calificaci�n de cada uno de los 3 ex�menes?\n");
    scanf("%f%f%f",&ex1,&ex2,&ex3);
    promex=((ex1+ex2+ex3)/3)*0.55;
    printf("Cu�l fue la calificaci�n del examen final?\n");
    scanf("%f",&exf);
    promexf=exf*0.30;
    printf("Cu�l fue la calificaci�n del trabajo final?\n");
    scanf("%f",&trf);
    promtrf=trf*0.15;
    promfin=promex+promexf+promtrf;
    promfred=ceil(promfin);
    printf("La calificaci�n final exacta es:%f\nY ya redondeada:%f",promfin,promfred);
    
    return 0;
}