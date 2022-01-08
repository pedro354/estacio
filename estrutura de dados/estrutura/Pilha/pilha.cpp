#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <windows.h>


#define TAM 100

using namespace std;

void push(float p[], int t, float v);
float pop(float p[], int t);

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int t = -1; // inicializa��o
    float a, b, p[TAM];
    char s[10];

    system("");
    cout << "\n*****************************************************";
    cout << "\n* Calculadora para quatro opera��es p�s-fixa *";
    cout << "\n* Digite numeros e operadores *";
    cout << "\n* Digite s para sair *";
    cout << "\n*****************************************************\n";
    do
    {
        cout << ": ";
        cin >> s;

        switch (s[0])
        {
        case '+':
            a = pop(p, t);
            b = pop(p, t);
            cout << "\n" << a + b << "\n";
            push(p, t, a + b);
            break;

        case '-':
            a = pop(p, t);
            b = pop(p, t);
            cout << "\n" << a - b << "\n";
            push(p, t, a - b);
            break;

        case '*':
            a = pop(p, t);
            b = pop(p, t);
            cout << "\n" << a * b << "\n";
            push(p, t, a * b);
            break;

        case '/':
            a = pop(p, t);
            b = pop(p, t);
            if (a == 0)
            {
                cout << "\nOpera��o inv�lida: divis�o por 0.\n";
            }
            else
            {
                cout << "\n" << a / b << "\n";
                push(p, t, a / b);
            }
            break;

        default:
            push(p, t, atof(s));
        }
    } while (s[0] != 's');
    system("pause");
}

/*insere elemento na planilha */
void push(float p[], int t, float v)
{
    if (t == TAM - 1)
    {
        cout << "\nAten��o Pilha Cheia\n";
    }
    else
    {
        t++;      // atualiza o topo
        p[t] = v; // pilha recebe o valor
    }
}

/* Remove elemento da pilha*/
float pop(float p[], int t)
{
    float v;
    if (t == -1)
    {
        cout << "\nAten��o Pilha Vazia";
        return 0;
    }
    else
    {
        v = p[t]; // guarda o valor do topo
        t--;      // atualiza o topo
        return v;
    }
}