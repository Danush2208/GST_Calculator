#include <stdio.h>
#include <string.h>
/**
 * @brief File for 5% GST
 * 
 * @param pdt 
 * @return int 
 */

int product_five(char pdt[]){
  FILE *fp=NULL;
    fp=fopen("Five.txt","r"); 
    if(fp){ 
    while(!feof(fp))
        {
          char dum_pdt[20];
          int len;
          len=strlen(pdt)+1;
          fgets(dum_pdt,len,fp);
           if(strcmp(dum_pdt,pdt)==0){
               return 5;
           }
        }
    }
    fclose(fp);
    return 1;
}
