#include <stdio.h>
void less_than_ten(int iteration);
int main(void) {
	int max;
	int min = 1;
	printf("This will count each ordinal number up to the maximum.\n\n");
	printf("What's the maximum? ");
	scanf("%i",  max);
	printf("You gave me the maximum %i\n\n", max);
 max += 1;

	int iteration;
	unsigned int number max - min];	
	
	int interval = 1; 
  for (int w = min; w < max; w++)
	{
		iteration = max -  max - interval);
		number[iteration] = w;
		interval++;
	} 
	interval = 1;
	for (int i = min; i < max; i++)
	{
		iteration = max -  max - interval);
		int n = number[iteration] % 100;
		int T;
		if (n == 11 || n == 12 || n == 13){
			less_than_ten(iteration);
		} else {
			T = n % 10;
			less_than_ten(iteration);
		}
		
		interval++;
	} 
	return 0;
}

void less_than_ten(int iteration){

	switch(iteration){
		case 0:
			printf("%ith \n", iteration);
		break;

		case 1:
			printf("%ist \n", iteration);
		break;
		
		case 2:
			printf("%ind \n", iteration);
		break;
		
		case 3:
			printf("%ird \n", iteration);
		break;
		
		case 4:
			printf("%ith \n", iteration);
		break;

		case 5:
			printf("%ith \n", iteration);
		break;

		case 6:
			printf("%ith \n", iteration);
		break;
		
		case 7:
			printf("%ith \n", iteration);
		break;
		
		case 8:
			printf("%ith \n", iteration);
		break;

		case 9:
			printf("%ith \n", iteration);
		break;

		case 10:
			printf("%ith \n", iteration);
		break;

		case 11:
			printf("%ith \n", iteration);
		break;

		case 12:
			printf("%ith \n", iteration);
		break;

		case 13:
			printf("%ith \n", iteration);
		break;
		
		default:
			printf("oops\n");
		break;
	}
}