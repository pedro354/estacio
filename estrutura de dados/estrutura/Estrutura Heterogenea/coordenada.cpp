#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
using namespace std;

struct Coordenada ponto [3];
 {
    int x, y, z;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    Coordenada pontoA;
    ponto[0].x = 10;
    ponto[0].y = 20;
    ponto[0].z = 50;
   

    cout << "Ponto A: "<< ponto[0].x <<;
    cout << "Ponto A: "<< ponto[0].y <<;
    cout << "Ponto A: "<< ponto[0].z << endl;
    
        Coordenada pontoB;
    ponto[1].x = 33;
    ponto[1].y = 44;
    ponto[1].z = 66;
   

    cout << "Ponto B: "<< ponto[1].x <<;
    cout << "Ponto B: "<< ponto[1].y <<;
    cout << "Ponto B: "<< ponto[1].z << endl;
        
        Coordenada pontoC;
    ponto[2].x = 4;
    ponto[2].y = 7;
    ponto[2].z = 9;
   

    cout << "Ponto C: "<< ponto[2].x <<;
    cout << "Ponto C: "<< ponto[2].y <<;
    cout << "Ponto C: "<< ponto[2].z << endl;

    system("pause");
    return 0;
}