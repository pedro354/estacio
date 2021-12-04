#include <iostream>
using namespace std;
float areaRetangulo(float, float);
int main()
{
    int base, altura;
    cout<<"\nDigite a base de um retangulo: ";
    cin>>base;
    cout<<"\nDigite a altura de um retangulo: ";
    cin>>altura;
    cout<<"\nArea: "<<areaRetangulo(base, altura) << " m2";
    cout<<"\n\n";
    return 0;
}

float areaRetangulo(float b, float h)
{
    return b*h;
}