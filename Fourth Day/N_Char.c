/*************************************************************************
 * 
 *  Problem Name : 
 *  Contest Name : Codeforces Round #XYZ
 *  Author       : Rafi Ahmed
 *  Date Created : 2024-07-02
 * 
 *************************************************************************/

// a = 97
// A = 65
#include <stdio.h>

int main() {
    char x;
    scanf("%c",&x);

    if(x>='a' && x<='z'){
        printf("%c",x-32);
    }else{
        printf("%c",x+32);
    }
    return 0;
}
