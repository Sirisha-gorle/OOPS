//https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1381817

#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

    private:
    string name;
    int age;

    public:
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }

    string getName(){
        return this->name;
    }

    int getAge(){
        return this->age;
    }


};

int main() {

    string name;
    int age;
    
    cin >> name;
    cin >> age;

    Person p;

    p.setName(name);
    p.setAge(age);

    cout << "The name of the person is " << p.getName() 
    << " and the age is " << p.getAge() <<".";

    return 0;
}