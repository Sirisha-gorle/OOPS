//https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382241
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Car{
    // Write your constructor and printCarInfo method here.
    public:
    int noOfGear;
    string color;

    // Car(int noOfGear, string color){
    //     this->noOfGear = noOfGear;
    //     this->color = color;
    // }
    void printInfo(){
        cout<<"noOfGear: "<<noOfGear<<endl;
        cout<<"color: "<<color<<endl;

    }
};


class RaceCar: public Car{
    // Write your constructor and printRaceCarInfo method here.
    public:
    int maxSpeed;
    RaceCar(int noOfGear, string color, int maxSpeed){
        this->noOfGear = noOfGear;
        this->color = color;
        this->maxSpeed = maxSpeed;
    }

    void printInfo(){
        cout<<"noOfGear: "<<noOfGear<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"maxSpeed: "<<maxSpeed<<endl;
    }

};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;

    RaceCar raceCar(noOfGear, color, maxSpeed);//if constructor is also present in car it will throw error as during inheritanc
    raceCar.printInfo();
    return 0;
}