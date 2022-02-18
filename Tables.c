#include<stdio.h>
int main()
{
    int n,m,i,tab;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        tab=n*i;
        if(i%2!=0)
        {
            printf("%d x %d = %d
",n,i,tab);
        }
    }
    return 0;
}