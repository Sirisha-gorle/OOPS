//https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382256

#include <bits/stdc++.h> 

using namespace std;

// Create the classes here
class shape{
    public:
    string shapeType;
    void printMyType(){
        
    }
};


class Square : public shape{
    public:
    int length;

    int calculateArea(){
        return (this->length*this->length);
    }

    void printMyType(){
        cout<<this->shapeType<<endl;
    }
};

class Rectangle : public shape{
    public:
    int length, breadth;

    int calculateArea(){
        return (this->length*this->breadth);
    }

    void printMyType(){
        cout<<this->shapeType<<endl;
    }
};


int main() {
    
    Square s;
    s.shapeType = "square";
    s.length = 5;
    s.printMyType();
    cout<<s.calculateArea()<<endl;

    Rectangle r;
    r.shapeType = "rectangle";
    r.length = 5;
    r.breadth = 4;
    r.printMyType();
    cout<<r.calculateArea()<<endl;

    return 0;
}