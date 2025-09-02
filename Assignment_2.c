#include<stdio.h>
#include<math.h>
int main(void){
	double a,b,c,D,q,o;
	printf("Input a no.:");
	scanf("%lf", &o);
	printf("These are some values related to %lf:\ncos(%lf):%lf\n sin(%lf):%lf\n log(%lf):%lf\n sqrt(%lf):%lf\n %.2lf raised to 4:%lf\n",o,o,cos(o),o,sin(o),o,log(o),o,sqrt(o),o,pow(o,4));
	printf("Enter value of a , b and c with signs:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	D=b*b-4*a*c;
	q=sqrt(D); // you can also use q = pow(D,1.0/2) or pow(D,0.5)
	if(D>=0){
		printf("Your roots are:%lf and %lf", (-b-q)/2*a, (-b+q)/2*a);
	}
	else{
		printf("D is negative, roots are imaginary\n");
	}
	printf("\tLet's use assignment operators\n Enter a no.:");
	double x;
	scanf("%lf", &x);
	x += 6;
	printf("This is your no. + 6: %lf \n",x); //  This adds 6 to x
	x-= 5;
	printf("This is your no. +6 - 5: %lf\n",x); // This takes the previous value of x, i.e x + 6
	x *= 7;
	printf("This is (your no. + 6 - 5)*7: %lf\n",x); // This take sthe previous value of x,i.e x + 6 -5
	x /= 10;
	printf("This is (your no. + 6 - 5)*7/10: %lf\n",x); // This takes the previous value of x,i.e (x + 6 - 5)*7
	int w=23;
	w %= 4;
	printf("This is remainder 23/4: %d\n",w); // This gives the remainder
	printf(" Size of int is: %zu bytes\n Size of float is: %zu bytes \n Size of double is: %zu bytes\n Size of long int: %zu bytes\n Size of char: %zu bytes \n", sizeof(int),sizeof(float),sizeof(double),sizeof(long int),sizeof(char));
	int a1 = 78;
	float a2 = 90;
	printf("This is 78/90:%lf",(double)a1/a2);
	return 0;
}		
