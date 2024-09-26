#include <iostream>
using namespace std;
using std::string;

class Car{

public:
    string Name;
    string Color;
    int Year;

    void print() {
        cout << "name: "<< Name << endl;
        cout << "color: "<< Color << endl;
        cout << "year: "<< Year << endl;
    }
    Car(string name, string color, int year) {
        Name = name;
        Color = color;
        Year = year;
    }
};

int main() 
{
    // object 1
    Car car = Car("BYD","Dark",2023);
    car.print();

}