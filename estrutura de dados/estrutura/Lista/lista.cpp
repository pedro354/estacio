#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void insere(int coidgo[], int &t, int tamanho);
void exibe(int codigo[], int t);
void elemento(int codigo[], int t);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tam, codigoProduto[5], op;

    // inicialização
    tam = 0;
    do
    {
        // obtem a opção
        system("cls");
        cout << "\nMenu - LISTA \n";
        cout << "\n0 - Reinciar a LISTA";
        cout << "\n1 - Inserir codigo na LISTA";
        cout << "\n2 - Exibir a LISTA";
        cout << "\n3 - Exibir tamanho da LISTA";
        cout << "\n4 - Exebir um elemento da LISTA";
        cout << "\n5 - Sair";

        // obtem a opção
        cout << "\n\nDigite a opção: ";
        cin >> op;

        system("cls");

        // executa a ação escolhida
        switch (op)
        {
        case 0: // reinicilização
            tam = 0;
            break;

        case 1:
            insere(codigoProduto, tam, 5);
            break;

        case 2:
            exibe(codigoProduto, tam);
            break;

        case 3:
            cout << "\nTamanho da LISTA: " << tam;
            break;

        case 4:
            elemento(codigoProduto, tam);
            break;

        case 5:
            cout << "\nFinalizando o programa da LISTA";
            break;

        default:
            cout << "\nOpcao Inválida. \n";
        }

        cout << "\n\n";
        system("pause");

    } while (op != 5);
}
void insere(int codigo[], int &t, int tamanho)
{
    int prod;

    // verifica se a lista está cheia
    if (tamanho == t){
        cout << "\nAtenção \n Lista Cheia\n";
}
    else
    {
        cout << "\nDigite o codigo do produto a ser inserido: ";
        cin >> prod;

        codigo[t] =prod;

        t++;
    }
}

void exibe(int codigo[], int t)
{
    int x;

    // verifica se tem algum elemento na lista
    if (t == 0){
        cout << "\nAtenção \nLista Vazia\n";
    }
    else if
    {
        cout << "\nRelação dos codigos.\n";

        for (x = 0; x < t; x++)
        cout << "\n" << codigo[x];
    }
}

void elemento(int codigo[], int t)
{
    int prod, posicao;
    if (t == 0){
        cout << "\nAtenção \nLista Vazia.\n";
    }
    else
    {
       
        cout << "\nQual a posicao que deseja? ";
        cin >> posicao;
        posicao--;
        if (posicao >= t){
        cout << "\nAtenção \nNenhum codigo armazenado ou posição inexistente. \n";
        }
   else{
    
        cout << "nCodigo: " << codigo[posicao] << "\n";
    }
}