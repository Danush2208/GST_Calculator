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
  char pdt[20],lic[20];
  int option,gst_percent,gst_charged,license_check;
  system("CLS");
  printf("\n\t\t\t\t 1.DISPLAY YOUR PRODUCT'S GST");
  printf("\n\t\t\t\t 2.CHCK GST OF YOUR PRODUCT");
  printf("\n\t\t\t\t 3.GST LISCENCE CHECKER");
  printf("\n\t\t\t\t 4.EXIT");
  printf("\n\n\n\t\t CHOOSE ANYONE OPTION(1-4):");
  
  scanf("%d",&option);
  if(option==1){
    system("CLS");
    printf("Enter the product you want to know the GST for:");
    scanf("%s",pdt);
    gst_percent=product_zero(pdt);
    if(gst_percent==0){
      printf("%d percentage",gst_percent);
    }
    gst_percent=product_five(pdt);
    if(gst_percent==5){
      printf("%d percentage",gst_percent);
    }
    gst_percent=product_twelve(pdt);
    if(gst_percent==12){
      printf("%d percentage",gst_percent);
    }
    gst_percent=product_eighteen(pdt);
    if(gst_percent==18){
      printf("%d percentage",gst_percent);
    }
    gst_percent=product_twentyeight(pdt);
    if(gst_percent==28){
      printf("%d percentage",gst_percent);
    }
  }
  if(option==2){
    system("CLS");
    printf("Enter the product you want to know the GST for:");
    scanf("%s",pdt);
    printf("Enter the GST charged for your product:");
    scanf("%d",&gst_charged);
    gst_percent=product_zero(pdt);
    if(gst_percent==0 && gst_charged==0){
      printf("You have been charged with the rite percentage of GST");
    }
    gst_percent=product_five(pdt);
    if(gst_percent==5 && gst_charged==5){
      printf("You have been charged with the rite percentage of GST");
    }
    gst_percent=product_twelve(pdt);
    if(gst_percent==12 && gst_charged==12){
      printf("You have been charged with the rite percentage of GST");
    }
    gst_percent=product_eighteen(pdt);
    if(gst_percent==18 && gst_charged==18){
      printf("You have been charged with the rite percentage of GST");
    }
    gst_percent=product_twentyeight(pdt);
    if(gst_percent==28 && gst_charged==28){
      printf("You have been charged with the rite percentage of GST");
    }
    printf("You have been chagred inncorrect GST"); 
  }
  if(option==3){
    system("CLS");
    printf("Enter the license number of the shop:");
    scanf("%s",lic);
    license_check=license_cal(lic);
    if(license_check==0){
      printf("The GST number is perfect ");
    }
  }
  system("CLS");
  return 0;
}