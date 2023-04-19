#include <stdio.h>

int main(){
    
    int n, i=1;
    
    do{
        puts("Introduce un número positivo:\n");
        scanf("%d",&n);
    }while(n<0);
    
    while(i<=n){
        for(int j=1;j<=n;j++){
            printf("%d",j);
        }
        puts("\n");
        n--;
    }

    return 0;
}