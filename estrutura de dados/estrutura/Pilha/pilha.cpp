#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <windows.h>
#define TAM 5
using namespace std;

void empilha(int p[], int& t, int v);
int desempilha(int p[], int& t, int& v);
void acessoTopo(int p[], int& t);
void situacaoPilha(int p[], int& t);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op, val, topo = -1, pilha[TAM], resp;

    do
    {
        system("cls");
        
        cout << "\nPILHA (LIFO - last in - first out)\n\n";
        cout << "\n1- Inserir um valor na Pilha";
        cout << "\n2- Remover um valor na Pilha";
        cout << "\n3- Mostrar o elemento do topo de uma Pilha";
        cout << "\n4- Mostrar situação da Pilha";
        cout << "\n5- Sair";

        cout << "\n\nOpção: ";
        cin>> op;

        system("cls");

        switch (op)
        {
            case 1:
            cout << "Digite o valor a ser empilhado: ";
            cin >> val;
            empilha(pilha, topo, val);
            break;

            case 2:
            resp = desempilha(pilha, topo, val);
            if (resp == 0)
            cout << "\nAtenção Pilha Vazia\n";
            else
            cout <<"\nValor removido: " << val;
            break;

            case 3:
            acessoTopo(pilha, topo);
            break;

            case 4:
            situacaoPilha(pilha, topo);
            break;

            case 5:
            cout >> "\nPrograma básico da Pilha";
            break;

            default:
            cout<<"\nOpção Inválida\n";
        }

        cout << "\n\n";
        system("pause");
    }
}

void empilha(int p[], int& t, int v)
{
    if (t == 0 - 1)
    cout << "\nAtenção Pilha Cheia";
    else
    { 
        t++;
        p[t] = v;
    }
}

int desempilha (int p[], int& t, int& v)
{
    if(t == -1)
    {
        return 0;
    }
    else
    {
        v = p[t];
        t--;
        return 1;
    }
}

void acessoTopo(int p[], int& t)
{
    if (t == -1){
        cout << "\nAtenção Pilha Vazia";
        }
        else {
            cout <<"Elemento do topo da pilha: " << p[t];
        }
}

void situacaoPilha(int p[], int& t)
{
    if (t == -1){
        cout <<"\nAtenção Pilha Vazia\n";
    }
    else if(t == TAM -1){
        cout << "\nAtenção Pilha Cheia\n"
    }else{
        cout <<"\ntotal de elementos na pilha: " << t + 1 << "\n";
        cout <<"\nespaçõ disponivel na pilha: " << TAM - (t + 1) << "\n";
    }
}
