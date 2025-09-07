#include <stdio.h>
#include <math.h>

int main(void){
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
		printf("%d is divisible by 2 & positive.",b1);
	}
	else if (b2==0 && b1<0){
		printf("%d is divisible by 2 & negative.",b1);
	}
	else if (b2!=0 && b1>0){
		printf("%d is not divisible by 2 & positive.",b1);
	}
	else {
		printf("%d is neither divisible by 2 nor positive.",b1);
	}
	// Do it with ternary.
	// Question no. 
	return 0;
}
