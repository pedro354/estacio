#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void imprimirMsg();
float calculaImposto();
int soma(int vlr1, int vlr2);
void alterarDado (int& vlr1);

int main () {
    setlocale(LC_ALL, "Portuguese");

    //float resultado;
    //imprimirMsg();
    //resultado = calculaImposto();
    //cout<<"Resultado do calculo: " << resultado <<"\n\n";
    /*int resultado;
    resultado = soma(10, 20);
    cout<<"Resultado do calculo: " << resultado <<"\n\n";*/

    int vlr1;

    vlr1 = 20;

    alterarDado(vlr1);

    cout<<"valor alterado: " << vlr1 <<"\n\n";
    

    system("pause");
    return 0;
}

void imprimirMsg() {
    cout << "Alo Mundo!\n\n";
}

float calculaImposto (){
    float sal ;
    float valorImposto;

    sal = 2000;

    valorImposto = sal * 0.1;

    return valorImposto;
}

int soma(int vlr1, int vlr2)
{
    int total;
    total = vlr1 + vlr2;
    return total;
}

void alterarDado (int& vlr1) {

    vlr1 = 100;

}