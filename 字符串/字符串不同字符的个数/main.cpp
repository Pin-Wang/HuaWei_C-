

/*
#include<iostream>
using namespace std;

int main(){
	char str[200];
	char str_tmp[200];
	str_tmp[0]='\0';
	int index=0;
	int length=strlen(str);
	gets(str);
	for(int i=0;i<length;i++){
		int length_temp=strlen(str_tmp);
		bool flag=false;
		if(str[i]>=0&&str[i]<=127){
			for(int j=0;j<length_temp;j++){
				if(str[i]==str_tmp[j]){
					flag=true;
				}
			}
			if(!flag){
				str_tmp[index++]=str[i];
				 str_tmp[index]='\0';
			}
		}
	}
	cout<<strlen(str_tmp)<<endl;
	return 0;
}

*/