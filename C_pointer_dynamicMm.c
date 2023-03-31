#include <stdio.h>

void main(){
// 3 ways to define an array
  int def_arr1[10];
  int def_arr2[10] = {0,1,2,3,4,5,6,7,8,9};
  int def_arr3[] = {0,1,2,3,4,5,6,7,8,9};
  
// define a pointer
  int i = 10;  printf(“%p”, &i);
  int *ptr, i=10; ptr = &i;  printf("%p", *ptr);
  
 // pointer array
   int *ptrarray[4]; // store addresses
   int w = 100, x = 200, y = 300, z = 400;

    ptrarray[0] = &w;
    ptrarray[1] = &x;
    ptrarray[2] = &y;
    ptrarray[3] = &z;

    for (int i = 0; i< 4; i++) {
         printf("The value %d has the adddress %d\n", *ptrarray[i], ptrarray[i]);
    }
  
 //malloc(), calloc(), free(), and realloc()
  int n =10;
  int* ptr_m = (int *)malloc(n*sizeof(int)); // ptr_m is NULL if not allocated
  
  int* ptr_a = (int*)calloc(n, sizeof(int)); // ptr_a initializes each block with a default value 0;
  
  free(ptr_m_); free(ptr_a);
  
  int* ptr_r = (int*)calloc(n, sizeof(int));
  ptr_r = realloc(ptr, (n+5)*sizeof(int));
  
  //example
  int index = 0, i = 0, n,
        *marks; // this marks pointer hold the base address
                // of  the block created
    int ans;
    marks = (int*)malloc(sizeof(
        int)); // dynamically allocate memory using malloc
    // check if the memory is successfully allocated by
    // malloc or not?
    if (marks == NULL) {
        printf("memory cannot be allocated");
    }
    else {
        // memory has successfully allocated
        printf("Memory has been successfully allocated by "
               "using malloc\n");
        printf("\n marks = %pc\n",
               marks); // print the base or beginning
                       // address of allocated memory
        do {
            printf("\n Enter Marks\n");
            scanf("%d", &marks[index]); // Get the marks
            printf("would you like to add more(1/0): ");
            scanf("%d", &ans);
  
            if (ans == 1) {
                index++;
                marks = (int*)realloc(
                    marks,
                    (index + 1)
                        * sizeof(
                            int)); // Dynamically reallocate
                                   // memory by using realloc
                // check if the memory is successfully
                // allocated by realloc or not?
                if (marks == NULL) {
                    printf("memory cannot be allocated");
                }
                else {
                    printf("Memory has been successfully "
                           "reallocated using realloc:\n");
                    printf(
                        "\n base address of marks are:%pc",
                        marks); ////print the base or
                                ///beginning address of
                                ///allocated memory
                }
            }
        } while (ans == 1);
        // print the marks of the students
        for (i = 0; i <= index; i++) {
            printf("marks of students %d are: %d\n ", i,
                   marks[i]);
        }
        free(marks);
    }
  
}
