#include<stdio.h>
int main ()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int a,b,j,sum=0;
        scanf("%d%d",&a,&b);
        for (j=a; j<=b; j++)
        {
            if(j%2!=0)
            {
                sum =sum+j;

            }

        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
