#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    float vetor, aux;
    printf("Quantos elementos terao? ");
    scanf("%d", &n);
    vetor = (float) malloc(n*sizeof(float));
    printf("Quais sao os elementos? \n");
    for(i=0;i<n;i++){
        scanf("%f", &vetor[i]);
    }
    printf("\n");

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%.1f \n", vetor[i]);
    }
    free(vetor);
    return 0;