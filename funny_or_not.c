// a sctions                              23
// b missbehave                            5
// c anger perunit sec                     7         funny
// d very well                             9
// e anger falls per unit                  7

#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if((d*e)>(b*c)){
        printf("Funny Questions");
    }
    else if((d*e)<(b*c)){
        printf("Simple Questions");
    }
    else{
        printf("God Knows!");
    }
    return 0;
}
