#include <stdio.h>
#include <string.h>
/**
 * @brief File for 0% GST
 * 
 * @param pdt 
 * @return int 
 */

int product_zero(char pdt[]){
  FILE *fp=NULL;
    fp=fopen("../3_Implementation/text_files/zero.txt","r");
    if(fp){ 
    while(!feof(fp))
        {
          char dum_pdt[20];
          int len;
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

