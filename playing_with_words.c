#include <stdio.h>
int main()
{
    char a[150],b[150],c[150];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    fgets(c,100,stdin);
    printf("%s",a);
    printf("%s",b);
    printf("%s",c);
    return 0;   
}
