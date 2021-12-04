#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    struct coordernadas
    {
        int x, y;
    };
    coordernadas a={-5,2}, b={6,5};
    cout << "\nCoordernadas de a("<<a.x<<", "<<a.y<<")";
    cout << "\nCoordernadas de a("<<b.x<<", "<<b.y<<")";
    cout<<"\n\n";
    system("pause");
}