#include<iostream>
#include<stdio.h>
using namespace std;

void displayArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++)
		printf("%10d",arr[i]);
	cout<<endl;
}

int main(){
	
	int size;
	int i;
	int k;
	printf("Enter size of array\n");
	scanf("%d",&size);
	int arr[size];
	srand(time(0));
	for(i=0;i<size;i++)
		arr[i]=rand()%1000;
	displayArray(arr,size);
	printf("enter the value of k\n");
	printf("program will print kth largest and kth smallest element from array\n");
	scanf("%d",&k);
	sort(arr,arr+size);
	displayArray(arr,size);
	if(k<size){
		printf("%5d th smallest element from array %10d\n",k,arr[k-1]);
		printf("%5d th largest  element from array %10d\n",k,arr[size-k]);
	}
	else
		printf("K cannt be greater than size of array");
	return 0;
}
