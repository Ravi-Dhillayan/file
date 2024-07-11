#include<iostream>
 #include<string.h>
using namespace std;
class st{
    
    public:
  void fun(){
  	char  n1[20],n3[20],cpy[20],n2[20],sc[20];
    int len;
      cout<<"Enter the String : "<<endl;
    cin>>n1;
    cout<<"Enter the your Replace string "<<endl;
    cin>>n2;
     cout<<"Your String : "<<n1<<endl;
    strcpy(n3,n2);
    strcpy(sc,n1);
    strcat(sc,n2);
    
     cout<<"Concatenates Your two String : "<<sc<<endl;
    cout<<"Your String replace  : "<<n3<<endl;
    strncpy(cpy,n1,sizeof(cpy)-1);
    cpy[sizeof(cpy)-1];
    cout<<"Your String copyed : "<<cpy<<endl;
      int le=strlen(n1);
    cout<<"Your String lenght : "<<le<<endl;
    
  }
  void fun2(){
  	string   n1,n3,cpy,n2,sc;
    int len;
  	cout<<"Enter the your String : "<<endl;
  	cin>>n1;
  	
  	cout<<"Your String : "<<n1<<endl;
  	cpy=n1;
  	cout<<"Copy String : "<<cpy<<endl;
  	cout<<"Enter the your 2nd String : "<<endl;
  	cin>>n2;
  	n3=n1+n2;
  	cout<<" Concatenates your String : "<<n3<<endl;
  	len=n3.size();
  	cout<<"Your String lenght : "<<len<<endl;
  	
  }
};
int main(){
    st obj;
//    obj.fun();
   obj.fun2();

}
