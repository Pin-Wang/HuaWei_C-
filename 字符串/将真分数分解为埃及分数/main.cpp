#include <iostream>
#include <string>
using namespace std;


int main()
{
	int a,b,c;
	scanf("%d/%d",&a,&b);
	while(true){
		//��������ܹ�������ĸ
		if((b%a==0)){
			printf("1/%d",b/a);
			break;
		}
		//������Ӳ���������ĸ����ֽ��һ����ĸΪb/a+1�İ���������
		else{
			c = b/a+1;
			a = a*c-b;
			b = b*c;
			printf("1/%d+",c);
		}
		//�������������3����������2����������
		if(a==3){
			printf("1/%d+1/%d",b/2,b);
			break;
		}
	}
	printf("\n");
	return 0;
}