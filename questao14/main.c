#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
    return (*(float*)a - *(float*)b);


int main() {
    int n = 7, i;
    float *p;
    p = (float *) malloc(n*sizeof(float));

    for(i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%f", &p[i]); 
    }

    qsort(p, n, sizeof(float), compare);

    for(i = 0; i < n; i++) {
        printf("%f\n", p[i]); 
    }

    free(p);

    return 0;
}