// ============================================================
//  Nested Loops Lab Solutions — Pattern Printing (C++)
// ============================================================

#include <iostream>
using namespace std;

// ─────────────────────────────────────────────
// Task 1: Number pattern (0, 11, 222, ...)
// ─────────────────────────────────────────────
void task1() {
    int rows;
    cout << "Task 1: Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++)
            cout << i;
        cout << endl;
    }
}

// ─────────────────────────────────────────────
// Task 2: Descending number pattern (5, 44, 333, ...)
// ─────────────────────────────────────────────
void task2() {
    int rows;
    cout << "Task 2: Enter number of rows: ";
    cin >> rows;
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = rows - 1; j >= i; j--)
            cout << i;
        cout << endl;
    }
}

// ─────────────────────────────────────────────
// Task 3: Lowercase letter pattern (a, bb, ccc, ...)
// ─────────────────────────────────────────────
void task3() {
    int rows;
    cout << "Task 3: Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++)
            cout << (char)('a' + i);
        cout << endl;
    }
}

// ─────────────────────────────────────────────
// Task 4: Lowercase letter pattern — same as Task 3
//         (a, bb, ccc, dddd, ...) — repeated variant
// ─────────────────────────────────────────────
void task4() {
    int rows;
    cout << "Task 4: Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++)
            cout << (char)('a' + i);
        cout << endl;
    }
}

// ─────────────────────────────────────────────
// Task 5: Uppercase letter pattern (A, BB, CCC, ...)
// ─────────────────────────────────────────────
void task5() {
    int rows;
    cout << "Task 5: Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++)
            cout << (char)('A' + i);
        cout << endl;
    }
}

// ─────────────────────────────────────────────
// Task 6: Mixed case pattern
//         (a, bb, ccc then AAAA, BBBBB, CCCCCC)
// ─────────────────────────────────────────────
void task6() {
    int rows;
    cout << "Task 6: Enter number of rows (must be even): ";
    cin >> rows;
    int half = rows / 2;
    // First half: lowercase
    for (int i = 0; i < half; i++) {
        for (int j = 0; j <= i; j++)
            cout << (char)('a' + i);
        cout << endl;
    }
    // Second half: uppercase
    for (int i = 0; i < half; i++) {
        for (int j = 0; j <= (half + i); j++)
            cout << (char)('A' + i);
        cout << endl;
    }
}

// ─────────────────────────────────────────────
// Task 7: Sequential number triangle
//         1
//         2 3
//         4 5 6
//         7 8 9 10
// ─────────────────────────────────────────────
void task7() {
    int rows;
    cout << "Task 7: Enter number of rows: ";
    cin >> rows;
    int num = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num;
            if (j < i) cout << " ";
            num++;
        }
        cout << endl;
    }
}

// ─────────────────────────────────────────────
// Task 8: Centered asterisk diamond (half pyramid)
//     *
//    ***
//   *****
//  *******
// *********
// Requires 3 nested loops: spaces, stars, newline
// ─────────────────────────────────────────────
void task8() {
    int rows;
    cout << "Task 8: Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int s = rows - i; s > 0; s--)
            cout << " ";
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";
        cout << endl;
    }
}

// ─────────────────────────────────────────────
// Main
// ─────────────────────────────────────────────
int main() {
    task1(); cout << endl;
    task2(); cout << endl;
    task3(); cout << endl;
    task4(); cout << endl;
    task5(); cout << endl;
    task6(); cout << endl;
    task7(); cout << endl;
    task8(); cout << endl;
    return 0;
}
