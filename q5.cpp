/*5. Design an Employee class that takes care of the not-so-fun part of earning money—taxes! Start
by crafting a get_data function that collects the employee’s name (because we need to know
whose salary to slash), their monthly salary (so we can pretend like they're making money),
and their tax percentage (because who doesn’t love the feeling of money slipping through their
fingers?). Next, add a Salary_after_tax function that dramatically deducts 2% tax from the
salary—because why let them keep all of it, right? It returns the remaining salary, which will
hopefully be enough to buy a cup of coffee (if they're lucky). But hold onto your hat! There's
also an update_tax_percentage function that lets you increase the tax rate—because who
doesn’t enjoy surprising your employees with an unexpected increase in taxes (like 3% instead
of 2%)? After that delightful change, the salary gets recalculated, and they get to see just how
little they’re left with. It’s a perfect reminder that the only thing certain in life is taxes and less
money!*/
#include<iostream>
using namespace std;
class Employee 
{
private:
    string name;
    double salary;
    double tax_percent;
public:
    void get_data() 
	{
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter monthly salary: ";
        cin>>salary;
        cout<<"Enter tax percentage: ";
        cin>>tax_percent;
    }
    double Salary_after_tax() {
        double tax=salary*(tax_percent/100);
        return salary-tax;
    }
    void update_tax_percentage() {
        cout<<"Enter new tax percentage: ";
        cin>>tax_percent;
    }
};

int main() {
    Employee e;
	e.get_data();
    cout<<"Salary after tax: "<<e.Salary_after_tax()<<endl;
	e.update_tax_percentage();
    cout<<"Salary after updated tax: "<<e.Salary_after_tax()<<endl;
	return 0;
}

