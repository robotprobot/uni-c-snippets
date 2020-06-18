#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

void main()
{
	float vs=10.0;
	float cr=100e-6;
	float t;
		
	printf("Please enter time: ");
	scanf("%f",&t);
		
	float vc=vs*exp(-t/cr);
	printf("Capacitor resistor circuits transient response at %f seconds is %f",t,vc);
}
