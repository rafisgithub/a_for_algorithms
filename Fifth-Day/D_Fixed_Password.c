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
    int correct_password  = 1999;
    int n;
    while (scanf("%d",&n)!=EOF)
    {
       if(correct_password == n){
        printf("Correct\n");
        break;
       }else{
        printf("Wrong\n");
       }
    }
    

    
    return 0;
}
