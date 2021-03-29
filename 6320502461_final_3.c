#include<stdio.h>

int main()
{
    int a,b,d,k=0;
    scanf("%d %d %d",&a,&b,&d);
    int a1[a][a],b1[b][b],d1[d][d];
    int r1[a],r2[b],r3[d];
    int c1[a],c2[b],c3[d];
    int di1[2],di2[2],di3[2];

    //scan
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&b1[i][j]);
        }
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<d;j++)
        {
            scanf("%d",&d1[i][j]);
        }
    }

    //set di 0
    for(int i=0;i<2;i++)
    {
        di1[i]=0;
        di2[i]=0;
        di2[i]=0;
    }

    //find r,c,d
    for(int i=0;i<a;i++)
    {
        r1[i]=0;
        c1[i]=0;

        for(int j=0;j<a;j++)
        {
            r1[i]+=a1[i][j];
            c1[i]+=a1[j][i];
            if()
        }
    }
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            r2[i]+=b1[i][j];
            c2[i]+=b1[j][i];
        }
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<d;j++)
        {
            r3[i]+=d1[i][j];
            c3[i]+=d1[j][i];
        }
    }

    for(int i=0;i<a;i++)
    {
        if(r1)
    }

    return 0;
}
