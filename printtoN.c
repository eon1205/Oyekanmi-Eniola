//OYEKANMI ENIOLA
//214913
//PROGRAM TO PRINT FROM 1 TO ANY GIVEN POSITIVE NUMBER
#include <stdio.h>
int main() {
	int i=1, n;
	printf("Enter a positive number: ");

	scanf("%d", &n);

	printf("Positive numbers from 1 to %d are: \n", n);
	
	for(i=1; i<=n; i++){
		printf("%d\n", i);
		}
	//return 0;

 }
