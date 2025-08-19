#include <iostream>

class Employee
{
private:
   int salary;

public:
    Employee(int s){
        salary = s;
    }


    friend void displaySlary(Employee emp);
};

void displaySlary(Employee emp)
{
    std::cout << "Salary = " << emp.salary;
}

int main(){
    Employee myEmp(30000);
    displaySlary(myEmp);
    return 0;
}

