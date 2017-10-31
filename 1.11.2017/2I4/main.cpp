#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x,ok = 1;
        ifstream f ("Notele.txt");
    while(f.eof())
    {
        f >> x;
    if(x <= 4)
        ok = 0;
    }
    if(ok==1)
        cout<<"toti elevii au promovat!!"<<'\n';
    else
        cout<<"cineva a picat";



    return 0;
}
