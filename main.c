#include<stdio.h>
int main () {
    do {
       int i,number,fact=1;
    printf("Enter the Number - :\n");
    scanf("%d",&number);
    for(i=1; i <= number; i++){
        fact=fact*i;
    } 
    
    printf("Factorial of %d is: %d\n ",number,fact);
  }while(1==1);
  
    return 0;
}