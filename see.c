#include <stdio.h>
int max_of_four(int a,int b,int c,int d);
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
}
int max_of_four(int a,int b,int c,int d)
{
    int m;
    if(((a>b)&&(a>c)&&(a>d)))
    {
        m=a;
    }
    else if(((b>a)&&(b>c)&&(b>d)))
    {
        m=b;
    }
    else if(((c>a)&&(c>b)&&(c>d)))
    {
        m=c;
    }
    else
    {
        m=d;
    }
    return m;
}
