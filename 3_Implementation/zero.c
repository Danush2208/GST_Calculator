#include <stdio.h>
#include <string.h>

int product_zero(char pdt[]){
  FILE *fp=NULL;
    char dum_pdt[20];
    int len;
    fp=fopen("zero.txt","r");
     fseek(fp,0,SEEK_SET); 
    if(fp){ 
    while(!feof(fp))
        {
          len=strlen(pdt)+1;
          fgets(dum_pdt,len,fp);
           if(strcmp(dum_pdt,pdt)==0){
               return 0;
           }
        }
    }
    fclose(fp);
    return 1;
}

