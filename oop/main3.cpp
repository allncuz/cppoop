#include <iostream>
using namespace std;
using std::string;

class Car{

private:
    string Name;
    string Color;
    int Year;
public:
    void setName(string name) { // setter
        Name = name;
    }
    string getName() { // getter
        return Name;
    }
    void setColor(string color) {
        Color = color;
    }
    string getColor() {
        return Color;
    }
    void setYear(int year){
        if (year >= 2022)
        Year = year;
    }
    int getYear() {
        return Year;
    }

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
    Car car = Car("BYD","Dark",2020);
    //car.print();

    Car car1 = Car("Malibu","Blue",2024);
    //car1.print();

    car.setYear(2021);
    cout << car.getName() << " is " << car.getYear() << " year ca "<< endl;

}