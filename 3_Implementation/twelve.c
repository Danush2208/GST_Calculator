#include <stdio.h>
#include <string.h>

/**
 * @brief File for 12% GST
 * 
 * @param pdt 
 * @return int 
 */

int product_twelve(char pdt[]){
  FILE *fp=NULL;
    fp=fopen("twelve.txt","r");
    if(fp){ 
    while(!feof(fp))
        {
          char dum_pdt[20];
          int len;
          len=strlen(pdt)+1;
          fgets(dum_pdt,len,fp);
           if(strcmp(dum_pdt,pdt)==0){
               return 12;
           }
        }
    }
    fclose(fp);
    return 1;
}

