#include <iostream>
using namespace std;
int main() {
	int a;
cin>>a;
if(a%4==0&&a%10!=0||a%400==0)//如果4的倍數，但不是100的倍數 或 400的倍數，則輸出YES
{
cout<<"YES"<<endl;
}
else //否則輸出NO
{
cout<<"NO"<<endl;
}
}
