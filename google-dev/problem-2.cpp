// Write a program that will compute your final grade for a programming course you are taking. Here is the grading scheme:

//Final grades will be based on the following:
// 40% Assignments   15% Midterm Examination
// 35% Final Examination
//10% Class Participation Grade 
// should ask the user for the four assignment scores, the midterm, final and section grades. 
//Then, the final score is calculated and printed. To do the calculations, you average the four assignment scores together and then multiply it by 0.4 (40%).
// You then multiply the midterm score by 0.15, the final by 0.35 and the participation grade by 0.1. 
// Then you add all the results of these multiplications together.

//Use functions wherever you can in this program. 
// You can create a function to get the input by passing in as a parameter the string to be displayed in an explanatory cout.

#include<iostream>
using namespace std;

int assignment_grades(void){
    int n1, n2, n3, n4;
    int average;
    cout << "Enter the assignment grades: ";
    if(!(cin >> n1 >> n2 >> n3 >> n4)){
        cout << "Enter a valid input" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    else{
        average = (n1 + n2 + n3 + n4)/4;
    }
    return average;
}
int midterm(void){
    int marks_mid;
    cout << "Enter the midterm marks: ";
    cin >> marks_mid;
    return marks_mid;
}
int final(void){
    int marks_final;
    cout << "Enter the final marks: ";
    cin >> marks_final;
    return marks_final;
}
int classParticipation(void){
    int grade;
    cout << "Enter the score for the section grade: ";
    cin >> grade;
    return grade;
}
int main(){
    int product = (assignment_grades() * 0.4) + (midterm() * 0.15) + (final() * 0.35) + (classParticipation() * 0.1); // next time use float;
    cout << "The final grade is:" << product << endl;
    return 0;
}