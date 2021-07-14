#include <stdio.h>
#include <string.h>
#include<stdlib.h>
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
      char* dum_pdt;
    while(!feof(fp))
        {
          int len;
          len=strlen(pdt)+1;
          
          dum_pdt = (char*)malloc(len * sizeof (char));
          fgets(dum_pdt,len,fp);
           if(strcmp(dum_pdt,pdt)==0){
             dum_pdt=NULL;
               return 0;
           }
        }
        dum_pdt=NULL;
    }
    //fclose(fp);
    return 0;
}

