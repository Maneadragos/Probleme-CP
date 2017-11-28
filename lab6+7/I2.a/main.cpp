#include <iostream>

using namespace std;
int strlen_array( char array[])
{
    int i, lungime;
    i = 0;
    lungime = 0;
    while(array[i]!='\0')
    {
        ++lungime;
        ++i;
    }
    cout<<lungime;
}
int main()
{
    char sir[100];
    cin>>sir;
    strlen_array(sir);

    return 0;
}
