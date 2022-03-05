#include<stdio.h>
int main()
{
    int L,B,W,C,A,TC;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    A=(L*B)-((L-2*W)*(B-2*W));
    if(L-2*W > 0 && B-2*W>0)
    {
        TC=C*A;
        printf("%d",TC);
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}