#include<bits/stdc++.h>
#include"Employee.cpp"
using namespace std;
class Manager:public Employee{
  private:
  int bonus;
  public:
  Manager(string name,int salary,int bonus):Employee(name,salary){
      this->bonus=bonus;
  };
  int getSalary(){
      return bonus + Employee::getSalary();
  }
  int getBonus(){
      return bonus;
  }
  void setBonus(int bonus){
      this->bonus=bonus;
  }
  void display(){
      Employee::display();
      
  }
};
