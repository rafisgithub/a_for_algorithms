/*************************************************************************
 * 
 *  Problem Name : 
 *  Contest Name : Codeforces Round #XYZ
 *  Author       : Rafi Ahmed
 *  Date Created : 2024-07-02
 * 
 *************************************************************************/

#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a%b==0 || b%a==0){
        printf("Multiples\n");
    }else{
        printf("No Multiples\n");
    }
    return 0;
}
