#include<iostream>
#include<string.h>
int fr[129];
using namespace std;

int main()
{
    char s[100];
    int i;
    cin.get(s,100);
    for(i=0;i<strlen(s);i++)
        fr[s[i]]++;
    for(i='a';i<='z';i++)
        cout<<"Caracterul:"<<char(i)<<" apare de "<<fr[i]<<"ori"<<endl;
    for(i='A';i<='Z';i++)
        cout<<"Caracterul:"<<char(i)<<" apare de "<<fr[i]<<"ori"<<endl;

}
