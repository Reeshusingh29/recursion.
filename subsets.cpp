#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>arr,vector<int>output,int index,vector<vector<int>& ans){
	//base case
	if(index>arr.size()){
		ans.push_back(output);
		return ;
	}
	//exclude
	solve(arr,output,index+1,ans);
	
	//include
	output.push_back(arr[index]);
	solve(arr,output,index+1,ans);
}
int main(){
	vector<vector<int> subsets(vector<int>arr){
		vector<vector<int>ans;
		vector<int>output;
		int index=0;
		solve(arr,output,index,ans);
		return ans;
	}
}
