#include <stdio.h>
int main()
{
char ch;
printf("enter a character:\n");
scanf("%c",&ch);
if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
     printf("this is a alphabate");
}
else if(ch>='0'&&ch<='9')
    printf("this is a digit");
else
    printf("this is nothing");
return 0;
}
