#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    long long N, K;
    cin >> N;
    long long *vet;
    vet = new long long[N];
    cin >> K;
    int contador = 0;

    for (int i = 0; i < N; i++)
    {
        long long val;
        cin >> val;
        vet[i] = val;
    }

    sort(vet, vet + N);

    for (int i = 0; i < N; i++)
    {

        if (binary_search(vet + i, vet + N, vet[i] + K) != 0)
            contador++;
    }

    cout << contador;
}