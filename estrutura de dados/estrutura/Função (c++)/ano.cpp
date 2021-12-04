#include <iostream>
using namespace std;
int descobreIdade (int anoAnual, int anoNas);
int main()
{
    int anoA, anoN;
    cout<<"\nDigite ano atual: ";
    cin>>anoA;
    cout<<"\nDigite ano de nascimento: ";
    cin>>anoN;
    cout<<"\nVoce tera ate 31 de dezembro de "<<anoA<<" "<<descobreIdade(anoA, anoN)<<"anos";
    cout<<"\n\n";
    return 0;
}
int descobreIdade (int anoAtual, int anoNas)
{
    return anoAtual - anoNas;
}