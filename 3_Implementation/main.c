/**
 * @file start.c
 * @author S DANUSH VENKATESH (danushvenkat25@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fun.h"

int main(){
  char pdt[20],lic[20],dum_key,dum_key_1;
  int option,gst_percent,gst_charged,license_check,percent_check;
  
NEW:
  menu_display();
  scanf("%d",&option);
  
  if(option==1){
    system("@cls||clear");
    printf("Enter the product you want to know the GST for:");
    scanf("%s",pdt);
    gst_percent=product_zero(pdt);
    if(gst_percent==0){
      printf("\nThe GST for the product is %d %% \n",gst_percent);
    }
    gst_percent=product_five(pdt);
    if(gst_percent==5){
      printf("\nThe GST for the product is %d %% \n",gst_percent);
    }
    gst_percent=product_twelve(pdt);
    if(gst_percent==12){
      printf("\nThe GST for the product is %d %% \n",gst_percent);
    }
    gst_percent=product_eighteen(pdt);
    if(gst_percent==18){
      printf("\nThe GST for the product is %d %% \n",gst_percent);
    }
    gst_percent=product_twentyeight(pdt);
    if(gst_percent==28){
      printf("\nThe GST for the product is %d %% \n",gst_percent);
    }
    scanf("%c",&dum_key_1);
    printf("\n Press a key to go to main menu");
    scanf("%c",&dum_key);
    goto NEW;
  }
  
  if(option==2){
    system("@cls||clear");
    percent_check=0;
    printf("Enter the product you want to know the GST for:");
    scanf("%s",pdt);
    printf("Enter the GST charged for your product:");
    scanf("%d",&gst_charged);
    gst_percent=product_zero(pdt);
    if(gst_percent==0 && gst_charged==0){
      printf("You have been charged with the rite percentage of GST");
      percent_check=0;
      goto END;
    }
    else{
      percent_check=1;
    }
    gst_percent=product_five(pdt);
    if(gst_percent==5 && gst_charged==5){
      printf("You have been charged with the rite percentage of GST");
      percent_check=0;
      goto END;
    }
    else{
      percent_check=1;
    }
    gst_percent=product_twelve(pdt);
    if(gst_percent==12 && gst_charged==12){
      printf("You have been charged with the rite percentage of GST");
      percent_check=0;
      goto END;
    }
    else{
      percent_check=1;
    }
    gst_percent=product_eighteen(pdt);
    if(gst_percent==18 && gst_charged==18){
      printf("You have been charged with the rite percentage of GST");
      percent_check=0;
      goto END;
    }
    else{
      percent_check=1;
    }
    gst_percent=product_twentyeight(pdt);
    if(gst_percent==28 && gst_charged==28){
      printf("You have been charged with the rite percentage of GST");
      percent_check=0;
      goto END;
    } 
    else{
      percent_check=1;
    }
    if(percent_check==1){
      printf("You have been charged inccorect GST");
    }
  END:scanf("%c",&dum_key_1);
  printf("\n Press a key to go to main menu");
    scanf("%c",&dum_key);
    goto NEW;
  }
  
  if(option==3){
    system("@cls||clear");
    printf("Enter the license number of the shop:");
    scanf("%s",lic);
    license_check=license_cal(lic);
    if(license_check==0){
      printf("The GST license number is perfect ");
    }
    else{
      printf("You have entered a wrong GST license number");
    }
    scanf("%c",&dum_key_1);
    printf("\n Press a key to go to main menu");
    scanf("%c",&dum_key);
    goto NEW;
  }
  
  if(option==4)
  system("@cls||clear");

  return 0;
}
