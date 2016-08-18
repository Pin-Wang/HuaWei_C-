#include<iostream>
using namespace std;

int get(int line,int i){
	if(i<1||i>(2*line-1)){
		return 0;
	}
	else if(i==1){
		return 1;
	}
	else{
		return get(line-1,i-2)+get(line-1,i-1)+get(line-1,i);
	}
}

int  main(){
	int line;
	int n=1;
	cin>>line;
	for(;n<(2*line-1);n++){
		int temp=get(line,n);
		if(temp%2==0){
			cout<<n;
			return 1;
		}
	}
	cout<<-1;
	return 1;
}