#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    string nome;

    cout << "Exemplo inicial de aplicativo" << endl;
    cout << "Digite seu nome: ";
    //cin  >> nome;
    getline (cin, nome);
    cout << "fale " << nome;
    cout << " Digite um numero: ";
    cin >> a;
    cout << "Digite outro numero: ";
    cin >> b;
    cout << "Outro: ";
    cin >> c;
    cout << "A soma dos numeros e: " << a + b + c << endl;

    system("pause");
    return 0;
    }