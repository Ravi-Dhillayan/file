#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Animal {
	char nm[00];
	char foot[100];
	public:
		void get(){
			ofstream ofa;
			ofa.open("C:\\dev\\BIN\\file\\Animal.txt",ios::app);
		  if(ofa.is_open()){
		  		cout<<"Enter the Name of Animal : "<<endl;
			cin.getline(nm,10);
			ofa<<"Name of Animal : "<<nm<<endl;
			cout<<"Enter the "<<nm<<" Foot : "<<endl;
			cin.getline(foot,100);
			ofa<<"Foot of Animal = "<<foot<<endl;
			ofa.close();
		  }
		  else{
		  	cout<<"Unable to open file !!! "<<endl;
		  	
		  }
		}
		void show(){
			ifstream ifa;
			ifa.open("C:\\dev\\BIN\\file\\Animal.txt");
			if(ifa.is_open()){
				string line;
				cout<<"Contents ofa file: "<<endl;
				while(getline(ifa,line)){
					cout<<line<<endl;
				}
				ifa.close();
			}
			else{
				cout<<"Unable to open file ! "<<endl;
			}
		}
};
int main(){
	Animal obj;
	obj.get();
	obj.show();
	return 0;
}
