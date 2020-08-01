#include <iostream>
#include <string>
#include <string.h>

using namespace std;

char tabularecta[26][26];

void createtabula(char tabula[26][26])
{
    tabula[0][0] = 'A';
    for(int i=1; i<26; i++)
        tabula[0][i] = tabula[0][i-1] + 1;
    for(int i=1; i<26; i++)
        tabula[i][0] = tabula[i-1][0] + 1;
    for(int i=1; i<26; i++)
    {
        for(int j=1; j<26; j++)
        {
            if(tabula[i][j-1] == 'Z')
            {
                tabula[i][j] = 'A';
            }
            else
            {
                tabula[i][j] = tabula[i][j-1] + 1;
            }
        }
    }
}

int strlen(string str)
{
    int i=0;
    while(str[i])
        i++;
    return i+1;
}

char cipher(char a, char b)
{
    return tabularecta[a-65][b-65];
}

int main()
{
    createtabula(tabularecta);
    string text, key, ciphered;
    cout << "Enter Text You Want to be Ciphered: ";
    cin >> text;
    cout << "Enter Key You Want to be Ciphered With: ";
    cin >> key;
    int counter = 0;
    while(strlen(key) < strlen(text))
    {
        key += key[counter];
        counter++;
        if(counter == strlen(key))  counter=0;
    }
    for(int i=0; text[i]; i++)
    {
        ciphered += cipher(text[i], key[i]);
    }
    cout << "Ciphered Text is: " << ciphered << endl;
}
