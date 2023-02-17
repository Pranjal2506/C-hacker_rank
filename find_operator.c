#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)==c){
        printf("+");
    }
    else if((a-b)==c || (b-a)==c){
        printf("-");
    }
    else if((a*b)==c){
        printf("*");
    }
    else if((a/b)==c || (b/a)==c){
        printf("/");
    }
    else{
        printf("%%");
    }
    return 0;
}
