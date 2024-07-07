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
    int n;

    scanf("%d",&n);

    for(int i=1;i<=12;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
