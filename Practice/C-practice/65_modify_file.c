#include <stdio.h>
#include <stdlib.h> // For exit()
int main() {
  FILE *fptr1;
  char filename[100];
  int c;
  printf("Enter the filename to open \n");
  scanf("%s", filename);
  // Open one file for reading
  fptr1 = fopen(filename, "r+");
  if (fptr1 == NULL) {
    printf("Cannot open file %s \n", filename);
    exit(0);

  } else {
    // Read contents from file
    fscanf(fptr1, "%d", &c);
    fprintf(fptr1, "%d", 2*c);
    printf("\nContents copied to %s", filename);
    fclose(fptr1);
  }
  return 0;
}