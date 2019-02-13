#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float a,b,c;
	int op;
	do
	{
		printf("******************************* \n");
		printf("#1 SUMA \n");
		printf("#2 RESTA \n");
		printf("#3 MULTIPLICACION \n");
		printf("#4 DIVISION \n");
	    printf("#5 RAIZ \n");
		printf("#6 SALIR \n");
		printf("******************************* \n");
		    
		do
		{
			printf("ingresa la opcion a relizar: ");
			scanf("%i",&op);
			printf("_____________________________ \n");
		}while (op < 1 || op > 6);
		
		switch (op)
		{
			//suma
			case 1:
				printf("ingresa el primer numero:\n ");
				scanf("%f", &a);
			
				printf("ingresa el segundo nuemro:\n ");
				scanf("%f", &b);
					
				c = a + b;
					
				printf("la suma es: %f \n",c);
					
				break;
			 //resta
			 case 2:
				printf("ingresa el primer numero:\n ");
				scanf("%f", &a);
			
				printf("ingresa el segundo nuemro: \n");
				scanf("%f", &b);
					
				c = a - b;
				
				printf("la resta es: %f \n",c);
					
				break;
			 //multiplicacion
			case 3:
				printf("ingresa el primer numero:\n ");
				scanf("%f", &a);
			
				printf("ingresa el segundo nuemro:\n ");
				scanf("%f", &b);
					
				c = a * b;
					
				printf("la multiplicacion es: %f \n",c);
						
				break;
			//división
			case 4:
				printf("ingresa el dividendo:\n ");
				scanf("%f", &a);
				
				do
				{
					printf("ingresa el divisor: \n");
					scanf("%f", &b);
				} while (b==0);
					    	
				c = a/b;
					
				printf("la division es: %f \n",c);
				break;
			//raiz
			case 5:
				do
				{
					printf("ingresa el numero para sacar raiz:\n ");
					scanf("%f", &a);
				}while (a<0);
				    
				c = sqrt(a);
					
				printf("la raiz es: %f \n",c);
		
		}
	}while ( op !=6);
	
	return 0;
}
