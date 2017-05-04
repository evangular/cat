#include "stdio.h"
/*STATED INTENTION print celcius/farenheit table 
from 1 to 300 stepping 10. 
FUNCTION table celsius = 5 * (fahr-32) / 9;*/
float fahrenheitToCelcius(int fahrenheit);


int upper = 300, lower = 0, step = 10;

int main()
{
printf("Celcius\tFahrenheit\n");

/*DECLARE VARIABLE TYPES, NAMES*/	
	float celcius;
	int fahrenheit;
/*DEFINE FIXED*/

/*FIX STARTING POINT, LINK CHANGING VARIABLE WITH FIXED*/
	//fahrenheit = upper;
	for(fahrenheit=upper; fahrenheit>=0; fahrenheit-=step){
	//while (fahrenheit >= 0){
			celcius = fahrenheitToCelcius(fahrenheit);
			printf("%4.2fc\t%dF\n", celcius, fahrenheit);
	//		fahrenheit-=step; /*fahrenheit = fahrenheit + step*/
		}
}

float fahrenheitToCelcius(int fahrenheit)
{
	return ((5.0/9.0)*(fahrenheit-32));
}