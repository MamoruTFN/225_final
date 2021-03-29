#include<stdio.h>

int main()
{
    int n,l[10000],a,max,c,c1;
    scanf("%d",&n);
    for(int i=0; i<10000; i++)
    {
        l[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        l[a-1]++;
    }

    max=l[0];

    for(int i=0; i<10000; i++)
    {
        if(l[i]>=max)
        {
            max=l[i];
        }
    }

    for(int i=0;i<10000;i++)
    {
        if(l[i]==max)
        {
            printf("%d ",i+1);
        }
    }




    return 0;
}
