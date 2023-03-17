#include <stdio.h>

double funcA( double coefx, double coefy);
double funcB( double coefx);
double funcC( double coefz);
double funcD( double coefy);
void instruct(void);

int main(void)
{
	double x, y, z;
	double result;

	printf("\nEnter ' x ' value -> ");
	scanf("%lf",  &x );
	printf("\nEnter ' y ' value -> ");
	scanf("%lf", &y );
	printf("\nEnter ' z ' value -> ");
	scanf("%lf", &z );

	result = funcA(x,y) + funcB(x) + funcC(z) + funcD (y);

	printf("\n\nThis equation is equal to %.2f\n\n",  result);
	
	return 0 ;
}

double funcA( double coefx, double coefy)
{
	return (5 * coefx * coefy);

}

double funcB( double coefx)
{
	return (-2 * coefx * coefx);
}

double funcC( double coefz)
{
	return (4 * coefz * coefz);
}

double funcD( double coefy)
{
	return (3 * coefy * coefy * coefy);
}