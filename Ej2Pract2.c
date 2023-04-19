#include <stdio.h>

int main(){
    int a, m, d, a2, m2, d2, rd, rm, ra;
    
    printf("Ingresa la fecha de nacimiento en el formato dd/mm/aaaa\n");
    scanf("%d%d%d",&d,&m,&a);
    printf("Ingresa la fecha actual en el formato dd/mm/aaaa\n");
    scanf("%d%d%d",&d2,&m2,&a2);
    
    if(d2<d){
        d2=d2+30;
        m2=m2-1;
        rd=d2-d;
    }
    else 
        rd=d2-d;
    
    if(m2<m){
        m2=m2+12;
        a2=a2-1;
        rm=m2-m;
    }
    else
        rm=m2-m;
       
    ra=a2-a;
    
    if(ra>0)
        printf("Tu edad es: %d años, %d meses y %d dias",ra,rm,rd);
    else 
        printf("La edad del bebe es de %d meses y %d dias",rm,rd);
    
    return 0;
}