#include<stdio.h>
int main()
{
    int span[100],price[100],i,j,n;
    printf("Enter the number of days\n");
    scanf("%d",&n);
    printf("Enter the stock prices\n");
    for(i=0;i<n;i++)
    scanf("%d",&price[i]);
    span[0]=1;
    for(i=1;i<n;i++)
    {
        span[i]=0;
        for(j=0;j<=i;j++)
        {
            if(price[i-j]<=price[i])
            span[i]=span[i]+1;
            else
            break;
        }
    }
    printf("Span values");
    for(i=0;i<n;i++)
    printf(" %d",span[i]);
    return 0;

}
