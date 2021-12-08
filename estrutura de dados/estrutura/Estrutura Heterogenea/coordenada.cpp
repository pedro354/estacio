#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
using namespace std;

struct Coordenada {
    int x, y, z;
};
void imprimirDados(Coodernada pto);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Coordenada pontoA;
    Coordenada pontoB;

    pontoA.x = 10;
    pontoA.y = 20;
    pontoA.z = 30;


cout << "Digite a coordenada x: ";
cin >> pontoB.x;

cout << "Digite a coordenada y: ";
cin >> pontoB.y;

cout << "Digite a coordenada z: ";
cin >> pontoB.z;

imprimirDados(pontoA);
imprimirDados(pontoB);
    system("pause");
    return 0;
}

void imprimirDados(Coodernada ponto){
cout << "Ponto B - x: " << ponto.x << endl << endl;
cout << "Ponto B - y: " << ponto.y << endl << endl;
cout << "Ponto B - z: " << ponto.z << endl << endl;


}