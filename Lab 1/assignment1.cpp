#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main ()
{
    string t;
    char  b[100];
    int i = 0, j = 0;

    ifstream MyReadFile("filename.txt");

    while (getline(MyReadFile, t))
    {
        cout << "Main Text From the file: "<<t<<endl;

    }

    while (t[i] != '\0')
    {

        if(t[i] =='/' && t[i + 1] =='*')
        {
            while( !(t[i] == '/' && t[i - 1] == '*') )
            {
                i++;

            }
        }
        else if(t[i] =='/' && t[i + 1] =='/')
        {
            break;
        }
        else if(!(t[i] == ' ' && t[i+1] == ' '))
        {
            b[j] = t[i];
            j++;
        }
        i++;
    }

    b[j] = '\0';

    cout << "The converted Text: "<< b <<endl;


    MyReadFile.close();

}
