#include<stdio.h>

int main()
{
    int n,l[10000],a,max,c,c1;
    scanf("%d",&n);
    for(int i=0;i<10000;i++)
    {
        l[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        l[a-1]++;
    }

    max=l[0];

    for(int i=0;i<10000;i++)
    {
        if(l[i]>=max)
        {
            max=l[i];
            c=i;
            if(l[i]==max)
            {
                c1=i;
            }
        }
    }

        printf("%d",c+1);




    return 0;
}
