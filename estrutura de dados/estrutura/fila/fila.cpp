#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <windows.h>

#define TAM 5

using namespace std;

struct queue
{
    float f[TAM];
    int inicio, fim;
};
void enfileira(queue &fill);
void desenfileira(queue &fill);
void elemPrimeiro(queue &fill);
void situacaoFila(queue &fill);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char resp[10];
    int op;
    queue fila;

    fila.inicio = 0;
    fila.fim = -1;

    do
    {
        cout << "\nFILA( FIFO - Fiste In - Fist Out\n\n";
        cout << "\n1 Inserir um valor na fila\n";
        cout << "\n2 Remover o valor da fila\n";
        cout << "\n3 Mostrar o elemento do Inicio\n";
        cout << "\n4 Mostrar situa��o da fila\n";
        cout << "\n5 Sair\n";

        cout << "\nOp��o: ";
        cin >> resp;
        op = atoi(resp);

        system("cls");

        switch (op)
        {
        case 1:
            enfileira(fila);
            break;

        case 2:
            desenfileira(fila);
            break;

        case 3:
            elemPrimeiro(fila);
            break;

        case 4:
            situacaoFila(fila);
            break;

        case 5:
            cout << "nPrograma b�sico na fila.\n";

        default:
            cout << "\nOp��o inv�lida";
        }

        cout << "\n\n";
        system("pause");

    } while (op != 5);
}

void enfileira(queue &fill)
{
    float valor;
    if (fill.fim == TAM - 1)
        cout << "\nAten��o Fila Cheia\n";
    else
    {
        cout << "\nDigite o valor a ser enfileirado: ";
        cin >> valor;

        fill.fim++;
        fill.f[fill.fim] = valor;
    }
}

void desenfileira(queue &fill)
{
    if (fill.inicio > fill.fim)
        cout << "\nAten��o Fila Vazia\n";
    else
    {
        cout << "\nValor removido: " << fill.f[fill.inicio];
        fill.inicio++;
    }
}

void elemPrimeiro(queue &fill)
{
    if (fill.inicio > fill.fim){
        cout << "\nAten��o Fila vazia\n";
}
else
{
    cout << "\nElemento do inico da fila: " << fill.f[fill.inicio];
}
}

void situacaoFila(queue &fill)
{
    if (fill.inicio > fill.fim)
        cout << "\nAten��o fila vazia\n";
    else
    {
        cout << "\n\nTotal de elementos da fila: " << fill.fim - fill.inicio + 1 << "\n";
        cout << "\n\nEspa�o disponivel na fila: " << TAM - (fill.fim + 1) << "\n";
        cout << "\n\nPosi��o do primeiro elemento da fila: " << fill.inicio << "\n";
        cout << "\n\nPosi��o do �ltimo elementos da fila: " << fill.fim << "\n";

        cout << "\nValor\tPosi��o no Vetor\n";

        for (int x = fill.inicio; x <= fill.fim; x++)
        {
            cout << "\n"
                 << fill.f[x] << "\t" << x;
        }
    }
}
