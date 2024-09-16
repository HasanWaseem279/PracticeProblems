#include<stdio.h>
int main() {
	int marks;
	
	printf("Enter Marks : ");
	scanf("%d", & marks);
	
	if(marks < 60) {
		printf("Grade F");
	}
	else if(marks >= 60 && marks < 70) {
		printf("Grade : D");
	}
	else if(marks >= 70 && marks < 80) {
		printf("Grade : C");
	}
	else if(marks >= 80 && marks < 90) {
		printf("Grade : B");
	}
	else if(marks >= 90) {
		printf("Grade : A");
	}
}