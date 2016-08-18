#include<iostream>
#include<string>
using namespace std;

string s1[4]={"hundred","thousand","million","billion"};
string s2[20]={"zero","one","two","three","four","five","six","seven","eight","nine",
"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string s3[9]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

//处理1-3位数
string parse3(int n){
	string result;
	bool flag=false;
	if(n>=100){
		int i=n/100;
		result+=s2[i];
		result+=" ";
		result+=s1[0];
		n%=100;
		flag=true;
	}
	if(n>=20){
		if(flag){
			result+=" and ";
		}
		int i=n/10;
		result+=s3[i-2];
		n%=10;
		flag=true;
	}
	if(n>=1){
		if(flag){
			result+=" ";
		}
		result+=s2[n];
	}
	return result;
}

string parse(long n){
	string result;
	bool flag=false;
	//处理10位数
	if(n>=1000000000){
		int i=n/1000000000;
		result+=s2[i];
		result+=" ";
		result+=s1[3];
		n%=1000000000;
		flag=true;
	}
	//处理7-9位数
	if(n>=1000000){
		int k=n/1000000;
		if(flag)
		result+=" ";
		result+=parse3(k);
		result+=" ";
		result+=s1[2];
		n%=1000000;
		flag=true;
	}
	//处理4-6位数
	if(n>=1000){
		int k=n/1000;
		if(flag)
		result+=" ";
		result+=parse3(k);
		result+=" ";
		result+=s1[1];
		n%=1000;
		flag=true;
	}
	//处理1-3位数
	if(n>=1){
		if(flag)
		result+=" ";
		result+=parse3(n);
	}
	return result;
}

int main(){
	long n;
	cin>>n;
	cout<<parse(n);
}