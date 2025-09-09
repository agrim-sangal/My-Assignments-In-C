#include <stdio.h>
#include <math.h>

int main(void){
	// Question 1
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	if (c>='A'&& c<='Z'){
		printf("You entered a capital letter\n");
	}
	else if (c>='a'&& c<='z'){
		printf("You entered a small letter\n");
	}
	else if (c<='9'&& c>='0'){
		printf("You entered a digit\n");
	}
	else {
		printf("You entered a special character\n");
	}
	// Question no. 2
	int a1 , a2, a3;
	printf("Enter three integers:");
	scanf("%d%d%d", &a1, &a2, &a3);
	if (a1>a2 && a1>a3){
		printf("%d is the greatest of them all\n",a1);
	}
	else if (a2>a1 && a2>a3){
		printf("%d is the greatest of them all\n",a2);	
	}
	else { 
		printf("%d is the greatest\n",a3);
	}
	// Do it with ternary operator.
	// Question no. 5
	int b1, b2;
	printf("Enter an integer:");
	scanf("%d", &b1);
	b2 = b1%2;
	if (b2==0 && b1>0){
		printf("%d is divisible by 2 & positive.\n",b1);
	}
	else if (b1%2 == 0 && b1<0){
		printf("%d is divisible by 2 & negative.\n",b1);
	}
	else if (b2!=0 && b1>0){
		printf("%d is not divisible by 2 & positive.\n",b1);
	}
	else {
		printf("%d is neither divisible by 2 nor positive.\n",b1);
	}
	printf("%d is %s\n",b1,(b1%2==0)?"even":"odd");
	printf("%d is %s\n",b1,(b1>0)?"positive":"negative");
	// Question no. 3
	char op;
	printf("Enter an operation (+,-,*,/,%%):");
	scanf(" %c",&op);
	double c1,c2,r;
	printf("Enter two no.s:");
	scanf("%lf%lf",&c1,&c2);
	switch (op){
		case '+': 
		r = c1 + c2;
		printf("%.2lf",r);
		break;
		case '-': 
		r = c1 - c2;
		printf("%.2lf",r);
		break;
		case '*': 
		r = c1*c2;
		printf("%.2lf",r);
		break;
		case '/': 
		r = c1/c2;
		printf("%.2lf",r);
		break;
		case '%':
		r = (int)c1%(int)c2;
		printf("%.2lf",r);
		break;
		default: printf("Invalid Operator");
		break;
	}
	// Question 4
	int month;
	printf("Enter month no.:");
	scanf("%d",&month);
	switch (month){
	case 1: printf("January\n");
	break;
	case 2: printf("February\n");
	break;
	case 3: printf("March\n");
	break;
	case 4: printf("April\n");
	break;
	case 5: printf("May\n");
	break;
	case 6: printf("June\n");
	break;
	case 7: printf("July\n");
	break;
	case 8: printf("August\n");
	break;
	case 9: printf("September\n");
	break;
	case 10: printf("October\n");
	break;
	case 11: printf("November\n");
	break;
	case 12: printf("December\n");
	break;
	default: printf("Invalind month no.\n");
	}
	// Question 6
	int d;
	printf("Enter a no. for divisibility check\n");
	scanf("%d",&d);
	if (d%5==0 && d%8==0){
		printf("%d is divisble by both 5 & 8\n",d);
	}
	else if (d%5==0 && d%8!=0){
		printf("%d is divisble by 5\n",d);
	}
	else if (d%5!=0 && d%8==0){
		printf("%d is divisble by 8\n",d);
	}
	else printf("The no. is not divisible by both.\n");
	return 0;
}
