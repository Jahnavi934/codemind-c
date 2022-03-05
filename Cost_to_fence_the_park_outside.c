#include<stdio.h>
int main()
{
    int L,B,W,C,A,TC;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    A=((L+2*W)*(B+2*W))-(L*B);
    TC=C*A;
    printf("%d",TC);
    return 0;
}