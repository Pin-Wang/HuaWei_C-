/第一位如果是0，则通不过

#include<iostream>
using namespace std;

int main(){
	int n;
	char str[32];
	str[0]='\0';
	cin>>n;
	if(n<0){
		return -1;
	}
	int index=0;
	if(n==0){
		cout<<0;
		return 1;
	}
	while(n!=0){
		int remainder=n%10;
		_itoa(remainder,str+index,10);
		index++;
		str[index]='\0';
		n/=10;
	}
	cout<<str;
	return 1;
}

*/