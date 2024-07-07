/*************************************************************************
 * 
 *  Problem Name : 
 *  Contest Name : Codeforces Round #XYZ
 *  Author       : Rafi Ahmed
 *  Date Created : 2024-07-02
 * 
 *************************************************************************/

// 123/100  = 1
// 456/100 = 4
// 9999/1000 = 9
#include <stdio.h>

int main() {
    int num;

    scanf("%d",&num);
    int first_digit = num/1000;

    if(first_digit%2==0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }

    return 0;
}
