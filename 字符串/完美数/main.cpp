#include<iostream>
using namespace std;

int count(int n){
	if(n<=0||n>500000){
		return -1;
	}
	else{
		int  count=0;
		for(int j=2;j<=n;j++){
			int  sum=0;
			for(int i=1;i<j;i++){
				if(j%i==0){
					sum+=i;
				}
			}
			if(sum==j){
				count++;
			}
		}
		return count;
	}
}

int main(){
	int n;
	cin>>n;
	cout<<count(n);
}