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

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negeative = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
        if(arr[i]>0){
            positive++;
        }else if(arr[i]<0){
            negeative++;
        }
    }

    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negeative);

    return 0;
}
