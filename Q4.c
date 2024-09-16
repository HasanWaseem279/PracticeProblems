#include<stdio.h>
int main() {
	int income, tax;
	float netincome;
	
	printf("Enter income : ");
	scanf("%ld", &income);
	
	if(income>= 250001 && income < 500000){
		tax = 5;
		netincome = income - (income*0.05);
	}
	else if(income>= 500001 && income < 1000000){
		tax = 20;
		netincome = income - (income*0.2);
	}
	else if(income>= 1000000){
		tax = 30;
		netincome = income - (income*0.3);
	}
    else {
    	printf("No Tax");
	}	
	printf("Total Income : %ld\n", income);
	printf("Tax Deducted : %ld\n", tax);
	printf("Net Income : %.2f\n", netincome);
	return 0;
}