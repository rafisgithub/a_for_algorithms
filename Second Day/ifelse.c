#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main() {
    char s[15];

    // gets(s);
    fgets(s, sizeof(s), stdin);


    if(strcmp(s, "friday") == 0) {
        if(true){
            printf("খিচুড়ি\n");
        }else{

                    printf("সে কাচ্চি খায়\n");

        }

    } else if(strcmp(s, "sunday") == 0) {
        printf("খিচুড়ি\n");
    } else if(strcmp(s, "monday") == 0) {
        printf("তেহারি\n");
    } else if(strcmp(s, "tuesday") == 0) {
        printf("বার্গার\n");
    }
    
    return 0;
}
