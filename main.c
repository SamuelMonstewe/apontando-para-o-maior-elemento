#include <stdio.h>
#include <stdlib.h>

int *obterMaiorElemento(int *vetor, int TamanhoVetor)
{
    int MaiorElemento = vetor[0];
    int *ponteiroMaior = &vetor[0];

    for(int i = 1; i < TamanhoVetor; i++)
    {
        if(vetor[i] > MaiorElemento)
        {
            MaiorElemento = vetor[i];
            ponteiroMaior = &vetor[i];
        }
    }

    return ponteiroMaior;
}

int main()
{
    int *Array;
    int TamanhoArray;
    int Elemento;

    printf("Digite o tamanho do array:\n");
    scanf("%d", &TamanhoArray);

    Array = (int *) malloc(TamanhoArray * sizeof(int));

    printf("Digite os elementos do array:\n ");

    for(int i = 0; i < TamanhoArray; i++)
    {
        scanf("%d", &Elemento);
        Array[i] = Elemento;
    }

    int *ponteiroMaior = obterMaiorElemento(Array, TamanhoArray);
    printf("Maior elemento: %d\n", *ponteiroMaior);
    printf("Endereco que o ponteiro esta apontando: %x; Elemento que printf esta apontando: %d", ponteiroMaior, *ponteiroMaior);
    return 0;
}
