#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i==6){
            continue;
        }
        printf("%d ",i); //1 2 3 4 5 7
    }
    return 0;
}