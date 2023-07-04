//check palindrome
#include<iostream>
using namespace std;
bool checkpalindrome(string& str,int i,int j){
	
	//base case
	if(i>j){
		return true;
	}
	
	//processing
	if(str[i]!=str[j]){
		return false;
	}
	//recursive call
	else{
		return checkpalindrome(str,i+1,j-1);
	}
}
int main(){
	string name="ReesHu";
	
	bool ans=checkpalindrome(name,0,name.length()-1);
	if(ans){
		cout<<"IT is a palindrome "<<endl;
	}
	else{
		cout<<"It is not a palindrome "<<endl;
	}
	return 0;
}
