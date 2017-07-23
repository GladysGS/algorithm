#include <stdio.h>

void QuickSort(int a[], int low, int high)
{
	if (high - low > 1) {
		int i = low + 1;
		int j = high - 1;
		int t;
		while (i <= j){
			for (; i < high && a[i] < a[low]; i++);    //ʹiͣ�ڱ�a[low]���ȵĵط� 
			for (; j > low && a[j] >= a[low]; j--);    //ʹ jͣ�ڱ�a[low]С�ĵط�
			//���ȫΪһ�����Ļ������ں��ڻ�Ƚ�low��j�Ĵ�С�������Ƿ���Ҫ���������ʹj������ǰ�ܣ����ٲ���Ҫ�Ľ��� 
			if (i < j) {    //����whileѭ��i,j��ֵ�ǻ��ģ�����ڽ���ʱ�����ٱȽ�һ��i,j�Ĵ�С 
				t = a[i];
				a[i] = a[j];
				a[j] = t;	
			}
		}
		if (j > low) {    //���j<=low,֤��j�Ѿ��ܵ�low���ˣ����轻�� 
			t = a[low];
			a[low] = a[j];
			a[j] = t;
		}
		
		//�����������ú���ʱ�����ֻʣһ��Ԫ�أ�����Ƚϣ��������ٵ��ú������Ƚϣ� 
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
