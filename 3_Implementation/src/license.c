#include <stdio.h>
#include <string.h>

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
          char dum_lic[50];
          int len;
          len=strlen(lic)+1;
          fgets(dum_lic,len,fp);
           if(strcmp(dum_lic,lic)==0){
               return 0;
           }
        }
    }
    fclose(fp);
    return 1;
}

