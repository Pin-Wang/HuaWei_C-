/*��string��insert���Ӽ�

#include<iostream>
using namespace std;

int main(){
	char str[130];
	gets_s(str);
	int length=strlen(str);
	//�ڵ�һ���ַ������ֵ�ǰ�����*
	if(isdigit(str[0])){
		cout<<"*";
	}
	cout<<str[0];
	for(int i=1;i<=length-1;i++){
		//����֮ǰ���*
		if(isdigit(str[i])){
			if(!isdigit(str[i-1])){
				cout<<"*";
			}
			//�������
		    cout<<str[i];
		}
		//����֮�����*
		else if(!isdigit(str[i])){
			if(isdigit(str[i-1])){
				cout<<"*";
			}
			//�����ĸ
		    cout<<str[i];
		}
		else{
			//���������ĸҲ�������ֵ��ַ�
			 cout<<str[i];
		}
	}
	if(isdigit(str[length-1])){
		cout<<"*";
	}
	return 0;
}
*/