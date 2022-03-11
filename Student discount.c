/*Accept the price from user. 
Ask the user if he is a student (user may say yes or no).
If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%. 
But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount*/
#include<stdio.h>
int main()

{

float amount, discount, amountToBePaid;
int c = 0;
while (c!=2){
printf("You are Student or Not\n");

printf("\n1. Yes\n2. No\n");

scanf("%d",&c);
switch(c)
{
	case 1:
	
		printf("Your Shopping amount : ");
		scanf("%f",&amount);
		if(amount>500)
		{
			discount=(amount*20)/100;
			amountToBePaid= amount - discount;
			printf("Your payable amount : %0.2f",amountToBePaid);
			
		}
		break;
		
	case 2:
		
		printf("Your Shopping amount : ");
		scanf("%f",&amount);
		if( amount>500 && amount<=600 )
		{
			discount=(amount*10)/100;
			amountToBePaid= amount - discount;
			printf("Your payable amount : %0.2f",amountToBePaid);
			
		}
		else if(amount > 600)
		{
			
			discount=(amount*15)/100;
			amountToBePaid= amount - discount;
			printf("Your payable amount : %0.2f",amountToBePaid);
			
		}
		
		break;



}
return;
}}
