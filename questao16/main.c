#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float* sort(float *arr, float  size, float biteSize) {
    int k;
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[i]) {
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }
    return arr;
}

int compare(const void * a, const void * b) {
    return (*(float*)a - *(float*)b);
}

int main() {
    int n = 7, i, x;
    float *p;
    double timeSpent1 = 0.0, timeSpent2 = 0.0;
    p = (float *) malloc(n*sizeof(float));

    for(i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%f", &p[i]);
    }

    clock_t begin1 = clock();

    sort(p, n, sizeof(float));

    clock_t end1 = clock();

    timeSpent1 += (double)(end1-begin1) / CLOCKS_PER_SEC;
    printf("\nO tempo passado na funcao sort foi de %f segundos", timeSpent1);

    clock_t begin2 = clock();

    qsort(p, n, sizeof(float), compare);

    clock_t end2 = clock();

    timeSpent2 += (double)(end2-begin2) / CLOCKS_PER_SEC;

    printf("\nO tempo passado na funcao qsort foi de %f segundos\n", timeSpent2);
    printf("A diferenca entre os dois intervalos foi de %f segundos\n", timeSpent2 - timeSpent1);

    for(i = 0; i < n; i++) {
        printf("%f\n", p[i]);
    }

    free(p);

    return 0;
}