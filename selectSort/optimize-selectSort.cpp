#include <stdio.h>

void optimizeSelectSort(int a[]);
void exchange(int *x, int *y); 

int main(void)
{
	int a[10] = {56,5,32,21,45,33,21,45,7,87};
	int i;
	optimizeSelectSort(a);
	
	for (i = 0; i < 10; i++) {
		printf ("%5d" , a[i]);
	}
} 

void optimizeSelectSort(int a[])
{
	int i,min,max,left,right;
	left = 0;
	right = 9;
	while (left <= right) {
		min = left;
		max = right;
		for (i = left; i <= right; i++){    //i不能从left+1开始，最初始的left也需要和max比较，很可能left就是最大 
			if (a[i] < a[min]) {
				min = i;
			} 
			if (a[i] > a[max]){
				max = i;
			}
		}
		exchange(&a[left],&a[min]);
		if (max == left) {             
			max = min;
		}
		exchange(&a[right],&a[max]);
		left++;
		right--;
	}
}
void exchange(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
} 
