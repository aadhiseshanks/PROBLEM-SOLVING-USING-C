#include <stdio.h>
void main() {
  int row, col;
  scanf("%d %d", &row, &col);
  int arr[row][col];
  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  int max = -1, rowIndex = -1;
  for(int i=0; i<row; i++) {
    int count = 0;
    for(int j=0; j<col; j++) {
      if(arr[i][j]==1) {
        count++;
      }
    }
    if(count > max) {
      max = count;
      rowIndex = i;
    }
  }
  printf("%d", rowIndex);
}
