#include<stdio.h>

int main(){
    int x;
    int y;

    scanf("%d %d",&x,&y);

    if(x==y){
        printf("true\n");
    }else{
        printf("false\n");
    }

    if(x!=y){
        printf("true\n");
    }else{
        printf("false\n");
    }
    if(x<=y){
        printf("true\n");
    }else{
        printf("false\n");
    }


    return 0;
}