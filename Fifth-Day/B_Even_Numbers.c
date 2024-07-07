/*************************************************************************
 * 
 *  Problem Name : 
 *  Contest Name : Codeforces Round #XYZ
 *  Author       : Rafi Ahmed
 *  Date Created : 2024-07-07
 * 
 *************************************************************************/

#include <stdio.h>

int main() {
   unsigned int n;
    scanf("%u",&n);

    if(n==1){
        printf("-1");
        return 0;
    }
    for(int i=2;i<=n;i+=2){
        printf("%d\n",i);
    }

    return 0;
}
