#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 char a[50], b[50], c[50];
 printf("Digite os nomes dos 3 vetores: ");
 gets(a);
 gets(b);
 gets(c);
 int n;
 printf("Digite o tamanho dos vetores: ");
 scanf("%i", &n);
 int A[n];
 int B[n];
 int C[n];
 int a1,b1;
 int i;

  for(i=0;i<n;i++) { //recebendo os valores de A e B
    printf("Digite o elemento %i do primeiro vetor: ", i+1);
    scanf("%i", &a1);
    A[i] = a1;
  }
  for(i=0;i<n;i++) {
    printf("Digite o elemento %i do segundo vetor: ", i+1);
    scanf("%i", &b1);
    B[i] = b1;
  }

 somadevetores(n,A,B,C);// chamando a função de soma

 printf("%s: [", a); // mostrando os três vetores
 for(i = 0; i < n; i++) {
  if(i+1==n) {
    printf("%i]\n", A[i]);
  }
 else {
    printf("%i, ", A[i]);
  }
 }
 printf("%s: [", b);
 for(i = 0; i < n; i++) {
  if(i+1==n) {
    printf("%i]\n", B[i]);
  }
 else {
    printf("%i, ", B[i]);
  }
 }
 printf("%s: [", c);
 for(i = 0; i < n; i++) {
  if(i+1==n) {
    printf("%i]\n", C[i]);
  }
 else {
    printf("%i, ", C[i]);
  }
 }

}

void somadevetores(int n, int *vetora, int *vetorb, int *vetorc){
  int i;
  for(i=0;i<n;i++) {
    *(vetorc) = *(vetora) + *(vetorb);
    vetorc++;
    vetora++;
    vetorb++;
  }
}