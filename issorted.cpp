#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[],int size){
	
	//base case
	if(size==0 || size==1){
		return true;
	}
	
	//processsing part
	
	if(arr[0]>arr[1]){
		return false;
	}
	
	//recursive relation
	
	return issorted(arr+1,size-1);
}
int main(){
	int arr[5]={3,1,2,4,5};
	int size=5;
	
	bool answer=issorted(arr,size);
	if(answer){
		cout<<"Sorted hai array"<<endl;
	}
	else{
		cout<<"Sorted nahi hai"<<endl;
	}
	return 0;
}
