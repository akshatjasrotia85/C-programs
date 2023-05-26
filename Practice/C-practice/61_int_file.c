#include<stdio.h>
int main(){
    FILE *p;int n;
  p = fopen("61_int_file.txt", "r");
  if (p == NULL) {
    printf("File doesn't exist\n");
  }
  else {
  fscanf(p,"%d",&n);
  printf("%d\n",n);
  fclose(p);
  }
    return 0;
}