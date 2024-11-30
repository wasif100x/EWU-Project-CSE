#include <stdio.h>
int main()
{
    int n,i;
    float a,s=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%f",&a);
        s=s+a;
    }
    s=s/(float)n;
    printf("the answer is %f",s);
}
