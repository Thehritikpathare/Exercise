#include<stdio.h>  
  //Calculating total salary based on basic.
  // If basic <=5000 
  //da, ta and hra will be 10%,20% and 25% respectively.  
int main()  
{  
    float ta,bs, ts, da, hra;  
  
    printf("Enter basic salary\n");  
    scanf("%f", &bs);  
  
    if( bs < 5000 )  
    {  
        hra = bs * 25 / 100;  
        ta  = bs * 20 / 100;
        da  = bs * 10 / 100;  
    }  
    else  
    {  
        hra = 600;  
        da  = ta * 95 / 100;  
    }  
  
    ts = bs+ ta + da + hra;  
  
    printf("Total Salary is Rs %f\n", ts);  
  
    return 0;  
}