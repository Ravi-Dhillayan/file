#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Car {
public:
    virtual void BMW() = 0;
    virtual void show() = 0; // Declaration of the show function
};

class Car1 : public Car {
public:
    char nm[10];
    char color[10];
    void BMW() override {
        ofstream ofa;
        ofa.open("C:\\dev\\BIN\\file\\CAR0.txt", ios::app); // Open file in append mode
        if (ofa.is_open()) {
            cout << "Enter car name: ";
            cin.getline(nm, 10);
            ofa << "Car Name: " << nm << endl;
            cout << "Data has been written to file." << endl;
            ofa.close();
        } else {
            cout << "Unable to open file!" << endl;
        }
    }
    void show() override {
        ifstream ifa;
        ifa.open("C:\\dev\\BIN\\file\\CAR0.txt");
        if (ifa.is_open()) {
            string line;
            cout << "Contents of the file:" << endl;
            while (getline(ifa, line)) {
                cout << line << endl;
            }
            ifa.close();
        } else {
            cout << "Unable to open file!" << endl;
        }
    }
};

int main() {
    Car1 obj;
    obj.BMW(); // Add a car name to the file
    obj.show(); // Display the contents of the file
    return 0;
}

