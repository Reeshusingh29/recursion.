//counting problem 
/*Example of Tail recursion
#include<iostream>
using namespace std;
void count(int n){
	//base case
	if(n==0){
		return ;
	}
	
	//recursive relation
	cout<<n<<endl;
	count(n-1);
	
	
	
}
int main(){
	int n;
	cin>>n;
	
	
	count(n);
	
	return 0;
}*/
/*Example of Head recursion
#include<iostream>
using namespace std;
void count(int n){
	//base case
	if(n==0){
		return ;
	}
	
	//recursive relation
	count(n-1);
	cout<<n<<endl;
	
	
	
	
}
int main(){
	int n;
	cin>>n;
	
	
	count(n);
	
	return 0;
}*/
