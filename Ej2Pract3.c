#include<stdio.h>

int Factorial(int);

int main(){
    
    int n,n2,f=0;
    
    do{
        puts("Dame un numero\n");
        scanf("%d",&n);
    }while(n<0);
    
    n2=n;
    while(1<=n2){
        f=f+Factorial(n2);
        n2--;
    }
    printf("La suma de los factoriales de %d hasta 1 es: %d \n",n,f);
    
    return 0;
}
int Factorial(int n){
    
    double f=1,i;

    for(i=n;i>0;i--){
        f=f*i;
    }
    return f;
}