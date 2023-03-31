#include <stdio.h>
#include <string.h>

int main(){

// define a string
char C_string1[] = 'hello!';
char C_string2[7] = {'H', 'e', 'l', 'l', 'o', '!' ,'\0'}; // from stdio.h
  
/*In C and C++ the single quote is used to identify the single character, 
and double quotes are used for string literals. 
A string literal “x” is a string, it is containing character ‘x’ and a null terminator ‘\0’. 
So “x” is two-character array in this case.*/
  
// string functions from string.h, including copy, concatnate, search, address, compare

// input and output
char a;
char read_word[100];
char read_line[100];

scanf("%c", &a);
scanf("%s", read_word);
scanf("\n");
scanf("%[^\n]%*c",read_line);

printf("%c\n", a);
printf("%s\n", read_word);
printf("%s", read_line);
  
//pointers int *p = &a; *p will return the value


  
  
  
}
