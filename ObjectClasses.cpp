#include<iostream>
#include<algorithm>
using namespace std;

class Animal {
       // state or properties
       private:
       int run;

       public:
       int age;
       string name;

       // function
       void eat(){
              cout << "eating" << endl;
       }
       void sleep(){
              cout << "Sleeping" << endl;
       }

       // getter and setter to acess the run
       int getRun(){
              return run;
       }

       void setRun(int r){
              run = r;
       }
};

int main(){
       // cout << "Size of empty class :" << sizeof(Animal) << endl;

       // static object
       Animal varun;

       // set value 
       varun.age = 21;
       varun.name = "Chitty";

       // get value 
       cout << "Varun age :" << varun.age << endl;
       cout << "Varun name :" << varun.name << endl;

       varun.eat();
       varun.sleep();
       

       // access private things with the help of getter and setter
       varun.setRun(94);
       cout << "varun run:" << varun.getRun();


       int* ptr = new int;
       cout << *ptr << endl;
       return 0;
}