// ============================================================
//  Doc_1 Lab Solutions — Conditionals & Switch (C++)
// ============================================================

#include <iostream>
#include <cmath>
using namespace std;

// ─────────────────────────────────────────────
// Task 1: Check if two integers are equal
// ─────────────────────────────────────────────
void task1() {
    int a, b;
    cout << "Task 1: Enter two integers: ";
    cin >> a >> b;
    if (a == b)
        cout << "Number1 and Number2 are equal" << endl;
    else
        cout << "Number1 and Number2 are not equal" << endl;
}

// ─────────────────────────────────────────────
// Task 2: Check if a number is even or odd
// ─────────────────────────────────────────────
void task2() {
    int n;
    cout << "Task 2: Enter an integer: ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is an even integer" << endl;
    else
        cout << n << " is an odd integer" << endl;
}

// ─────────────────────────────────────────────
// Task 3: Display n = 1, 0, or -1 based on m
// ─────────────────────────────────────────────
void task3() {
    int m, n;
    cout << "Task 3: Enter an integer m: ";
    cin >> m;
    if (m > 0)      n = 1;
    else if (m == 0) n = 0;
    else             n = -1;
    cout << "The value of n = " << n << endl;
}

// ─────────────────────────────────────────────
// Task 4: Eligibility for professional course
// ─────────────────────────────────────────────
void task4() {
    int maths, phy, chem;
    cout << "Task 4:" << endl;
    cout << "Input marks in Physics: ";    cin >> phy;
    cout << "Input marks in Chemistry: ";  cin >> chem;
    cout << "Input marks in Mathematics: "; cin >> maths;

    int total = maths + phy + chem;
    if ((maths >= 65 && phy >= 55 && chem >= 50 && total >= 180) ||
        (maths + phy >= 140))
        cout << "The candidate is eligible for admission" << endl;
    else
        cout << "The candidate is NOT eligible for admission" << endl;
}

// ─────────────────────────────────────────────
// Task 5: Roll no, name, marks — total, %, division
// ─────────────────────────────────────────────
void task5() {
    int rollNo, phy, chem, comp;
    string name;
    cout << "Task 5:" << endl;
    cout << "Input Roll Number: ";  cin >> rollNo;
    cout << "Input Name: ";         cin >> name;
    cout << "Input marks (Physics Chemistry CompApp): ";
    cin >> phy >> chem >> comp;

    int total = phy + chem + comp;
    float percent = (total / 300.0f) * 100;
    string division;
    if (percent >= 60)      division = "First";
    else if (percent >= 45) division = "Second";
    else if (percent >= 33) division = "Third";
    else                    division = "Fail";

    cout << "Roll No : " << rollNo << endl;
    cout << "Name of Student : " << name << endl;
    cout << "Marks in Physics : " << phy << endl;
    cout << "Marks in Chemistry : " << chem << endl;
    cout << "Marks in Computer Application : " << comp << endl;
    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << percent << endl;
    cout << "Division = " << division << endl;
}

// ─────────────────────────────────────────────
// Task 6: Temperature message
// ─────────────────────────────────────────────
void task6() {
    float temp;
    cout << "Task 6: Enter temperature in Celsius: ";
    cin >> temp;
    if (temp < 0)          cout << "Freezing weather" << endl;
    else if (temp <= 10)   cout << "Very Cold weather" << endl;
    else if (temp <= 20)   cout << "Cold weather" << endl;
    else if (temp <= 30)   cout << "Normal in Temp" << endl;
    else if (temp <= 40)   cout << "Its Hot" << endl;
    else                   cout << "Its very hot." << endl;
}

// ─────────────────────────────────────────────
// Task 7: Alphabet, digit, or special character
// ─────────────────────────────────────────────
void task7() {
    char ch;
    cout << "Task 7: Enter a character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << "This is an alphabet." << endl;
    else if (ch >= '0' && ch <= '9')
        cout << "This is a digit." << endl;
    else
        cout << "This is a special character." << endl;
}

// ─────────────────────────────────────────────
// Task 8: Grade description using switch
// ─────────────────────────────────────────────
void task8() {
    char grade;
    cout << "Task 8: Input the grade: ";
    cin >> grade;
    cout << "You have chosen : ";
    switch (grade) {
        case 'E': cout << "Excellent" << endl;  break;
        case 'V': cout << "Very Good" << endl;  break;
        case 'G': cout << "Good" << endl;       break;
        case 'A': cout << "Average" << endl;    break;
        case 'F': cout << "Fail" << endl;       break;
        default:  cout << "Invalid grade" << endl;
    }
}

// ─────────────────────────────────────────────
// Task 9: Month number → month name
// ─────────────────────────────────────────────
void task9() {
    int month;
    cout << "Task 9: Enter month number (1-12): ";
    cin >> month;
    switch (month) {
        case 1:  cout << "January" << endl;   break;
        case 2:  cout << "February" << endl;  break;
        case 3:  cout << "March" << endl;     break;
        case 4:  cout << "April" << endl;     break;
        case 5:  cout << "May" << endl;       break;
        case 6:  cout << "June" << endl;      break;
        case 7:  cout << "July" << endl;      break;
        case 8:  cout << "August" << endl;    break;
        case 9:  cout << "September" << endl; break;
        case 10: cout << "October" << endl;   break;
        case 11: cout << "November" << endl;  break;
        case 12: cout << "December" << endl;  break;
        default: cout << "Invalid month" << endl;
    }
}

// ─────────────────────────────────────────────
// Task 10: Month number → number of days
// ─────────────────────────────────────────────
void task10() {
    int month;
    cout << "Task 10: Enter month number (1-12): ";
    cin >> month;
    switch (month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            cout << "Month have 31 days" << endl; break;
        case 4: case 6: case 9: case 11:
            cout << "Month have 30 days" << endl; break;
        case 2:
            cout << "Month have 28 or 29 days (leap year)" << endl; break;
        default:
            cout << "Invalid month" << endl;
    }
}

// ─────────────────────────────────────────────
// Task 11: Menu-driven area calculator
// ─────────────────────────────────────────────
void task11() {
    int choice;
    double result = 0, r, l, w, b, h;
    const double PI = 3.14159;
    cout << "Task 11: Area Calculator" << endl;
    cout << "1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter radius: "; cin >> r;
            result = PI * r * r;
            break;
        case 2:
            cout << "Enter length and width: "; cin >> l >> w;
            result = l * w;
            break;
        case 3:
            cout << "Enter base and height: "; cin >> b >> h;
            result = 0.5 * b * h;
            break;
        default:
            cout << "Invalid choice" << endl; return;
    }
    cout << "The area is : " << result << endl;
}

// ─────────────────────────────────────────────
// Task 12: Menu-driven simple calculator
// ─────────────────────────────────────────────
void task12() {
    int op;
    double a, b;
    cout << "Task 12: Simple Calculator" << endl;
    cout << "Enter first number: ";  cin >> a;
    cout << "Enter second number: "; cin >> b;
    cout << "1.Add  2.Subtract  3.Multiply  4.Divide\nEnter choice: ";
    cin >> op;
    switch (op) {
        case 1: cout << "Result: " << a + b << endl; break;
        case 2: cout << "Result: " << a - b << endl; break;
        case 3: cout << "The Multiplication of " << a << " and " << b << " is: " << a * b << endl; break;
        case 4:
            if (b != 0) cout << "Result: " << a / b << endl;
            else        cout << "Error: Division by zero" << endl;
            break;
        default: cout << "Invalid choice" << endl;
    }
}

// ─────────────────────────────────────────────
// Main — run all tasks
// ─────────────────────────────────────────────
int main() {
    task1();  cout << endl;
    task2();  cout << endl;
    task3();  cout << endl;
    task4();  cout << endl;
    task5();  cout << endl;
    task6();  cout << endl;
    task7();  cout << endl;
    task8();  cout << endl;
    task9();  cout << endl;
    task10(); cout << endl;
    task11(); cout << endl;
    task12(); cout << endl;
    return 0;
}
