#include <stdio.h>
#include <stdlib.h>
#include <string> 
#include <iostream>
#include <time.h>

using namespace std;

void LimpaTela()
{
    system("CLS");
}

string RetornaPalavraAleatoria()
{
    string palavras[3] = {"Abacaxi", "Manga", "Morango"};

    int indiceAleatorio = rand() % 2;

    return palavras[indiceAleatorio];
}

string RetornaPalavraComMascara(string palavra, int TamanhoDaPalavra)
{
    int cout = 0;
    string PalavraComMascara;

    while (cout < TamanhoDaPalavra)
    {
        PalavraComMascara += "_";
        cout++;
    }

    return PalavraComMascara;
}

void JogarSozinho()
{
    string palavra = RetornaPalavraAleatoria();

    cout << "A palavra secreta é:" << palavra;

    int TamanhoDaPalavra = palavra.size();
    
    string PalavraComMascara = RetornaPalavraComMascara(palavra,TamanhoDaPalavra);

}

void MenuInicial () {
    //User option
    int opcao = 0;

    while (opcao < 1 || opcao > 3)
    {
    LimpaTela();
    cout << "Bem vindo ao jogo da forca";
    cout << "\n1 - Jogar";
    cout << "\n2 - Sobre";
    cout << "\n3 - Sair";
    cout << "\nEscolha uma opção e tecle - ENTER:";
    cin >> opcao;

        switch(opcao) 
        {    
        case 1:
            //Inicia o game
            cout << "Jogo iniciado"; 
            break;

        case 2:
            //Game infos
            cout << "Informações do jogo";
            break;

        case 3: 
            //Vai com deus
            cout << "Até mais!";
            break;
        }
    }
}

int main ()
{
    //gera números aleatórios
    srand( (unsigned)time(NULL));

    MenuInicial();
    return 0;
}