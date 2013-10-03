#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
  
#define BUF_SIZE 1024

bool is_vowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c  == 'U');
  /* Returns true if c is a vowel (upper or lower case), and false otherwise. */
}

/*
   * int copy_non_vowels(int num_chars, char* in_buf, char* out_buf) {
   * Copy all the non-vowels from in_buf to out_buf. num_chars indicates how many
   * characters are in in_buf, and this should return the number of non-vowels that
   * that were copied over.
   *
   * }
*/

void disemvowel(FILE* inputFile, FILE* outputFile) {


    int currentChar;
    while((currentChar = fgetc(inputFile)) != EOF) {
      if(!is_vowel(currentChar)){
	fprintf(outputFile, "%c", currentChar);
      }
    }

    // putchar()
  /* 
   * Copy all the non-vowels from inputFile to outputFile.
   * Create input and output buffers, and use fread() to repeatedly read
   * in a buffer of data, copy the non-vowels to the output buffer, and
   * use fwrite to write that out.
   */
}

int main(int argc, char *argv[]) {
  FILE *inputFile;
  FILE *outputFile;


  // FILE *file1 = fopen( argv[1], "r" );

  
  if (argc == 1){
    //stdin to stdout case
    inputFile = stdin;
    outputFile = stdout;
  } else if(argc == 2){
    //file to stdout case
    inputFile = fopen( argv[1], "r" );
    outputFile = stdout;
  } else if(argc == 3){
    //file to file case
    inputFile = fopen( argv[1], "r" );
    outputFile = fopen( argv[2], "w" );
  } else {
    printf("More than two arguments were present.");
    exit(1);
  }

  disemvowel(inputFile, outputFile);

  return 0;
}
