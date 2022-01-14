#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct nodo
{
    int info;
    nodo *prox;
};

nodo *insereFrente(nodo *ptr, int valor);
nodo *insereFim(nodo *ptr, int valor);

void exibe(nodo *ptr);

nodo *removeFrente(nodo *ptr);
nodo *removeFim(nodo *ptr);

void substituiNo(nodo *ptr, int posicao, int novoValor);

int buscaSequencial(nodo *ptr, int valor);
int contaNos(nodo *ptr);

void libera(nodo *ptr);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int c, op, valor, pos, nValor, resp;

    nodo *lista = NULL;

    do
    {
        system("cls");
        system("color f1");

        cout << "< < < Alocação Dinamica < < <\n";
        cout << "\n 1- Insere na frente da lista ";
        cout << "\n 2- Insere no fim da lista \n";
        cout << "\n 3- Remove na frente da lista ";
        cout << "\n 4- Remove no fim da lista \n";
        cout << "\n 5- Exibe lista ";
        cout << "\n 6- Substitui nó na lista ";
        cout << "\n 7- Conta os Nós na lista ";
        cout << "\n 8- Busca na Lista \n";
        cout << "\n 9- Libera Lista ";
        cout << "\n 10- Sair ";

        cout << "\n\n Opção: ";
        cin >> op;

        system("cls");
        system("color 1f");

        switch (op)
        {
        case 1:
            cout << "\n Inserir na frente: ";
            cin >> valor;
            lista = insereFrente(lista, valor);
            break;
        case 2:
            cout << "\n Inserir no final: ";
            cin >> valor;
            lista = insereFim(lista, valor);
            break;
        case 3:
            if (!lista)
            {
                cout << "\n\nNada a remover. Fila vazia\n";
            }
            else
            {
                lista = removeFrente(lista);
                cout << "\n\nPrimeiro elemnto da fila removido\n";
            }
            break;
        case 4:
            if (!lista)
            {
                cout << "\n\nNada a remover. Fila vazia\n";
            }
            else
            {
                lista = removeFim(lista);
                cout << "\n\nUltimo elemento da fila removido\n";
            }
            break;

        case 5:
            if (!lista)
            {
                cout << "\n\nFila vazia\n";
            }
            else
            {
                exibe(lista);
            }
            break;

        case 6:
            if (!lista)
            {
                cout << "\nFila vazia\n";
            }
            else
            {
                cout << "\nQual a posição do No? ";
                cin >> pos;

                while (pos > contaNos(lista))
                {
                    cout << "\nPosição Inválida\n";
                    cout << "\nQual a posição do nó? ";
                    cin >> pos;
                }

                cout << "\nQual o novo valor? ";
                cin >> nValor;

                substituiNo(lista, pos, nValor);
                cout << "\nValor Substituido\n";
            }
            break;
        case 7:
            if (!lista)
            {
                cout << "\n\nFila vazia\n";
            }
            else
            {
                cout << "\nTotal de nós: " << contaNos(lista);
            }
            break;
        case 8:
            if (!lista)
            {
                cout << "\n\nFila vazia\n";
            }
            else
            {
                cout << "\nQual o valor de procutra? ";
                cin >> valor;

                resp = buscaSequencial(lista, valor);
                if (resp == 1)
                {
                    cout << "\nValor encontrado na lista.\n";
                }
                else
                {
                    cout << "\nValor não encontrado na lista.\n";
                }
            }
        case 9:
            if (!lista)
            {
                cout << "\nTem elementos na lista";
            }
            else
            {
                libera(lista);
                cout << "\nLiberando memória";
            }
            break;
        case 10:
            cout << "Fechando lista encadeada";
            break;

        default:
            cout << "\nOpção Inválida\n";
        }
        cout << "\n\n";
        system("pause");
    } while (op != 10);
    return 0;
}

nodo *insereFrente(nodo *ptr, int valor)
{
    nodo *temp = new nodo;
    if (!temp)
    {
        cout << "\nNão foi possivel fazer a alocação de memória.\n";
        system("pause");
        exit(1);
    }
    temp->info = valor;
    temp->prox = ptr;
    return temp;
}
nodo *insereFim(nodo *ptr, int valor)
{
    nodo *novo, *aux;
    novo = new nodo;
    if (!novo)
    {
        cout << "\n não foi possível fazer a alocação de memória.\n";
        system("pause");
        exit(1);
    }
    novo->info = valor;
    novo->prox = NULL;
    if (!ptr)
        ptr = novo;
    else
    {
        aux = ptr;
        while (aux->prox)
            aux = aux->prox;
        aux->prox = novo;
    }
    return ptr;
}

void exibe(nodo *ptr)
{
    cout << "\nListado\n";
    while (ptr)
    {
        cout << "\n" << ptr->info;
        ptr = ptr->prox;
    }
}

nodo *removeFrente(nodo *ptr)
{
    nodo *aux;
    aux = ptr;
    ptr = ptr->prox;
    delete aux;
    return ptr;
}

nodo *removeFim(nodo *ptr)
{
    nodo *aux, *ultimo;
    if (!ptr->prox)
    {
        delete ptr;
        ptr = NULL;
        return ptr;
    }
    else
    {
        aux = ptr;
        while (aux->prox->prox)
            aux = aux->prox;
        ultimo = aux->prox;
        delete ultimo;
        aux->prox = NULL;
        return ptr;
    }
}

void substituiNo(nodo *ptr, int posicao, int novoValor)
{
    int conta = 1;
    while (conta != posicao)
    {
        ptr = ptr->prox;
        conta++;
    }
    ptr->info = novoValor;
}

int contaNos(nodo *ptr)
{
    int conta = 0;
    while (ptr)
    {
        conta++;
        ptr = ptr->prox;
    }
    return conta;
}

int buscaSequencial(nodo *ptr, int valor)
{
    while (ptr)
    {
        if (ptr->info == valor)
            return 1;
        ptr = ptr->prox;
    }
    return 0;
}

void libera(nodo *ptr)
{
    delete ptr;
    ptr = 0;
}