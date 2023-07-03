#include<bits/stdc++.h>
using namespace std;
int getsum(int arr[],int n){
	
	//base case
	if(n==0) return 0;
	
	if(n==1) return arr[0];
	
	//recursive relation
	
	int remainingpart=getsum(arr+1,n-1);
	
	//processing
	
	int sum=arr[0]+remainingpart;
	return sum;
}
int main(){
	int arr[5]={2,4,9,9,9};
	int n=5;
	int sum=getsum(arr,n);
	cout<<"The answer is "<<sum<<endl;
	return 0;
}
