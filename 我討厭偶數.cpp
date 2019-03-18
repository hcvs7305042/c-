#include <iostream>
using namespace std;
int main() {
	int N; //設變數值
cin>>N; //輸入N
while(N%2!=1) //當N=奇數時
{
N = N/2; //N/2
}
cout<<N<<endl; //輸出N
}
