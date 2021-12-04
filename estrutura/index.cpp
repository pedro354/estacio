#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;
void imprimirMsg();
float calculaImposto();
int soma (int vlr1, int vlr2);

int main() {
    setlocale(LC_ALL, "Portuguese");
    //float resultado;
    //imprimirMsg();
    //resultado = calculaImposto();
    //cout << "resultado do calculo: " << resultado << "\n\n";

    int resultado;

    resultado = soma(10, 20);

    cout << "resultado do calculo: " << resultado << "\n\n";

    system ("pause");
    return 0;
}

void imprimirMsg() {
    cout << "Olá Mundo\n\n";
}
float calculaImposto() {
    float sal;
    float vlrImposto;

    sal = 205;

    vlrImposto = sal * 0.1;

    return vlrImposto;
}

int soma (int vlr1, int vlr2){
    int total;

    total = vlr1 + vlr2;

    return total;
}
