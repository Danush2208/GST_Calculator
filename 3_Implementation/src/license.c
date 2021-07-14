#include <stdio.h>
#include <string.h>
#include<stdlib.h>
/**
 * @brief File for License of the GST numbers
 * 
 * @param lic 
 * @return int 
 */

int license_cal(char lic[]){
  FILE *fp=NULL;
    fp=fopen("../3_Implementation/text_files/license.txt","r");
    if(fp){ 
    while(!feof(fp))
        {
          int len;
          len=strlen(lic)+1;
          char* dum_lic;
          dum_lic = (char*)malloc (len * sizeof (char));
          fgets(dum_lic,len,fp);
           if(strcmp(dum_lic,lic)==0){
               return 0;
           }
        }
    }
    fclose(fp);
    return 1;
}

