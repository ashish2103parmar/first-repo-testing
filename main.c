/*
   simple calc
 */

#include <stdio.h>
#include "header.h"

int main()
{

	float a, b, c;

	while (1)
	{
		printf("\nEnter the values for  A and B\n");
		scanf("%d %d", &a, &b);

		printf("\nChoose the operation : \n\t1. ADD\n\t2. SUB \n\t3. MUL \n\t4. DIV\n\t5. exit\n\n");
		scanf("%d", &choice);

		while (1)
			switch(choice)
			{
				case 1 :
					{
						c = add(a, b);

					}
					break;

				case 2 :
					{
						c = sub(a, b);

					}
					break;

				case 3 :
					{
						c = mul(a, b);

					}
					break;

				case 4 :
					{
						c = div(a, b);

					}
					break;

				case 5 :
					{
						exit(1);
					}
					break;

				default :
					{
						printf("\nInvvalid option entered\n");
					}
			}
	}
}
