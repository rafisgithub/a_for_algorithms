#include<stdio.h>

int main(){
    int x,y;

    scanf("%d %d",&x,&y);

    int sum = x+y;
    int mul = x*y;
    int sub = x-y;
    int mod = x%y;

    printf("%d \n %d \n %d \n %d \n",sum,mul,sub,mod);
    return 0;
}