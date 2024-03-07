#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome = "Ola meu nome Scorpion";
    string arma = "Minha Arma e Ninja Sword";
    string habilidade = "Umas das minhas habilidadees e Teletransporte";
    int peso = 80;

    int numeroPoderes = 100;
    int numeroDefesa = 50;
    int numeroForca = 500;
    bool entrarNoInstagram;
    bool ConhecerMais;


    cout << nome << endl;
    cout << arma << endl;
    cout << habilidade << endl;
    cout << "Meu Peso e : " << peso << endl;

    cout << "Voce deseja entrar no Instagram de Scorpion? (1 - Sim, 0 - Nao): ";
    cin >> entrarNoInstagram;

    cout << "Informacoes de Rede Social:" << endl;
    cout << "Numero de Poderes:  " << numeroPoderes << endl;
    cout << "Numero de Defesa: " << numeroDefesa << endl;
    cout << "Numero de Forca:    " << numeroForca << endl;

    if (entrarNoInstagram) {
        cout << "Voce esta entrando no Instagram de Scorpion..." << endl;
    }
    else {
        cout << "Mas eu vou mostrar minhas informacoes mesmo assim,Obrigado! kkk" << endl;

    }
   
}

