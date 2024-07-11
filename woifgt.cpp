#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter 1st number : "<<endl;
	cin>>a;
	cout<<"Enter 2nd number : "<<endl;
	cin>>b;
	c=(a>b)*a+(b>a)*b;
	cout<<c;
	
//	
//  int min= b+((a-b) & ((a-b)>> (sizeof(int)*CHAR_BIT-1) ));
//  cout<<min;
//  cout<<max;
  return 0;
	
}
