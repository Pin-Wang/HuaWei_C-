#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	int alpha_c=0;
	int digit_c=0;
	int blank_c=0;
	int other_c=0;
	getline(cin,str);
	int length=str.length();
	for(int i=0;i<length;i++){
		if(isalpha(str[i])){
			 alpha_c++;
		}
		else if(isdigit(str[i])){
			digit_c++;
		}
		else if(str[i]==' '){
			blank_c++;
		}
		else{
			other_c++;
		}
	}
	cout<<alpha_c<<endl;
	cout<<blank_c<<endl;
	cout<<digit_c<<endl;
	cout<<other_c<<endl;
}