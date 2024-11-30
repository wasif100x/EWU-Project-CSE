#include <stdio.h>
int main(){
int a,b,c;
printf("enter");
scanf("%d %d %d",&a,&b,&c);
if(a+b>c){
    if(b+c>a){
    if(c+a>b){
        printf("valid");
    }}}
else {
    printf("not valid");
}
return 0;
}
