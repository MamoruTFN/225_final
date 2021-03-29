#include<stdio.h>

int main()
{
    int a,b,d,k=0,count=0,check[3];
    scanf("%d %d %d",&a,&b,&d);
    int a1[a][a],b1[b][b],d1[d][d];
    int r1[a],r2[b],r3[d];
    int c1[a],c2[b],c3[d];
    int di1[2],di2[2],di3[2];

    //scan
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<a; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d",&b1[i][j]);
        }
    }
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<d; j++)
        {
            scanf("%d",&d1[i][j]);
        }
    }

    //set di 0
    for(int i=0; i<2; i++)
    {
        di1[i]=0;
        di2[i]=0;
        di2[i]=0;
    }

    //find r,c,d

    for(int i=0; i<a; i++)
    {
        r1[i]=0;
        c1[i]=0;

        for(int j=0; j<a; j++)
        {
            r1[i]+=a1[i][j];
            c1[i]+=a1[j][i];
            if(i==j)
            {
                di1[0]+=a1[i][j];
            }
            else if((i+j)==(a-1))
            {
                di1[1]+=a1[i][j];
            }
        }
    }
    for(int i=0; i<b; i++)
    {
        r2[i]=0;
        c2[i]=0;

        for(int j=0; j<b; j++)
        {
            r2[i]+=b1[i][j];
            c2[i]+=b1[j][i];
            if(i==j)
            {
                di2[0]+=b1[i][j];
            }
            else if((i+j)==(b-1))
            {
                di2[1]+=b1[i][j];
            }
        }
    }
    for(int i=0; i<d; i++)
    {
        r3[i]=0;
        c3[i]=0;

        for(int j=0; j<d; j++)
        {
            r3[i]+=d1[i][j];
            c3[i]+=d1[j][i];
            if(i==j)
            {
                di3[0]+=d1[i][j];
            }
            else if((i+j)==(d-1))
            {
                di3[1]+=d1[i][j];
            }
        }
    }

    //check
    for(int i=0;i<a;i++)
    {
        if(r1[i]!=r1[i+1])
        {
            check[0]=0;
        }
        else if(c1[i]!=c1[i+1])
        {
            check[0]=0;
        }
        else if(di1[i]!=di1[i+1])
        {
            check[0]=0;
        }
    }
    for(int i=0;i<b;i++)
    {
        if(r2[i]!=r2[i+1])
        {
            check[1]=0;
        }
        else if(c2[i]!=c2[i+1])
        {
            check[1]=0;
        }
        else if(di2[i]!=di2[i+1])
        {
            check[1]=0;
        }
    }
    for(int i=0;i<d;i++)
    {
        if(r3[i]!=r3[i+1])
        {
            check[2]=0;
        }
        else if(c3[i]!=c3[i+1])
        {
            check[2]=0;
        }
        else if(di3[i]!=di3[i+1])
        {
            check[2]=0;
        }
    }

    for(int i=0;i<3;i++)
    {
        if(check[i]==0)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
        printf("\n");
    }

    return 0;
}
