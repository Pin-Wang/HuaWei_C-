#include<iostream>
using namespace std;

int main(){
	int n;
	int count=0;
	cin>>n;
	for(int i=31;i>=0;i--){
		if(((n>>i)&1)==1){
			count++;
		}
	}
	cout<<count;
	return 1;
}