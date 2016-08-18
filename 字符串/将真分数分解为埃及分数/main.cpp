#include <iostream>
#include <string>
using namespace std;


int main()
{
	int a,b,c;
	scanf("%d/%d",&a,&b);
	while(true){
		//如果分子能够整除分母
		if((b%a==0)){
			printf("1/%d",b/a);
			break;
		}
		//如果分子不能整除分母，则分解成一个分母为b/a+1的埃及分数。
		else{
			c = b/a+1;
			a = a*c-b;
			b = b*c;
			printf("1/%d+",c);
		}
		//如果余数分子是3，则输出最后2个埃及分数
		if(a==3){
			printf("1/%d+1/%d",b/2,b);
			break;
		}
	}
	printf("\n");
	return 0;
}