#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,i,p,a,k,N;
    printf("Enter the number:\n");
    scanf("%d",&num);
    k=1;
    N=0;
    for(i=num;i!=0;i=i/10)
    {
        rem=i%10;
        if(rem==0)
            rem=5;
        else
            rem=rem;
        N=rem*k+N;
        k=k*10;
    }
    printf("Number= %d",N);
    return 0;
}
