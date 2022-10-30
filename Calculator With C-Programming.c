	#include <stdio.h>
	
	int main(void) {
		
		float Num1,Num2;
		char Operator;
		int flag = 0;
		
		printf("Enter the first number you want: \n");
		scanf("%f",&Num1);
		
	while (flag == 0) {
			
		printf("Enter the operator you want: (+ , - , * , / ): \n");
		scanf("%s",&Operator);
		
		if(Operator != 'c') {
			printf("Enter the second number: ");
				scanf("%f", &Num2);
			
		}
	
		switch (Operator) {
			case '+':
				printf("%f + %f = %f \n", Num1, Num2, Num1 + Num2);
				Num1 = Num1 + Num2;
				break;
				
			case '-':
			    printf("%f - %f = %f \n", Num1, Num2, Num1 - Num2);
			    Num1 = Num1 - Num2;
				break;
				
			case '*':
			    printf("%f * %f = %f \n", Num1, Num2, Num1 * Num2);
			    Num1 = Num1 * Num2;
				break;
				
			case '/':
				if(Num2 == 0) {
					printf("Error \n");
				}
				else {
					printf("%f / %f = %f \n", Num1, Num2, Num1 / Num2);
					Num1 = Num1 / Num2;
				}
				
				break;
			
			case 'c':
			    printf("Clear: \n");
				printf("-----------------------------------------------------------\n");
				printf("Enter the first number: ");
				scanf("%f", &Num1);
				break;		
			
			default:
				printf("Invalid operator: \n");
				
				break;
			    
		}
		
			
	}
	return 0;
		
					
			
}

