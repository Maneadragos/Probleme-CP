#include <iostream>

using namespace std;

int main()
{
(a) //se vor afisa 39 de stele
    int i = 1;
    while (i < 40)
{
        printf("*");
        i++;
}

(b) //se vor afisa 13 stele
    int i = 1;
    do
{
        printf ("*");
        i += 3;
}
    while (i != 40);

(c) // se vor afisa 20 de stele
    for (int i = 1; i != 40; i += 2)
        printf ("*");

(d) // se vor afisa 47 de stele
    for (int i = 1; i <= 40; i += 15)
    for (int j = 1; j <= i; j++)
        printf ("*")
    return 0;
}
