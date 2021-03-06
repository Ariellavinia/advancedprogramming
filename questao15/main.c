#include <stdio.h>
#include <stdlib.h>

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

int main() {
    int n = 7, i, x;
    float *p;
    p = (float *) malloc(n*sizeof(float));

    for(i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%f", &p[i]);
    }

    sort(p, n, sizeof(float));

    for(i = 0; i < n; i++) {
        printf("%f\n", p[i]);
    }

    free(p);

    return 0;
}