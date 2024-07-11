//#include<iostream>
//#include<string.h>
//using namespace std;
//class st{
//	  public:
//	char nm[20];
//   char cop[20];
//   int c=0,s=0,d=0,sp=0;
// 
//   	void get(){
//   		cout<<"Enter the name : "<<endl;
//   		cin>>nm;
//   		cout<<nm<<endl;
//   		
////   		strcpy(cop,nm);
////   		cout<<"copy Name : " <<cop<<endl;
//   		
////   		int n=length(nm);
//      cout<<"This String in Uper latter Character : "<<endl;
//      cout<<" This String in lower latter character : "<<endl;
//      cout<<"This String in Desimal Number : "<<endl;
//      cout<<"ThisString in Spacel Sumble :  "<<endl;
//        for (int i = 0; i < strlen(nm); i++) {
//        	cout<<"Hello world"<<endl;
//            if (nm[i] >= 'A' && nm[i] <= 'Z') {
//                c++;
//                cout << nm[i];
//            }
//            cout<<endl;
//              else if(nm[i]>='a' && nm[i]<='z')
//                {
//                	s++;
//                	cout<<nm[i];
//				}
//				cout<<endl;
//			else if(nm[i]>='0' && nm[i]<=9)
//			{
//			d++;
//			cout<<nm[i];	
//			}
//			cout<<endl;
//			else{
//				sp++;
//				cout<<nm[i];
//			}
//            
//        }
//        cout<<"This String in Toatal Uper latter Character : "<<c<<endl;
//        cout<<"This String in Total lower Chararacter : "<<s<<endl;
//        cout<<"This String in  Total Desimal Number : "<<d<<endl;
//        cout<<"This String in Total Spacel Sumble : "<<sp<<endl;
//   			
//		   }
//	   
//};
//int main(){
//	st obj;
//	obj.get();
//}
#include<iostream>
#include<string.h>
using namespace std;

class st {
public:
    char nm[20];
    char cop[20];
    int c = 0, s = 0, d = 0, sp = 0;

    void get() {
        cout << "Enter the name : " << endl;
        cin >> nm;
        cout << nm << endl;

        for (int i = 0; i < strlen(nm); i++) {
            if (nm[i] >= 'A' && nm[i] <= 'Z') {
                c++;
                cout << "Uppercase: " << nm[i] << endl;
            } else if (nm[i] >= 'a' && nm[i] <= 'z') {
                s++;
                cout << "Lowercase: " << nm[i] << endl;
            } else if (nm[i] >= '0' && nm[i] <= '9') {
                d++;
                cout << "Decimal Number: " << nm[i] << endl;
            } else {
                sp++;
                cout << "Special Symbol: " << nm[i] << endl;
            }
        }

        cout << "Total Uppercase Characters: " << c << endl;
        cout << "Total Lowercase Characters: " << s << endl;
        cout << "Total Decimal Numbers: " << d << endl;
        cout << "Total Special Symbols: " << sp << endl;
    }
};

int main() {
    st obj;
    obj.get();
    return 0;
}

