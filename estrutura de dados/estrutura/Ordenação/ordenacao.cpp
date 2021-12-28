#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void selectionSort(int vet[], int tam);
void imprimirVetor(int vet[], int tam);

int main(){

    setlocale(LC_ALL, "Portuguese");

    int vetor[5] = {13, 23, 3, 8, 1};
    int i;

    //Antes da troca
    imprimirVetor(vetor, 5);
    cout << "\n\n";

    //================================
    //       selection Sort
    //================================
    selectionSort(vetor, 5);
    //================================

    cout << "\n\n";

    //apos troca
    imprimirVetor(vetor, 5);
    cout << "\n\n";

    system("pause");
    return 0;
}

void selectionSort(int vet[], int tam)
{
    int indexMin, i, j;

    //pecorre todos os numeros
    for (i = 0; i < tam - 1; i++)
    {
        //define o elemento atual como o menor
        indexMin = i;

        //encontra o menor valor apos "i + 1"
        for (j = i + 1; j < tam; j++)
        {
            if (vet[j] < vet[indexMin])
            {
                indexMin = j;
            }
        }


    cout << "Troca: " << vet[i] << "<=" << vet[indexMin] << endl
         << endl;

    if (indexMin != i)
    {

        //troca os numeros
        int temp = vet[indexMin];
        vet[indexMin] = vet[i];
        vet[i] = temp;
    }
}
}

void imprimirVetor(int vet[], int tam)
{
    int i;

    cout << vet[0];

    //apos troca
    for (i = 1; i < 5; i++)
    {
        cout << "," << vet[i];
    }
    cout << endl;}
