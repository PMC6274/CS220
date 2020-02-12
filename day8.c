#include <stdio.h>

int main() {
	
	short int x = 0xFFFF; // -1
	
	int y = 0xFFFF; // 2^16 -1
	
	int z = 0xFFFFFFF;
	
	int a = 1000000000;
	int b = 2000000000;
	int c = a + b;
printf("%d\n", c); // positive + positive = negative (over flow)
	               //   -  +   -  =   +  over flow
	               
	               
	               
	// 67 -23
	int d = 67 + (~23 + 1);
	printf("%d\n", d);
	int e = 54;
	int f = ~54;
	printf("%d\n", e);
	printf("%d\n", f);
	// print the location of variable d
	// & - address of 
	printf("%x\n", &d);
	return 0;
	}
	
	
	
	
	
	
	
	
	
