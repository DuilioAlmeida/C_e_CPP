// Figura 15.3: fig15_03.cpp
// Usando uma função inline para calcular o volume de um cubo.
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Declaração da função inline cube. A declaração da função aparece antes de
// a função ser chamada, de modo que um protótipo de função nao é exigido.
// Primeira linha da declaração atua como protótipo.
inline double cube(const double side)
{
    return side * side * side;  // calcula o cubo do lado
}// fim da função cube

int main()
{
    double sideValue; //  armazena valor informado pelo usuário

    for (int i = 1; i <= 3; i++)
    {
        cout << "\nDigite o tamanho do lado do cubo: ";
        cin >> sideValue; // le valor do usuário

        // calcula cubo de sideValue e mostra resultado
        cout << "o volume do cubo com lado "
            << sideValue <<" eh " << cube(sideValue) << endl;
    }
}