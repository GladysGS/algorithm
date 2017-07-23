#include <stdio.h>

void QuickSort(int a[], int low, int high)
{
	if (high - low > 1) {
		int i = low + 1;
		int j = high - 1;
		int t;
		while (i <= j){
			for (; i < high && a[i] < a[low]; i++);    //使i停在比a[low]大或等的地方 
			for (; j > low && a[j] >= a[low]; j--);    //使 j停在比a[low]小的地方
			//如果全为一个数的话，由于后期会比较low和j的大小来决定是否需要交换，因此使j尽量往前跑，减少不必要的交换 
			if (i < j) {    //进了while循环i,j的值是会变的，因此在交换时还得再比较一下i,j的大小 
				t = a[i];
				a[i] = a[j];
				a[j] = t;	
			}
		}
		if (j > low) {    //如果j<=low,证明j已经跑到low上了，无需交换 
			t = a[low];
			a[low] = a[j];
			a[j] = t;
		}
		
		//以下两个调用函数时，如果只剩一个元素，无需比较（即无需再调用函数作比较） 
		if (low != j){ 
			QuickSort (a, low, j);
		} 
		if (j+1 != high) {
			QuickSort (a, j+1, high);
		}
	}
}

int main(void){
	int a[10] = {4,1,53,7,56,87,5,3,4,5};
	int i;
	QuickSort(a, 0, 10);
	for (i=0; i<10; i++){
		printf("%5d", a[i]);
	}
	printf("\n");
}
