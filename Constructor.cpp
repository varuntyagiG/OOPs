#include<iostream>
using namespace std;

class Athele {
  // property
  public:
  int run;
  string foods;

  // default constructor
  Athele(){
    this->run = 101001;
    this->foods = "Nothing";
    cout << "no parameter constructor : " << endl; 
  }

  // parameterised constructor
  Athele(int x){
    this->run = x;
    cout << "1 parameter constructor :" << endl;
  }

  Athele(int r,string f){
       this->run = r;
       this->foods = f;
       cout << "2 parameter constructor :" << endl;
  }

  // copy constructor
  Athele(Athele &obj){
       this->run = obj.run;
       cout << "Copy Constuctor " << endl;
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
  Athele A;
  Athele* B = new Athele(89);
  Athele* C = new Athele(56,"Dal");

  Athele X(A);
  cout << X.run << endl;
  return 0;
}