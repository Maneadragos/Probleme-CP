#include <iostream>

using namespace std;

int main()
{
    int a,b;
        cout<<"dati valori pentru a,b:";
        cin>>a>>b;
        cout<<"suma:"<<a+b<<'\n';
        cout<<"diferenta:";
    if(a>b)
        cout<<a-b<<'\n';
    else
        cout<<b-a<<'\n';
        cout<<"produsul:"<<a*b<<'\n';
        cout<<"impartirea:";
    if(a>b)
        cout<<a/b<<'\n';
    else
        cout<<b/a<<'\n';
        cout<<"impartirea cu mod:";
    if(a>b)
        cout<< a%b<<'\n';
    else
        cout<< b%a<<'\n';

    return 0;
}
