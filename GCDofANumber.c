//Calculation of Greatest Common Divisor
#include<stdio.h>
int main()
{
	int a,b,GCD;
	printf("Enter first Number: ");
	scanf("%d",&a);
	printf("Enter second Number: ");
	scanf("%d",&b);
	GCD=GCDCal(a,b);
	printf("Greatest Common Divisor of %d and %d is %d",a,b,GCD);
}
int GCDCal(int a,int b)
{
	// case 1: when both number of same  
	if(a==b)
	return a;     //  or return b;
	//case 2: when a is greater than b and multiple of a also
	if(a%b==0)
	return b;
	//case 3: when a is smaller than b and multiple of b also
	if(b%a==0)
	return a;
	//case 3: when a is smaller than b and not multiple of a also
	if(a>b)
	return (GCDCal(a%b,b));
	else
	return (GCDCal(a,b%a));
}
