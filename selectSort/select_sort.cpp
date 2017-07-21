#include <stdio.h>

int main(void)
{
	int a[10] = {56,5,32,21,45,33,21,45,7,87};
	int i,j,t,minindex;
	
	for (i = 0 ; i < 9 ; i++) {
		minindex = i;
		
		for (j = i+1 ; j < 10 ; j++) {
			if (a[j] < a[minindex]) {
				minindex = j;
			}
		}
		t = a[i];
		a[i] = a[minindex];
		a[minindex] = t;
	}
	printf ("output arr:");
	for (i = 0 ; i < 10 ; i++) {
		printf("%5d", a[i]);
	}	
} 
