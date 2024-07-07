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

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int large_num = arr[0];

    for(int i=1;i<n;i++){
        if(large_num<arr[i]){
            large_num = arr[i];
        }
    }

    printf("%d\n",large_num);

    return 0;
}
