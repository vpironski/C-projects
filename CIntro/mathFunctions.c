#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	
	double a = sqrt(9);
	double b = pow(2,4);	
	
	int c = round(3.45);
	int d = ceil(3.45);
	int e = floor(3.99);

	double f = abs(-100);
	double g = log(3);

	double h = sin(45);
	double i = cos(45);
	double j = tan(45);

	printf("%f\n",a);
	printf("%f\n",b);

	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);

	printf("%f\n",f);
	printf("%f\n",g);
	printf("%f\n",h);
	printf("%f\n",i);
	printf("%f\n",j);


	return 0;
}
