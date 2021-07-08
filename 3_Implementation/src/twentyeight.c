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
    fp=fopen("E:\\LTTS\\MINI_PROJECT\\GST_Calculator\\3_Implementation\\text_files\\twentyeight.txt","r");
    if(fp){ 
    while(!feof(fp))
        {
          char dum_pdt[20];
          int len;
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

