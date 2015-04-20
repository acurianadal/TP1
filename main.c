/*pasaje de °C a °F
 * ALan Kevin Curia Nadal
 * 20/04/2015
 */

#include <stdio.h>

main(void) {

	float celcius = 0;
	float farenheit;
	int inc = 20;
	int maxc = 300;

	while(celcius <=  maxc) {
		farenheit = (9.00)/(5.00) * celcius + 32.00;
		printf("%7.2f\t%7.2f\n", celcius, farenheit);
		celcius= celcius + inc;
	}

}
