#include<stdio.h>
//Temprature find Celsius from Fahrenheit
int main()
{

    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f C and %.2f F ", celsius, fahrenheit);
    
	return 0;
}
