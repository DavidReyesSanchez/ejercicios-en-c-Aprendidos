#include<stdio.h>

#define pulgada 0.393701
#define kilo 0.453592

int main(){
    
    int cent=0;
    float cm,lb,pulg,kg;
    
    do{
        puts("Dame la longitud en centimetros\nSi ingresas el valor 0 terminará el programa\n");
        scanf("%f",&cm);
        puts("Dame el peso en libras\nSi ingresas el valor 0 terminará el programa\n");
        scanf("%f",&lb);
        
        if(cm==cent && lb==cent){
            continue;
        }
        
        pulg=cm*pulgada;
        kg=lb*kilo;
        
        printf("%f cm = %f pulgadas\n%f libras = %f kg\n",cm,pulg,lb,kg);
    
    }while(cm!=cent && lb!=cent);
    
    return 0;
}
