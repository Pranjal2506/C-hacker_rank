#include<stdio.h>
int main(){
    float c,s;
    scanf("%f%f",&c,&s);
    if(s>c){
        printf("Profit\n");
        printf("%.2f%%",((s-c)/c)*100);
    }
    else{
        printf("Loss\n");
        printf("%.2f%%",((c-s)/c)*100);
    }
    return 0;
}