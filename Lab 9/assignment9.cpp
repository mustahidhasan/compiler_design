#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int i=0,j=0,n;
    void *p;
    char ch, b[15], c;
    printf("Enter an Expression (terminated by $):");

    while((c=getchar())!='$')
    {
        b[i]=c;
        i++;
    }
    n=i-1;
    printf("Given Expression:");
    i=0;
    while(i<=n)
    {
        printf("%c",b[i]);
        i++;
    }



    printf("\n Symbol Table\n");
    printf("Symbol \t address \t type");
    while(j<=n)
    {
        c=b[j];
        if(isalpha(toascii(c)))
        {
            p=malloc(c);
            printf("\n%c \t %d \t identifier\n",c,p);
            j++;
        }
        else
        {
            ch=c;
            if(ch=='+'||ch=='-'||ch=='*'||ch=='=')
            {
                p=malloc(ch);
                printf("\n %c \t %d \t operator\n",ch,p);
                j++;
            }
        }
    }

    return 0;
}
