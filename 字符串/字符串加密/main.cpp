#include<iostream>
#include<string>
using namespace std;

bool has(char * key,char c){
	for(int i=0;i<strlen(key);i++){
		if(key[i]==c)
			return true;
	}
	return false;
}
void encrypt(char * key,char * data,char * encrypt){
	char tar_key[27];
	tar_key[26]='\0';
	//生成最终密钥
	//将key复制到目标数组中
	int j=0;
	for(j;j<strlen(key)&&j<26;j++){
		//key转换为小写
		key[j]=tolower(key[j]);
		tar_key[j]=key[j];
	}
	int i=j;
	for(char c='a';c<=('a'+25);c++){
		if(!has(key,c)){
			tar_key[i++]=c;
		}
	}
	//生成密文
	int k=0;
	for(k;k<strlen(data);k++){
		//处理大写字符
		if(data[k]>='A'&&data[k]<='Z'){
			int index=data[k]-97;
			encrypt[k]=(tar_key[index]-32);
		}
		//处理小写字符
		else if(data[k]>='a'&&data[k]<='z'){
			int index=data[k]-97;
			encrypt[k]=tar_key[index];
		}
	}
    encrypt[k]='\0';
}

int main(){
	char key[27];
	char data[100];
	char result[100];
	cin>>key>>data;
	encrypt(key,data,result);
    cout<<result<<endl;

	return 1;
}