/*
   simple calc
 */

/* Header files */
#include <stdio.h>
#include <stdlib.h>
#include <header.h>

/* Main function */
int main()
{
	/* Declarations */
	float a, b, c;
	int choice;
	char ch;

	while (1)
	{
		/* Display and read the option */
		printf("\nChoose the operation : \n\t1. ADD\n\t2. SUB \n\t3. MUL \n\t4. DIV\n\t5. exit\n\n");
		scanf("%d", &choice);

		if (choice == 5)
			return 0;

		/* Read a values of a and b */
		printf("\nEnter the values for A and B\n");
		scanf("%f %f", &a, &b);

		/* Choose the case */
		switch(choice)
		{
			/* Addition */
			case 1 :
				
				c = add(a, b);
				printf("The result is %f\n", c);
				break;

			/* Subtraction */
			case 2 :
				
				c = sub(a, b);
				printf("The result is %f\n", c);
				break;

			/* Multiplication */
			case 3 :
				
				c = mul(a, b);
				printf("The result is %f\n", c);
				break;

			/* Division */
			case 4 :
				
				c = divi(a, b);
				printf("The result is %f\n", c);
				break;

			/* Exit */
			case 5 :
				
				return 0;

			/* Error handling */
			default :
					printf("\nInvvalid option entered\n");
		}

	}

	return 0;
}
