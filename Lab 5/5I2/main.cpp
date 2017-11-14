#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a,b,r,ok=1;
        ifstream f("x");
        f>>a>>b;
        r=b-a;
    while(f.eof())
    {
        f>>a>>b;
    if((a-b)!= r)
        ok=0;
    }
    if(ok==1)
        cout<<"numerele sunt in progresie aritmetica de ratie: "<<r;
    else
        cout<<"nu sunt in progrestie";



    return 0;
}
