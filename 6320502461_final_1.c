#include<stdio.h>

int main()
{
    int n,c,a[5],k=0;
    scanf("%d %d",&n,&c);
    for(int i=0;i<5;i++)
    {
        a[i]=0;
    }
    for(int i=0;n>0;i++)
    {
        a[i]=n%10;
        n/=10;
    }

    while(1)
    {
        if(a[0]!=c)
        {
            a[0]++;
            if(a[0]==9)
            {
                a[0]=0;
                a[1]++;
            }
        }
        else
        {
            break;
        }

    }

    k=a[0]+(a[1]*10)+(a[2]*100)+(a[3]*1000)+(a[4]*10000);
    printf("%d",k);

    return 0;
}
