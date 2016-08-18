#include<iostream>
using namespace std;

int max(int a,int b){
	return a > b ? a : b;
}

int MaxSubString(int* A, int n)
{
	int Start = A[n - 1];
	int All = A[n - 1];
	for (int i = n - 2; i >= 0; i--)    //从后向前遍历，反之亦可。
	{
		Start = max(A[i], A[i] + Start);
		All = max(Start, All);
	}
	return All;                       //All[0] 中存放结果
}

int main(){
	int arr[6] = { 0, -2, 3, 5, -1, 2 };
	cout<<MaxSubString(arr, 6);
	return 1;
}