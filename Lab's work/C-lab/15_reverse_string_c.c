#include<stdio.h>
#include<string.h>
int main(){
    char str[45],cpy[45];
    printf("enter sring:");
    scanf("%s",str);
    strcpy(cpy,str);
    int i,j,len=strlen(str),temp;
      for(i=len-1,j=0;j<(len/2); i--,j++){
        //swap characters
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
    }   
    if (strcmp(cpy,str)==0) {
        printf("string is palidrome i.e\n");   
    }   
    else {
        printf("string is not palidrome i.e\n");
    }     
    printf("%s\n",str);
    return 0;
}