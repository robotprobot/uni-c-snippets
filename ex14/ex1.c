#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

float response(float t)
{
	float vs=10.0;
	float cr=100e-6;
		
	float vc=vs*exp(-t/cr);
	printf("Capacitor resistor circuits transient response at %f seconds is %f\r\n",t,vc);
}

void main()
{
	float t;
	float cr=100e-6;
	for (t=0;t<5*cr;t+=10e-6)
	{
		response(t);
	}
}
