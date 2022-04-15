#include<stdio.h>

int main()
{
	double Pi=0;
	double total=0;

	
	for(double a=1;a<1000;a++)
	{
		double denominator=a*2-1;
		double temp1=1/(2*denominator-1);
		double temp2=1/(2*denominator+1);
		total=total+temp1-temp2;
		
	}
	
	Pi=4*total;
	printf(".15lf%",Pi);
}
