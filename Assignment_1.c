#include <stdio.h>
#include <math.h>

#define PI 3.141 // Here, I declared that PI is 3.141 throught the program.

int main(void)
{
	printf("Hello World\n");
	int a;
	a = 22;
	float b = 5.25;
	char c = 'L';
	printf("This is a variable %d\nThis a decimal no. %f\nThis is a character value %c \n", a, b, c);
	printf("Enter numerator: ");
	float num,deno;
	scanf("%f",&num);
	printf("Enter Denominator: ");
	scanf("%f", &deno);
	printf("You entered %.2f / %.2f \n",num,deno); 
	/* Here %.f say that display float value till 0 decimal places, 
	Similarly, %.1f , %.2f , %.3f say that display float value till 1,2 or 3 decimal places. */
	printf("But the result is:%.2f \n",num/deno);
	printf("Enter two no.s: ");
	float d , e;
	scanf("%f",&d);
	scanf("%f",&e);
	printf(" Sum:%.3f\n Difference:%.3f\n Product:%.3f\n Division:%.3f \n",d+e,d-e,d*e,d/e);
	printf("This is the remainder when d/e, Modulus : %d \n", (int)d%(int)e); // This is trick question - Why didn't you use %f in this line?? I know you can you use both %lf and %d.
	printf("Lets calculate  n th roots \n");
	double n1, nthroot, exponent;
	int n2;
	printf("Enter the no.: ");
	scanf("%lf",&n1);
	printf("Enter the value of n: ");
	scanf("%d",&n2); // n needs to be an integer so in order to prevent any crashes or garbage values, I used int datatype for it
	exponent = pow(n1,n2);
	printf("Result: %.3lf \n",exponent);
	printf("Hehe, the output wasn't the root but the exponent right? Let's fix it \n");	
	nthroot = pow(n1,1/n2);
	printf("Result: %.3lf \n Still not right? \n", nthroot);
	// Here I used '1' in the pow, which made the compiler consider only the integer part of 1/n. But we want the actual decimal value.
	nthroot = pow(n1,1.0/n2);
	printf("Result: %.3lf \n Here you go!! \n",nthroot);
	double r = nthroot, area = PI*pow(r,2); // In area, I can also use area = PI*r*r.
	printf("This is the area of a circle with %dth root of %.2lf as radius: %.4lf \n",n2,n1,area);
	printf("Let's Calculate Simple Interest, Enter Principal:");
	double principal, rate , time;
	scanf("%lf", &principal);
	printf("Enter Rate in %%:");
	scanf("%lf", &rate);
	printf("Enter Time:");
	scanf("%lf", &time);
	printf("This is the simple interest:%.2lf \n", (principal*time*rate)/100);
	printf("Now let's do compound interest \n");
	double amount = principal*(pow((1.0 + rate/100),time)), CI = amount - principal;
	printf("This is the amount:%.2lf\n This is the compound interest: %.2lf\n",amount,CI);
	double salary;
	printf("Enter your Basic Salary:");
	scanf("%lf", &salary);
	printf("Your gross salary = Basic + da + ta, so your gross salary is: %lf", salary+0.12*salary+0.10*salary);
	/*In the above code you could also add da and ta in double, then da = (salary*12)/100 and ta = (salary*10)/100,
	  Then in the printf, you could write salary + da + ta.
	*/
	// With this assignment 1 is complete.  
	return 0;
}
