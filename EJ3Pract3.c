#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int cont1=1,cont2=0,cont3=0;
    float c1,c2,c3,c4,prom,prom2=0,promgrupo;
    
    srand(time(NULL));
    
    while(cont1<=5){
        
        c1=rand()%11;
        c2=rand()%11;
        c3=rand()%11;
        c4=rand()%11;
        
        prom=(c1+c2+c3+c4)/4;
        
        printf("El promedio del alumno es: %f\n",prom);
        
        if(prom>0 && prom<6){
            cont2++;
        }
        else if(prom=6 || prom<=10){
            cont3++;
        }
        
        cont1++;
        prom2=prom+prom2;
    }
    promgrupo=prom2/5;
    printf("El promedio grupal es: %f\nEl numero de aprobados fue: %d\nEl numero de reprobados fue: %d\n",promgrupo,cont3,cont2);
    
    return 0;
}
