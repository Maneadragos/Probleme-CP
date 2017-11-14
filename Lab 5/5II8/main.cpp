#include<string.h>
#include<iostream>

using namespace std;

int isPalindrome(char s[256])
{
    char aux[256],k=0;
    int i;
    for(i=strlen(s)-1;i>=0;i--)
        {
        aux[k]=s[i];
        k++;
        }
    aux[k]='\0';
    if(strcmp(aux,s)==0)
        return 1;
    else
        return 0;
}
int main()
{
    char s[256];
    cin>>s;
    if(isPalindrome(s)==1)
        cout<<"Este palindrom";
    else
        cout<<"Nu este palindrom";
}
