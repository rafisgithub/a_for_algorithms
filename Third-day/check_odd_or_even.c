#include<stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d is an even number\n", i);
        } else {
            printf("%d is an odd number\n", i);
        }
    }
    return 0;
}
