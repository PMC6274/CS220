#include <stdio.h>

#define TRUE 1 // macro definition
#define FALSE 0

// Returns turn if n is prime, false otherwise
int isPrime(int n) {
	
	int i = 2;
	
	while (i < n/2){
		
		if (n % i == 0){
			
			return FALSE;
		}
		
		i++; // post increment operator
		
	}
	
	// if we get here, what is true?
	return TRUE;
	
}

int main() {
	
	printf("Enter a number: ");
	
	int n; // number the user enters
	
	// don't pass a copy of n but pass the location (address) of n.
	scanf("%d", &n);
	
	printf("The number %d is prime: %d\n",n, isPrime(n));
	
	
}
