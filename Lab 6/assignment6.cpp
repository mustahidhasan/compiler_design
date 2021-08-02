#include<stdio.h>
#include<string.h>
int main(){

    char t[100], b[100], c = '"';
    int i = 0, j = 0, k = 0;
    printf("Enter the String:\n");
    gets(t);

    while(t[i] != '\0'){
        if(t[i] == c && k == 0){
            k++;
            while(t[i + 1] != c){
                b[j] = t[i + 1];
                j++;
                i++;

            }

        }
        i++;

    }
    b[j] = '\0';
    printf("The Actual String is:%s", b);


    return 0;
}
