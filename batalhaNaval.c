/* Nível Aventureiro - Tabuleiro 10x10 com 4 navios (incluindo dois na diagonal) */
#include <stdio.h>


void print_int_matrix(int rows, int cols, int mat[rows][cols]){
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
printf("%d ", mat[i][j]);
}
printf("
");
}
}


int main(){
const int N = 10;
int tab[N][N];


for(int i=0;i<N;i++){
for(int j=0;j<N;j++){
tab[i][j] = 0;
}
}


int n1_row = 2, n1_col = 3, n1_len = 4;
for(int k=0;k<n1_len;k++) tab[n1_row][n1_col + k] = 3;


int n2_col = 8, n2_row = 5, n2_len = 3;
for(int k=0;k<n2_len;k++) tab[n2_row + k][n2_col] = 3;


int n3_start_r = 0, n3_start_c = 0, n3_len = 4;
for(int k=0;k<n3_len;k++) tab[n3_start_r + k][n3_start_c + k] = 3;


int n4_start_r = 6, n4_start_c = 2, n4_len = 3;
for(int k=0;k<n4_len;k++) tab[n4_start_r - k][n4_start_c + k] = 3;


print_int_matrix(N, N, tab);


return 0;
}
