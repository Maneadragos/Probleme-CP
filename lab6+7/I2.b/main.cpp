#include <iostream>

using namespace std;
int strlen_pointer( char *strp)
{
    int lungime = 0;
    while( *strp++ != '\0')
        ++lungime;
    cout<<lungime;
}

int main()
{
    char sir[100];
    cin>>sir;
    strlen_pointer(sir);
    return 0;
}
