//#include<stdio.h>
int main()
{
	int n1,n2;
	char ch;
	printf("Enter 1st no:\n");
	scanf("%d",&n1);
	printf("Enter operator of your choice \n");
	printf("Operator you want +,-,*,/,% \n");
	scanf("%s",&ch);
	printf("Enter 2st no:\n");
	scanf("%d",&n2);
	
	if(ch=='+')
	{ printf("Sum  %d, %d is =%d",n1+n2);
	}
	else if(ch=='-')
	{ printf("Subtraction %d, %d is  =%d",n1,n2,n1-n2);
	}
	else if(ch=='*')
	{printf("Multiplication %d, %d is  =%d",n1,n2,n1*n2);
	}
	else if(ch=='/')
	{printf("Division %d, %d is  =%d",n1,n2,n1/n2);
	}
	else if(ch=='%')
	{printf("Remainder  %d, %d is  =%d",n1,n2,n1%n2);
	}
	else
	{ printf("Invalid operator");
	}

	return 0;
}
