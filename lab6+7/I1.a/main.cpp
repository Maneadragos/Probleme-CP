#include <iostream>
#include <string.h>
using namespace std;
char strcpy_array ( char a[ ], char b[])
{
    int i;
    for(i = 0;i<strlen(b); ++i)
        b[i]=a[i];
    if(strlen(a)>strlen(b))
        for(i = strlen(b); i<strlen(a)-strlen(b); ++i)
            a[i]='\0';
    for(i = 0; i<strlen(b); ++i)
        cout<<a[i];
}

int main()
{
    char a[100],b[100];
    cin>>a;
    cout<<endl;
    cin>>b;
    strcpy_array(a,b);
    return 0;
}
