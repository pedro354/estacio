#include <iostream>
using namespace std;
void troca (float& a, float& b);
int main ()
{
    float n1,n2;
    cout<<"\nDigite o primeiro numero: ";
    cin>>n1;
    cout<<"\nDigite o segundo numero: ";
    cin>>n2;
    troca(n1,n2);
    cout<<"\nApos a troca: "<<n1<<"\t"<<n2;
    cout<<"\n\n";
    return 0;
}
void troca(float& a, float& b)
{
    float aux;
    aux=a;
    a=b;
    b=aux;
}