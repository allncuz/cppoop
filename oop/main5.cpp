#include <iostream>
using namespace std;
using std::string;

class AbstractCar{
    virtual void AskForPromation()=0;
};

class Car:AbstractCar{

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
    
    void AskForPromation(){
        if (Year > 2020)
            cout<< "ok good car"<< endl;
        else
            cout<< "not good car"<< endl;
    }
};

class Auto: Car {
public:
    string FavProgramingLanguage;
    Auto(string name,string color,int year,string favPrograminglanguage)
    :Car(name,color,year) 
    {
        FavProgramingLanguage = favPrograminglanguage;
    }

    void FixBug() {
        cout << getName() << " fix bug using " << FavProgramingLanguage << endl;
    }
};
    

int main() 
{
    // object 1
    Auto auto1 = Auto("Tesla","Dark",2024,"Rust");
    Auto auto2 = Auto("BYD","Blue",2024,"C++");
    auto1.FixBug();
    auto2.FixBug();
    
}