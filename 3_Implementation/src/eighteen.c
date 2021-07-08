#include <stdio.h>
#include <string.h>
/**
 * @brief File for 18% GSST
 * 
 * @param pdt 
 * @return int 
 */

int product_eighteen(char pdt[]){
  FILE *fp=NULL;
    fp=fopen("../3_Implementation/text_files/eighteen.txt","r"); 
    if(fp){ 
    while(!feof(fp))
        {
          char dum_pdt[20];
          int len;
          len=strlen(pdt)+1;
          fgets(dum_pdt,len,fp);
           if(strcmp(dum_pdt,pdt)==0){
               return 18;
           }
        }
    }
    fclose(fp);
    return 1;
}

