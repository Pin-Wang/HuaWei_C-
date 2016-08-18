/*用string的insert更加简单

#include<iostream>
using namespace std;

int main(){
	char str[130];
	gets_s(str);
	int length=strlen(str);
	//在第一个字符是数字的前面输出*
	if(isdigit(str[0])){
		cout<<"*";
	}
	cout<<str[0];
	for(int i=1;i<=length-1;i++){
		//数字之前输出*
		if(isdigit(str[i])){
			if(!isdigit(str[i-1])){
				cout<<"*";
			}
			//输出数字
		    cout<<str[i];
		}
		//数字之后输出*
		else if(!isdigit(str[i])){
			if(isdigit(str[i-1])){
				cout<<"*";
			}
			//输出字母
		    cout<<str[i];
		}
		else{
			//输出不是字母也不是数字的字符
			 cout<<str[i];
		}
	}
	if(isdigit(str[length-1])){
		cout<<"*";
	}
	return 0;
}
*/