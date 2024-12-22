#include<iostream>
#include<vector>
using namespace std;

class Animal {
  // properties
  public:
  string name;
  int age;

  // function
  void run(){
    cout << "Run Fast" << endl;
  }
  void sleep(){
    cout << "Sleep daily" << endl;
  }
};

int main(){
  Animal dog; // obj
  cout << "name :" << dog.name << endl;
  return 0;
}