#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

//class A {
//public:
//    void enter() {
//    	int v;
//        ofstream ofa;
//        ofa.open("C:\\TURBOC3\\BIN\\file\\aa.dat");
//        ofa << "Hello your Welcome to file Your Please Enter the data   ";
//        cout << "Data has been written in the file " << endl;
//        ofa.close();
//    }
//
//    void show() {
//        ifstream fo;
//        string stra;
//        fo.open("C:\\TURBOC3\\BIN\\file\\aa.dat");
//        while (getline(fo, stra)) {
//            cout << stra;
//        }
//        fo.close();
//    }
//
//    void copy() {
//        ifstream fo;
//        ofstream ofa;
//        char str;
//   fo.open("aa.dat");
//   ofa.open("aa.dat");
//   while(fo.get(str)){
//   	ofa.put(str);
//   }
//   cout<<"Your file data Copy :: !"<<endl;
//   fo.close();
//   ofa.close();
//       
//    }
//    void rmove(){
//    int value=	remove("aa.dat");
//    if(value ==0){
//    	cout<<"File Deleted :: ! "<<endl;
//	}
//	else{
//		cout<<"File NOt Deleted ::"<<endl;
//	}
//	}
//};
//
//int main() {
//    A o;
////     o.enter();
//     o.show();
////    o.copy();
////  o.rmove();
//}




class A{
 char Roll_no[100],name[100];
	public:
		void Enter(){
			ofstream ofa;
			ofa.open("aa.dat");
			cout<<"Enter the Name of Student : "<<endl;
			gets(name);
			cout<<"Enter the Roll_no of Student : "<<endl;
			gets(Roll_no);
			A ao;
			ofa.write((char*)&ao,sizeof(ao));
		}
		void dispaly(){
				cout<<"Name of Student : "<<endl;
				puts(name);
			cout<<"Roll_no Student  "<<endl;
			puts(Roll_no);
		}
		void show();
		
};
void A:: show(){
				A ao;
			ifstream ofb;
			ofb.open("aa.dat");
			while(ofb.read((char*)&ao,sizeof(ao)))
			{
				ao.dispaly();
			}
			cout<<"NO more Records !!!"<<endl;
		
		}
int main(){
	A o;
	o.Enter();
	o.dispaly();
	o.show();
}
