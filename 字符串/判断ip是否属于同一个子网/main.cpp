#include<iostream>
#include<string>
using namespace std;
bool invalid=false;

//将ip字符串转换为4个int数组
void split(char str[],int arr[]){
	int j=0;
	for(int i=0;i<strlen(str);i++){
		int sum=0;
		while(str[i]!='.'&&i<strlen(str)){
			sum*=10;
			sum+=str[i]-'0';
			i++;
		}
		if(sum>255){
			invalid=true;
		}
		arr[j++]=sum;
	}
}

int main(){
	char netmask[40];
	char ip1[40];
	char ip2[40];
	int a[4];
	int b[4];
	int c[4];
    cin>>netmask>>ip1>>ip2;
	
	split(netmask,a);
	split(ip1,b);
	split(ip2,c);
	if(invalid){
		cout<<1;
		return 1;
	}
	for(int i=0;i<4;i++){
		if((a[i]&b[i])!=(a[i]&c[i])){
			cout<<2;
			return 1;
		}
	}
	cout<<0;
	return 1;
}