#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i ,j ,make_value, identifier_counter=0, const_counter=0, operator_counter=0;
    char text[100], operators[100], identifiers[100],constant[100],endsystem[100];

    printf("Enter the string :");
    gets(text);

    for (i=0; i<strlen(text); i++)
    {

        if(isspace(text[i]))
        {
            continue;

        }
        else if(isalpha(text[i]))
        {
            identifiers[identifier_counter]=text[i];
            identifier_counter++;

        }
        else if(isdigit(text[i]))
        {
            make_value=(text[i]-'0');
            i=i+1;
            while(isdigit(text[i]))
            {
                make_value=make_value*10 + (text[i]-'0');
                i++;

            }
            i=i-1;
            constant[const_counter] = make_value;
            const_counter++;

        }
        else
        {
            if(text[i]=='*')
            {
                operators[operator_counter]='*';
                operator_counter++;

            }
            if(text[i]=='-')
            {
                operators[operator_counter]='-';
                operator_counter++;

            }
            else if(text[i]=='+')
            {

                operators[operator_counter]='+';
                operator_counter++;

            }
            else if(text[i]=='=')
            {
                operators[operator_counter]='=';
                operator_counter++;

            }

        }
    }



    printf("Component Table:");

    printf("\n\tIdentifiers: ");
    for(j=0; j<identifier_counter; j++)
    {
        printf("%c",identifiers[j]);
    }

    printf("\n\tOperators: ");
    for(j=0; j<operator_counter; j++)
    {
        printf("%c ",operators[j]);
    }

    printf("\n\tConstants: ");
    for(j=0; j<const_counter; j++)
    {
        printf("%d ",constant[j]);
    }

    printf("\n\tEnd of the statement: ");
    for (i=0; i<strlen(text); i++)
    {
        if (text[i]==';')
        {
            printf("%c ",text[i]);

        }
    }
    printf("\n");
    return 0;
}
