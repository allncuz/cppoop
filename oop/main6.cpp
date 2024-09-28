#include <iostream>
using namespace std;
using std::string;

class AbstractCar{
    virtual void AskForPromation()=0;
};

class Car:AbstractCar{

private:
    
    string Color;
    int Year;
protected:
    string Name;
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
    // virtual bu yashirincha qilib beradi
    virtual void Work() {
        cout << Name << " task send email a message..." << endl;
    }
};

class Auto:public Car {
public:
    string FavProgramingLanguage;
    Auto(string name,string color,int year,string favPrograminglanguage)
    :Car(name,color,year) 
    {
        FavProgramingLanguage = favPrograminglanguage;
    }

    void FixBug() {
        cout << Name << " fix bug using " << FavProgramingLanguage << endl;
    }
    void Work() {
        cout << Name << " is writting " << FavProgramingLanguage <<" code" << endl;
    }
};
class Person:public Car{
public:
    string Subject;
    void GetData() {
        cout << Name << " is data " << Subject << " subject" << endl;
    }
    Person(string name,string color,int year,string subject)
        :Car(name,color,year)
        {
            Subject = subject;
        }
};

int main() 
{
    // object 1
    // Auto auto1 = Auto("Tesla","Dark",2024,"Rust");
    // Auto auto2 = Auto("BYD","Blue",2024,"C++");
    // auto1.FixBug();
    // auto2.FixBug();
    // auto1.AskForPromation();

    Auto auto1 = Auto("Tesla","Dark",2024,"Rust");
    Person person = Person("Ali","blue",2000,"Id cart");
    // person.Work();
    // auto1.Work();

    // pointers
    Car* c1 = &auto1;
    Car* c2 = &person;

    c1 -> Work();
    c2 -> Work();

    
}