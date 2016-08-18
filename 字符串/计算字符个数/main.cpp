#include<iostream>
using namespace std;

int main(){
	char str[130];
	char c;
	int count=0;
	int length;
	gets_s(str);
	cin>>c;
	length=strlen(str);
	c=tolower(c);
	for(int i=0;i<length;i++){
		str[i]=tolower(str[i]);
		if(str[i]==c){
			count++;
		}
	}
	cout<<count;
	return 1;
}