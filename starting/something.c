#include <stdio.h>
int main()
{
    int i;
    char ch;
    printf("enter the value of ch:");
scanf("%c",&ch);
    while(ch!='A')
    {
       scanf("%c",&ch);
       i=i+1;
       printf("the answer is %d",i);
       i++;
    }

}
