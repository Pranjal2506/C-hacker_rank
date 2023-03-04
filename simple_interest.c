#include<stdio.h>
int main(){
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    int i=(p*r*t)/100;
    printf("%d",i+p);
    return 0;
}
