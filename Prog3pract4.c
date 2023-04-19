#include <stdio.h>
#include <ctype.h>

int son_iguales(char a[], char b[]){
    int i,j,c=0;
    for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++){
        if(a[i]==b[j])
            c++;
    }
    if(c==5)
        return 1;
    else
        return 0;
}
int main(){

    char a[100],b[100]="adios";
    int i,x;

    do{
        printf("Dame una frase o palabra\nEl programa terminará cuando ingreses la palabra Adios\n");
        gets(a);
        for(i=0;a[i]!='\0';i++){
            a[i]=tolower(a[i]);
        }
        x=son_iguales(a,b);
    }while(x!=1);

    return 0;
}
