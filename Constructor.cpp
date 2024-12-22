#include<iostream>
using namespace std;

class Athele {
  // property
  public:
  int run;
  string foods;

  // default constructor
  Athele(){
    this->run = 5;
    this->foods = "Nothing";
    cout << "no parameter constructor : " << endl; 
  }

  // parameterised constructor
  Athele(int x){
    this->run = x;
    cout << "1 parameter constructor :" << endl;
  }

  Athele(int r,string f){
       (*this).run = r;
       this->foods = f;
       cout << "2 parameter constructor :" << endl;
  }

  // methoud
  void sleep(){
    cout << "How much an athlete sleep on daily basis : " << endl;
  }

  void drink(){
    cout << "How much water an athele drink a water : " << endl;
  }

  void setRun(int run){
    this->run = run;
  }
};

int main(){
  Athele* A = new Athele();
  Athele* B = new Athele(89);
  Athele* C = new Athele(56,"Dal");
  return 0;
}