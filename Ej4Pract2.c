#include<stdio.h>
#include<ctype.h>

float Calculadora(int,int,char);

int main(){
    
    int num1, num2;
    char op;
    
    printf("Ingresa la opción de la operación que quieres realizar\nS=Suma\nR=Resta\nM=Multiplicacion\nD=Division\nU=Modulo\n");
    scanf("%c",&op);
    printf("Ingresa 2 numeros para realizar la operación\n"),
    scanf("%d%d",&num1,&num2);
    op=toupper(op);
    
    printf("El resultado es:%f",Calculadora(num1,num2,op));

    return 0;
}
float Calculadora(int num1,int num2,char op){
    float r;
    switch(op){
        case 'S': r=num1+num2; break;
        case 'R': r=num1-num2; break;
        case 'M': r=num1*num2; break;
        case 'D': r=num1/num2; break;/*las divisiones saldran sin decimal, ya que si declaro las variables num como float,
                                        ya no funciona la operacion de modulo*/
        case 'U': r=num1%num2; break;
        default: printf("Opción no valida\n");
    }
    return r;
}