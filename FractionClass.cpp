//https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1381816?leftPanelTab=1

#include <bits/stdc++.h> 
#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {
    public:
    long long  numerator, denominator;
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void add(Fraction F){
        if(F.denominator == this->denominator){
            this->numerator += F.numerator; 
        }
        else{
             this->numerator = (this->numerator*F.denominator) + (F.numerator*this->denominator);
            this->denominator = this->denominator*F.denominator;
        }
       
    }

    void multiply(Fraction F){
        this->numerator = this->numerator*F.numerator;
        this->denominator = this->denominator*F.denominator;
    }
    void print(){
        int sim = __gcd(this->numerator,this->denominator);
        cout<<((this->numerator)/sim)<<"/"<<((this->denominator)/sim)<<endl;
    }
    

};

int main() {
    int numerator, denominator, queries;

    cin>>numerator>>denominator;
    Fraction F1(numerator,denominator);


    cin>>queries;
    for (int i = 0; i < queries; i++) {
        
      int type, num, den;
      cin>>type>>num>>den;
      Fraction F2(num,den);
      if(type == 1){
          F1.add(F2);
          F1.print();
      }
      else{
          F1.multiply(F2);
          F1.print();
      }
    }

    return 0;
}