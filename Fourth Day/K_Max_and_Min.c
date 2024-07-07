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
    int n1,n2,n3;

    scanf("%d %d %d",&n1,&n2,&n3);

    int min;
    if(n1<=n2 && n1<=n3){
        min = n1;
    }else if(n2<=n1 && n2<=n3){
        min = n2;
    }else{
        min = n3;
    }

    
    int max;
    if(n1>=n2 && n1>=n3){
        max = n1;
    }else if(n2>=n1 && n2>=n3){
        max = n2;
    }else{
        max = n3;
    }

    printf("%d %d\n",min,max);
    return 0;
}
