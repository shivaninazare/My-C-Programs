#include<stdio.h>
int main()
{
    int p,c,m,t3,tpm;
    printf("Enter the marks obtained in physics ,chemistry and maths:\n");
    scanf("%d%d%d",&p,&c,&m);
    t3=p+m+c;
    tpm=p+m;
    if((p>=50)&&(m>=60)&&(c>=40)&&((t3>=200)||(tpm>=150)))
        {
        printf("Eligible\n");
        }
    else
    {
        printf("Not Eligible\n");
    }
}
