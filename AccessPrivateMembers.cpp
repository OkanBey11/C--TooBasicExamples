#include <iostream>

class Employee
{
private:
    int salary;
public:
    //setter
    void setSalary(int x){
        salary = x;
    }

    //getter
    int getSalary(){
        return salary;
    }

};

int main(){

    Employee emp;
    emp.setSalary(100);
    std::cout << "This is your salary -> " <<emp.getSalary();
}