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
    char dum_lic[20];
    int len;
    fp=fopen("license.txt","r");
    fseek(fp,0,SEEK_SET); 
    if(fp){ 
    while(!feof(fp))
        {
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

