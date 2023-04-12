#include<stdio.h>

// define structure
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;

// struct as function arguments
void printBook(struct Books book){
  printf("%s", book.title);
}

// access the member of a struct using a pointer to that structure
void printBookPointer(struct Books *book){
  printf("%s\n", book->title);
  printf("%s\n", (*book).title);
}

// struct bit fields
/*Bit fields allow the packing of data in a structure. This is especially useful when memory or
data storage is at a premium. Typical examples include:
  - Packing several objects into a machine word. e.g. 1 bit can be compacted
  - Reading external file formats -- non standard file formats could be read in e.g. 9-bit integers
 */
struct packed_struct {
   unsigned int f1:1;
   unsigned int f2:1;
   unsigned int f3:1;
   unsigned int f4:1;
   unsigned int type:4;
   unsigned int my_int:9;
} pack;
/* C automatically packs the above bit fields as compactly as possible, provided that the maximum
length of the field is less or equal to the integer word length of the computer. */

void main(){
// declare 
  struct Books Book1, Book2;
  
// Accessing Structure Members
  Book1.title;

// pointers to struct
  struct Boos * struct_pointer;
  struct_pointer = &Book1;


}
