#include <stdio.h>
#include <stdlib.h>

int** matrixProduct(int n,int k,int m,int A[n][k],int B[k][m]){

  // A[n][k] and B[k][m]
  
  int** C = malloc(n * sizeof(int*));
    for(int i=0;i<n;i++)
        C[i] = calloc(m, sizeof(int));
  
  for(int i = 0;i<n;i++){
  
    for(int j = 0;j<m;j++){
    
      for(int p = 0;p<k;p++){
      
        C[i][j] += A[i][p] * B[p][j];
      
      }
    }
  }

  return C;
}


int main(){

  int A[1][3] = {{1,2,3}};
  int B[3][1] = {{4},{5},{6}};
  
  int** C = matrixProduct(1,3,1,A,B);
  printf("%d\n", C[0][0]);

  for(int i=0;i<1;i++) free(C[i]);
  free(C);



  return 0;
}
