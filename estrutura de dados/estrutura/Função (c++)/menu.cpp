#include <iostream>

using namespace std;

void menu() {
    
    cout << "\nMenu\n";
    cout << "\n1-Pilha";
    cout << "\n2-Fila";
    cout << "\n3-Lista";
    cout << "\n4-Arvore";
    cout << "\n5-Grafo";
    cout << "\n6-Sair";
    cout << "\nOpcao: ";
}

int main () {
    int op;
    cout << "Escolha a opção desejada?";
    menu();
    cin >> op;
    switch (op){
        case 1:
        cout << "Vamos estudar Pilha\n";
        case 2:
        cout << "Vamos estuda fila\n";
        case 3:
        cout << "Vamos estuda Lista\n";
        case 4:
        cout << "Vamos estuda Arvore\n";
        case 5:
        cout << "Vamos estuda Grafo\n";
        case 6:
        cout << "Vamos estuda Sair\n";
        break;
    }
}
