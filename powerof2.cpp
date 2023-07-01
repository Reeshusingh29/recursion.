//power of 2 problem 

#include<iostream>
using namespace std;
int power(int n){
	
	//base case
	if(n==0){
		return 1;
	}
	
/*	int small=power(n-1); 
	int big=2*small;
	return big;*/
	
	//we can also write above recursive relation as
	
	int small=power(n-1);
	return 2*small;
}
int main(){
	int n;
	cin>>n;
	
	cout<<"The value is "<<power(n)<<endl;
}
