#include <iostream>
using namespace std;

int *obterMaiorElemento(int *vetor, int tamanhoVetor)
{
    int maior = vetor[0];
    int *ponteiroMaior = &vetor[0];

    for (int i = 1; i < tamanhoVetor; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            ponteiroMaior = &vetor[i];
        }
    }

    return ponteiroMaior;
}

int main()
{
    int *Array;
    uint16_t TamanhoArray;
    uint16_t Elemento;

    cout << "Digite o tamanho do array:" << endl;
    cin >> TamanhoArray;

    Array = new int[TamanhoArray];

    cout << "Digite os elementos do array: " << endl;
    for (int i = 0; i < TamanhoArray; i++)
    {
        cin >> Elemento;
        Array[i] = Elemento;
    }

    int *ponteiroMaior = obterMaiorElemento(Array, TamanhoArray);
    cout << "Maior elemento: " << *ponteiroMaior << endl;
    cout << ponteiroMaior << endl << *ponteiroMaior << endl;
}
