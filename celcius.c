#include "stdio.h"
/*STATED INTENTION print celcius/farenheit table 
from 1 to 300 stepping 10. 
FUNCTION table celsius = 5 * (fahr-32) / 9;*/
int main()
{
printf("Celcius\tFahrenheit\n");

/*DECLARE VARIABLE TYPES, NAMES*/	
	float celcius;
	int fahrenheit;
	int upper;
	int lower;
	int step;
/*DEFINE FIXED*/
	upper = 300;
	lower = 0;
	step = 10;
/*FIX STARTING POINT, LINK CHANGING VARIABLE WITH FIXED*/
	fahrenheit = lower;
	while (fahrenheit <= 300) 
		{
			celcius = ((5.0/9.0)*(fahrenheit-32));
			printf("%4.2fc\t%dF\n", celcius, fahrenheit);
			fahrenheit+=step; /*fahrenheit = fahrenheit + step*/
		}
}

