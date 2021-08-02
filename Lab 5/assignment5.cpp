#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    char t[100], b[100], c = '"';
    int i = 0, j = 0, k = 0;
    printf("Enter the String:\n");
    gets(t);

    while(t[i] != '\0'){
        if(t[i] == c && k == 0){
            k++;
            while(t[i + 1] != c || t[i + 1] == 'a' || t[i + 1] == 'b' ){
                b[j] = t[i + 1];
                j++;
                i++;

            }

        }
        i++;

    }
    b[j] = '\0';
    if (b[j] != '\0')
        printf("The Actual String is:%s", b);
    else
        printf("Does not satisfy the rule");

    return 0;
}
