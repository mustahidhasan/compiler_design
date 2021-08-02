#include<stdio.h>

int main(){

    char text[100];
    int i = 0, c = 0;
    printf("Enter the text:\n");
    gets(text);

    while(text[i] != '\0'){
        if(text[i] == '/' && text[i + 1] != '/'){
            printf("Found '/' at :%d th position\n",i);
            i++;
            c++;
        }else if(text[i] == '/' && text[i + 1] == '/'){
            printf("Found '/' at :%d th position\n",i);
            c++;
            break;
        }
        else{
            i++;
        }
    }
    printf("\nTotal '/' found: %d\n", c);

    return 0;
}
