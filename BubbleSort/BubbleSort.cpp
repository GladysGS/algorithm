// 冒泡排序
#include <stdio.h>

void BubbleSort (int a[], int n);

int main (void)
{
	int a[10] = {3,45,23,89,6,67,44,23,90,11};
	int i;
	BubbleSort (a, 10);
	for (i = 0; i < 10; i++) {
		printf ("%5d", a[i]);
	}
}

// j正着跑
/* 
void BubbleSort (int a[], int n)
{
	int i, j, t;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;	
			}
		}
	}
}
*/
 
// j倒着跑

void BubbleSort (int a[], int n)
{
	int i, j, t;
	for (i = 0; i < n; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j] < a[j-1]) {
				t =  a[j];
				a[j] = a[j-1];
				a[j-1] = t;
			}
		}
	}
} 

// 加flag
/*
void BubbleSort (int a[], int n) 
{
	int i, j, t, flag;
	flag = 1;
	for (i = 0; i < n && flag; i++) {
		flag = 0;
		for (j = n-1; j >= i; j--) {
			if (a[j] < a[j-1]) {
				t =  a[j];
				a[j] = a[j-1];
				a[j-1] = t;
				flag = 1;
			}
		}
	}
}
*/

// 加flag 方法二
//void BubbleSort (int a[], int n) 
//{
//	int i, j, t, flag, index, index_1;
//	flag = 1;
//	index = n-1;
//	index_1 = 0;
//	for (i = 0; i <= index && flag; i++) {
//		flag = 0;
//		for (j = n-1; j > i; j--) {
//			if (a[j] < a[j-1]) {
//				t =  a[j];
//				a[j] = a[j-1];
//				a[j-1] = t;
//				flag = 1;
//				index_1 = j;
//			}
//		}
//		
//		index = index_1;
//	}
//}
