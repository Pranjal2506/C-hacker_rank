// n days                           7
// s subjects                       4            
// c chapters                       6
// h hours takes                    1                    24 hrs total
// l days trip                      2                     5 days left
// t hours daily                    8                    t


#include <stdio.h>
int main() {
    int n,s,c,h,l,t,a,b;
    scanf("%d%d%d%d%d%d",&n,&s,&c,&h,&l,&t);
    a= h*c*s;
    b= n-l;
    if(t*b>a){
        printf("Goa Jaayenge");
    }
    else{
        printf("Padhai Karenge");
    }
    return 0;
}
