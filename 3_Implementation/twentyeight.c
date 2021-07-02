#include <stdio.h>
#include <string.h>

/**
 * @brief File for 28% GST
 * 
 * @param pdt 
 * @return int 
 */

int product_twentyeight(char pdt[]){
  FILE *fp=NULL;
    char dum_pdt[20];
    int len;
    fp=fopen("twentyeight.txt","r");
     fseek(fp,0,SEEK_SET); 
    if(fp){ 
    while(!feof(fp))
        {
          len=strlen(pdt)+1;
          fgets(dum_pdt,len,fp);
           if(strcmp(dum_pdt,pdt)==0){
               return 28;
           }
        }
    }
    fclose(fp);
    return 1;
}

