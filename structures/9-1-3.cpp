#include <bits/stdc++.h>
using namespace std;

struct Employee{
    char name;
    int id;
    float experience;
    double salary;
}E1[100];
int main(){
    int n;
    Employee E1[n];
    cout << "Enter the number of employees: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Enter the name of the employee: ";
        cin >> E1[i].name;
        cout << "Enter the id: ";
        cin >> E1[i].id;
        cout << "Enter the experience in yrs:";
        cin >> E1[i].experience;
        cout << "Enter the salary: ";
        cin >> E1[i].salary;
    }
  
    return 0;
}