#include<iostream>
using namespace std;

int main(){
	char str[130];
	gets_s(str);
	int length=strlen(str);
	for(int i=length-1;i>=0;i--){
		cout<<str[i];
	}
	return 1;
}