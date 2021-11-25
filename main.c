#include <stdio.h>

extern int *sort(int *, int);

int main()
{
    int n;
    int arr[10];
    printf("Insira a quantidade de valores a serem ordenados: ");
    scanf("%d", &n);

    if (n > 10)
    {
        printf("Valor deve ser menor ou igual a 10.");
        return 0;
    }

    printf("Insira os valores:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *result = sort(arr, n);

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}