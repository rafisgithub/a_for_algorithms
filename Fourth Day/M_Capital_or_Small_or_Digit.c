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
    char x;

    scanf("%c",&x);

    if(x>='0' && x<='9'){
        printf("IS DIGIT\n");
    }else{
        printf("ALPHA\n");
        if(x>='a' && x<='z'){
            printf("IS SMALL\n");
        }else if(x>='A' && x<="Z"){
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}
