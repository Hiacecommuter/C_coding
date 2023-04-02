#include <stdio.h>
void main(){
  // create a 2d array with r row and c columns
  int r = 3, c=4;
  
  // 1 squash it into 1d array r*c long
  
  // 2 use an array of pointers
  int* arr[r];
  for(int i =0; i<r; i++){
    arr[i] = (int*)malloc(c * sizeof(int));}
  
  int count =0;
  for(int i = 0; i < r; i++){
    for (int j=0; <c ; j++){
      arr[i][j] = ++count;}}
  for (int i=0; i<r;i++){
    for (int j=0; j<c; j++){
      printf("%d ", arr[i][j]);}}
  
  for (int i =0; i<r; i++)
    free(arr[i]);
  free(arr);
}

// 3 use double pointer and one malloc , **ptr is a pointer for an other pointer.

int ptr_3, **arr_3;
arr_3 = (int**)malloc(sizeof(int*)*r + sizeof(int)*c*r;
ptr_3 = (int*)(arr_3 + r);
for(int i = 0; i<r;i++){
  arr_3[i] = (ptr_3 +c*i);}
                      
for (int i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            arr[i][j] = ++count; }}// OR *(*(arr+i)+j) = ++count
 
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
                      
// 4
int (*arr)[row][col] = malloc(sizeof *arr);
                      
//5                      
int (*arr)[col] = calloc(row, sizeof *arr);
                      
// 6 resize each newline after reading it
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
