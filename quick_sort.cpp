#include <iostream>
#include <ctime>
#include <cstdlib>

void quick_sort(int arr[], int left, int right){
	if(left>=right){
		return;
	}
	int i = left;
	int j = right;
	int pivot = arr[i];
	while(i<j){
		while(i<j && arr[j]>=pivot)j--;
		if(i<j) arr[i++] = arr[j];
		while(i<j && arr[i]<=pivot)i++;
		if(i<j) arr[j--] = arr[i];
	}
	arr[i] = pivot;
	quick_sort(arr,left,i-1);
	quick_sort(arr,j+1,right);
}


void test_randrom_sorting(){
	constexpr int CNT = 1024;
	srand((unsigned)time(nullptr));
	int arr[CNT];
	std::cout<<"Before sorting:\n";
	for(int i=0;i<CNT;i++){
		arr[i] = rand()%1024;
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"\nSorted array:\n";
	quick_sort(arr,0,CNT-1);
	for(int i=0;i<CNT;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"\n";
}

int main(){
	test_randrom_sorting();
	return 0;
}
