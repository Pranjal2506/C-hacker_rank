#include<stdio.h>
int main(){
    char a;
    printf("Enter a single character\n");
    scanf("%c",&a);
    if((a >= 'a' && a <='z') || (a>='A' && a<='Z')){
        printf("This is an Alphabet");
    }
    else{
        printf("This is not a character");
    }
    return 0;
}