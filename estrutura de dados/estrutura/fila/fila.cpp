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
        cout << "\n4 Mostrar situação da fila\n";
        cout << "\n5 Sair\n";

        cout << "\nOpção: ";
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
            cout << "nPrograma básico na fila.\n";

        default:
            cout << "\nOpção inválida";
        }

        cout << "\n\n";
        system("pause");

    } while (op != 5);
}

void enfileira(queue &fill)
{
    float valor;
    if (fill.fim == TAM - 1)
        cout << "\nAtenção Fila Cheia\n";
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
        cout << "\nAtenção Fila Vazia\n";
    else
    {
        cout << "\nValor removido: " << fill.f[fill.inicio];
        fill.inicio++;
    }
}

void elemPrimeiro(queue &fill)
{
    if (fill.inicio > fill.fim){
        cout << "\nAtenção Fila vazia\n";
}
else
{
    cout << "\nElemento do inico da fila: " << fill.f[fill.inicio];
}
}

void situacaoFila(queue &fill)
{
    if (fill.inicio > fill.fim)
        cout << "\nAtenção fila vazia\n";
    else
    {
        cout << "\n\nTotal de elementos da fila: " << fill.fim - fill.inicio + 1 << "\n";
        cout << "\n\nEspaço disponivel na fila: " << TAM - (fill.fim + 1) << "\n";
        cout << "\n\nPosição do primeiro elemento da fila: " << fill.inicio << "\n";
        cout << "\n\nPosição do último elementos da fila: " << fill.fim << "\n";

        cout << "\nValor\tPosição no Vetor\n";

        for (int x = fill.inicio; x <= fill.fim; x++)
        {
            cout << "\n"
                 << fill.f[x] << "\t" << x;
        }
    }
}
