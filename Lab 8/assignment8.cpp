#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char text[100];
    int Temp, i=1;
    printf("Enter an identifier:\n");

    gets(text);
    if(isalpha(text[0]))
        Temp=1;
    else if(text[0] == '_')
        Temp = 1;
    else
        printf("Not a valid identifier\n");

    while(text[i]!='\0')
    {
        if(!isdigit(text[i]) && !isalpha(text[i]) && text[i] != '_')
        {
            Temp=0;
            break;
        }
        i++;
    }
    if(Temp==1)
        printf("Valid identifier\n");

    return 0;
}
