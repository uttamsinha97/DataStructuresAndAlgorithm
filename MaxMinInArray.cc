/*
Maximum and minimum of an array using minimum number of comparisons
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void displayArray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%10d",arr[i]);
	printf("\n");
}

int main(){
	int size;
	int i;
	printf("Enter size of array ");
	scanf("%d",&size);
	int arr[size];
	srand(time(0));
	for(i=0;i<size;i++)
		arr[i]=rand()%100;
	displayArray(arr,size);
	sort(arr,arr+size);
	//cout<<"Sorted Array"<<endl;displayArray(arr,size);	cout<<endl;
	printf("Maximum/ Largest element of array %10d \n",arr[size-1]);
	printf("Minimum/Smallest element of array %10d \n",arr[0]);
	return 0;
}


