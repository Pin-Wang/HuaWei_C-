#include<iostream>
using namespace std;

int main(){
	int n;
	int count=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		//7的倍数
		if(i%7==0)
			count++;
		//个位有7的数字
		else if(i%10==7)
			count++;
		//十位有7的数字
		else if((i%100)/10==7)
			count++;
		//百位有7的数字
		else if((i%1000)/100==7)
			count++;
		//千位有7的数字
		else if((i%10000)/1000==7)
			count++;
		//万位有7的数字
		else if(i/10000==7)
			count++;
	}
	cout<<count;

	return 0;
}