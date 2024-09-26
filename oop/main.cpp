#include <iostream>
using namespace std;
using std::string;

class Car{

public:
    string Name;
    string Color;
    int year;

    void print() {
        cout << "name: "<< Name << endl;
        cout << "color: "<< Color << endl;
        cout << "year: "<< year << endl;
    }
};

int main() 
{
    // object 1
   Car car;
   car.Name = "Malibu";
   car.Color = "Dark_Blue";
   car.year = 2024;
   car.print();

    // object 2
    Car car1;

    car1.Name = "BYD Song Plus";
    car1.Color = "Dark";
    car1.year = 2023;
    car1.print();


}