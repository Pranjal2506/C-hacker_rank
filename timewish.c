#include<stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if((a>=4 && a<=11)){
        printf("Good Morning");
    }
    else if(a>=12 && a<=15){
        printf("Good AfterNoon");
    }
    else if(a>=16 && a<=20){
        printf("Good Evening");
    }
    else{
        printf("Good Night");
    }
    return 0;
}