#include <iostream>

using namespace std;

int main()
{
    int i;

    for(i=2;i<=60;i+=2)
    {
        cout<<i<<" ";
    }
        cout<<endl;
        i=2;
    while(i<=60)
    {
        cout<<i<<" ";
        i+=2;
    }
    cout<<'\n';
    i=2;
    do
    {
        cout<<i<<" ";
        i+=2;
    }while(i<=60);

    return 0;
}
