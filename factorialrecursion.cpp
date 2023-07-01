//Recursion day-01
//when a function call itself directly or indirectly is recursion
//it consist of base class and recursive relation 

#include<iostream>
using namespace std;
int factorial(int n){
	if(n==0) return 1;   /* ye base case agar nahi hota toh hame segmentation 
	                        fault aayega kyuki hame pata nahi ki kab tak karna
	                        hai, ek aisa moment hoga jaha hame rukna hoga toh kaha 
	                        rukna hai , toh woh batata hai base case*/
	                                
	int small=factorial(n-1);  /*ye recursive relation hota hai isse ham apne 
	                             bade function ko small functions mai tod sakte hai
	                             */
	int big = n*small;
	return big;
}
int main(){
	int n;
	cout<<"Enter the no "<<endl;
	cin>>n;
	
	cout<<"The factorial of "<<n<<"is "<<factorial(n);
}
