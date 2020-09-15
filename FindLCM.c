// C program to find LCM of two numbers 
#include <stdio.h> 

// Recursive function to return gcd of a and b 
int gcd(int n1, int n2) 
{ 
	if (n1 == 0) 
		return n2; 
	return gcd(n2 % n1, n1); 
} 

// Function to return LCM of two numbers 
int lcm(int n1, int n2) 
{ 
	return (n1*n2)/gcd(n1, n2); 
} 

// Driver program to test above function 
int main() 
{   
    int n1,n2;
	printf("Enter two number: ");
    scanf("%d %d",&n1,&n2);
	printf("LCM of %d and %d is %d ", n1, n2, lcm(n1, n2)); 
	return 0; 
} 

