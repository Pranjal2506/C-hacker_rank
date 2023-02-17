#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&d);
    for(int i=1; i<=d; i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a+b+c)==180){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}