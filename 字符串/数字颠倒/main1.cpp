//ÕıÈ·
#include <iostream>
using namespace std;
int main()
{
  int num;
  cin>>num;
  if(num<0)
	  return -1;
  else
  {
     char string[32];
	 itoa(num,string,10);
	 for (int i=strlen(string)-1;i>=0;i--)
	 {
		 cout<<string[i];
	 }
  }
}
