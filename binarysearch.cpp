#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n,int s,int e,int key){
	
	//base case
	
	if(s>e){
		return false;
	}
	
	int mid=(s+e)/2;
	
	if(arr[mid]==key) return true;
	
	if(arr[mid]>key){
	  return	bs(arr,n,s,mid-1,key);
	}
	if(arr[mid]<key){
		return bs(arr,n,mid+1,e,key);
	}
	return -1;
}
int main(){
	int arr[4]={2,3,4,5};
	int n=4;
	int key=4;
	
	bool ans=bs(arr,n,0,n-1,4);
	if(ans){
		cout<<"mil gaya"<<endl;
	}
	else{
		cout<<"Nahi mila"<<endl;
	}
	return 0;
}
