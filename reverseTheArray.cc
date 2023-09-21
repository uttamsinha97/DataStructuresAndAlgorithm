#include<iostream>
#include<stdio.h>
using namespace std;

void displayArray(int array[],int size){
	int i;
	for(i=1;i<=size;i++)
		printf("%10d",array[i]);
	printf("\n");
}

void reverseArray(int array[],int size){
	int tempArray[size];
	int j=1;
	int i;
	int k;
	for(i=size;i>0;i--){
		tempArray[j]=array[i];
		j++;
	}
	displayArray(tempArray,size);
}

int main(){
	int size;
	int i;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	printf("please enter an array of size %d for reversing\n",size);
	int array[size];
	for(i=1;i<=size;i++)
		scanf("%d",&array[i]);
	cout<<"Entered Array"<<endl;
	displayArray(array,size);
	reverseArray(array,size);
	return 0;

}
