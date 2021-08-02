#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;



int main ()
{
    char  b[100], t[100];
    int i = 0, j = 0;

    gets(t);
    while (t[i] != '\0')
    {

        if(t[i] =='/' && t[i + 1] =='*')
        {
            i += 2;
            while( !(t[i] == '*') )
            {
                b[j] = t[i];
                j++;
                i++;

            }
        }
        else if(t[i] =='/' && t[i + 1] =='/')
        {
            i += 2;
            while(t[i] != '\0'){
                b[j] = t[i];
                j++;
                i++;
            }
        }
        i++;
    }

    b[j] = '\0';

    cout << "The Comment Text: "<< b <<endl;


    return 0;
}
