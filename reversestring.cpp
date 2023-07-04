//reverse a string

#include<iostream>
using namespace std;
void reverse(string&  str,int i, int j){
//	int n=name.length();
	//base case
	if(i>j){
		return ;
	}
	
	//processing
	swap(str[i],str[j]);
	i++;
	j--;
	
	//recursive relation
	
	reverse(str,i,j);
}
//using namespace std;
int main(){
	string name="reeshu";
	int n=name.length();
	reverse(name,0,n-1);
	cout<<name<<" ";
	return 0;
}
