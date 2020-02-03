#include <stdio.h>
#include <math.h>


int x = 0;
int y = 0;

int sum_of_multiples_of_three(int n){
	
	n = n - 1;
	
	if (n >= 3){
	if(n % 3 == 0) {
		x = x + n;
		sum_of_multiples_of_three(n);
		}
		else
		{
		sum_of_multiples_of_three(n);
			}
			
	} else{
		
		return x;
		
		}
	

	}

int sum_of_multiples_of_five(int n){
	
	n = n - 1;
	
	if (n >= 5){
	if(n % 5 == 0) {
		y = y + n;
		sum_of_multiples_of_five(n);
		}
		else
		{
		sum_of_multiples_of_five(n);
			}
			
	} else{
		
		return y;
		
		}
	

	}








int main(){
	
	printf("Enter a non-negative integer: ");
	int n;
	scanf("%d", &n);
	int a;
	int b;
	int c;
	a = sum_of_multiples_of_three(n);
	b = sum_of_multiples_of_five(n);
	c= a + b;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("Sum of multiples of 3 0r 5 that are less than n is: %d", c);
	printf("\n");

	
	
	
	
	
	}
