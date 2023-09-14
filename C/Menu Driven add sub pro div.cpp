#include<stdio.h>

//for addition
add(){
	float n1,n2;
	printf("Enter the first number :");
	scanf("%f",&n1);
	printf("Enter the second number :");
	scanf("%f",&n2);
	printf("\n%.2f + %.2f = %.2f",n1,n2,n1+n2);
}
//for subtraction
subtract(){
	float n1,n2;
	printf("Enter the first number :");
	scanf("%f",&n1);
	printf("Enter the second number :");
	scanf("%f",&n2);
	printf("\n%.2f - %.2f = %.2f",n1,n2,n1-n2);
}
//for product
product(){
	float n1,n2;
	printf("Enter the first number :");
	scanf("%f",&n1);
	printf("Enter the second number :");
	scanf("%f",&n2);
	printf("\n%.2f X %.2f = %.2f",n1,n2,n1*n2);
}
//for division
division(){
	float n1,n2;
	printf("Enter the first number :");
	scanf("%f",&n1);
	printf("Enter the second number :");
	scanf("%f",&n2);
	printf("\n%.2f / %.2f = %.2f",n1,n2,n1/n2);
}

main(){
	int n;
	printf("\n1.Add \n2.Subtract \n3.Division \n4. Product ");
	printf("\nChoose anyone of the number");
	scanf("%d",&n);
	switch (n){
		case 1:
			add();
			break;
		case 2:
			subtract();
			break;
		case 3:
			division();
			break;
		case 4:
			product();
			break;
		default:
			printf("Wrong Entry !");

	}
}