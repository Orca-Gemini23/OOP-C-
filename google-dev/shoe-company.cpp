//You have just gotten a position as a salesperson for the ExerShoe company, 
// specializing in high-end exercise shoes costing around $225 per pair.
// Your boss has given you three options for compensation, which you must choose before you begin your first day:

/*Straight salary of $600 per week;
A salary of $7.00 per hour plus a 10% commission on sales;
No salary, but 20% commissions and $20 for each pair of shoes sold
You, being an expert C++ programmer, figure you can write a program to help decide the best choice of compensation.

A common approach in doing decomposition for a larger program is to create a main function that reads like an 
outline to solving the problem. Then, we write the functions to do each task.*/

#include<iostream>
using namespace std;

#define kPricePerUnit 225  // average price of a pair of shoes
#define kWeeklyWage 600    // current weekly wage - Method 1
#define kSalary 7.0        // hourly salary - Method 2
#define kHoursPerWeek 40    // number of hours worked - Method 2
#define kCommission2  0.10  // commission - Method 2
#define kCommission3 0.2    // commission - Method 3
#define kBonusPerUnit 20    // bonus  - Method 3

int getInput(void){
    int units;
    cout << "Enter the amount of units sold: ";
    if(!(cin >> units)){
        cout << " Enter numbers only: ";
        cin.clear();
        cin.ignore();
    }
    else{
        return units;
    }
}

void method1(void){
    cout << "Method 1: " << kWeeklyWage << endl;
}

void method2(int sales){
    double PerHour, TotalPay, Commission;
    PerHour = kSalary * kHoursPerWeek;
    Commission = (sales * kPricePerUnit) + kCommission2;
    TotalPay = PerHour + Commission;
    cout << "Method 2: " << TotalPay << endl;
}

void method3(int sales){
    int Extra;
    double TotalPay, Commission;
    Extra = kBonusPerUnit * sales;
    Commission = (sales * kPricePerUnit) + kCommission3;
    TotalPay = Extra + Commission;
    cout << "Method 3: " << TotalPay << endl;
}

int main(){
    int Weeklysales;
    Weeklysales = getInput();
    if(Weeklysales == 0){
        return 0;
    }
    method1();
    method2(Weeklysales);
    method3(Weeklysales);
    return 0;
}