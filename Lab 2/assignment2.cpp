#include<stdio.h>
#include<stdlib.h>
int main(){
    char name[100];
    printf("Enter the string: ");
    bool a = scanf("%[a* a*b+ abb]", &name);
    if (a == true)
        printf("The Valid String is: %s", name);
    else
        printf("Does not satisfy the rule");


}
