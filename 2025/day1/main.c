#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv[]){
  FILE* fptr;
  fptr = fopen("input", "r");
  if (fptr == NULL) {
    printf("File could not be opened\n");
  }
  return 0;
}
