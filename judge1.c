#include<stdio.h>


int main(){
  int E, A, n, padrao;
  int i, j = 0, aceita = 0;

  scanf("%d %d",&E, &A);

  int notas[A];
  for(i=0; i<A; i++){
    scanf("%d",&n);
    notas[i] = n;
  }

  padrao = E/A - 1;
  if(((notas[1] - notas[0] - 1) + (E - notas[A-1] + notas[0] - 1)) >= padrao)
    aceita++;
  if(((E - notas[A-1] + notas[0] - 1) + (notas[A-1] - notas[A-2] - 1)) >= padrao)
    aceita++;

  for(j=1; j<A-1; j++){
    if(((notas[j+1] - notas[j] - 1) + (notas[j] - notas[j-1] - 1)) >= padrao)
      aceita++;
  }

  if (aceita >= A){
    printf("S");
  }
  else{
    printf("N");
  }

  return 0;
}