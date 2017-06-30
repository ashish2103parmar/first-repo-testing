/*
   simple calc
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	float a, b, c;
	int choice;
	char ch;

	do
	{
		printf("\nChoose the operation : \n\t1. ADD\n\t2. SUB \n\t3. MUL \n\t4. DIV\n\t5. exit\n\n");
		scanf("%d", &choice);

		printf("\nEnter the values for A and B\n");
		scanf("%f %f", &a, &b);

		switch(choice)
		{
			case 1 :
				
				c = add(a, b);
				printf("The result is %f\n", c);
				break;

			case 2 :
				
				c = sub(a, b);
				printf("The result is %f\n", c);
				break;

			case 3 :
				
				c = mul(a, b);
				printf("The result is %f\n", c);
				break;

			case 4 :
				
				c = divi(a, b);
				printf("The result is %f\n", c);
				break;

			case 5 :
				
				exit(1);

			default :
					printf("\nInvvalid option entered\n");
		}

		printf("Do you want to continue(y/Y)...");
		scanf("\n%c", &ch);
	
	}while (ch == 'y' || ch == 'Y');
}
