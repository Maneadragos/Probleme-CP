#include <iostream>
using namespace std;
void interchange(int &x,int &y)
{
    int aux;
    aux=x;
    x=y;
    y=aux;
}
int main()
{
    int x,y;
    cin>>x>>y;
    interchange(x,y);
    cout<<x<<" "<<y;
}
