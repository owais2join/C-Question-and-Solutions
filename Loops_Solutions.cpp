// ============================================================
//  Loops Lab Solutions (C++)
// ============================================================

#include <iostream>
using namespace std;

// ─────────────────────────────────────────────
// Task 1: Even or Odd
// ─────────────────────────────────────────────
void task1() {
    int n;
    cout << "Task 1: Enter a number: ";
    cin >> n;
    cout << n << " is " << (n % 2 == 0 ? "even" : "odd") << endl;
}

// ─────────────────────────────────────────────
// Task 2: Positive or Negative
// ─────────────────────────────────────────────
void task2() {
    int n;
    cout << "Task 2: Enter a number: ";
    cin >> n;
    if (n > 0)       cout << n << " is positive" << endl;
    else if (n < 0)  cout << n << " is negative" << endl;
    else             cout << "The number is zero" << endl;
}

// ─────────────────────────────────────────────
// Task 3: Consonant or Vowel
// ─────────────────────────────────────────────
void task3() {
    char ch;
    cout << "Task 3: Enter a character: ";
    cin >> ch;
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << ch << " is a vowel" << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is a consonant" << endl;
    else
        cout << "Not an alphabet" << endl;
}

// ─────────────────────────────────────────────
// Task 4: Read 10 numbers — sum, average, highest, lowest
// ─────────────────────────────────────────────
void task4() {
    const int COUNT = 10;
    int nums[COUNT];
    cout << "Task 4: Enter 10 numbers:" << endl;
    for (int i = 0; i < COUNT; i++) {
        cout << "  Number " << i + 1 << ": ";
        cin >> nums[i];
    }
    int sum = 0, high = nums[0], low = nums[0];
    for (int i = 0; i < COUNT; i++) {
        sum += nums[i];
        if (nums[i] > high) high = nums[i];
        if (nums[i] < low)  low  = nums[i];
    }
    cout << "Sum     = " << sum << endl;
    cout << "Average = " << (double)sum / COUNT << endl;
    cout << "Highest = " << high << endl;
    cout << "Lowest  = " << low  << endl;
}

// ─────────────────────────────────────────────
// Task 5: Power multiplication table of a given integer
// ─────────────────────────────────────────────
void task5() {
    int base, rows;
    cout << "Task 5: Enter base number: ";  cin >> base;
    cout << "Enter number of rows: ";       cin >> rows;
    cout << "Power Multiplication Table:" << endl;
    long long power = 1;
    for (int i = 0; i <= rows; i++) {
        cout << base << "^" << i << " = " << power << endl;
        power *= base;
    }
}

// ─────────────────────────────────────────────
// Task 6: N terms of odd natural numbers and their sum
// ─────────────────────────────────────────────
void task6() {
    int n;
    cout << "Task 6: Input number of terms: ";
    cin >> n;
    int sum = 0, num = 1;
    cout << "The odd numbers are :";
    for (int i = 0; i < n; i++) {
        cout << num;
        if (i < n - 1) cout << " ";
        sum += num;
        num += 2;
    }
    cout << endl;
    cout << "The Sum of odd Natural Number upto " << n << " terms : " << sum << endl;
}

// ─────────────────────────────────────────────
// Task 7: N terms of even natural numbers and their sum
// ─────────────────────────────────────────────
void task7() {
    int n;
    cout << "Task 7: Input number of terms: ";
    cin >> n;
    int sum = 0, num = 2;
    cout << "The even numbers are :";
    for (int i = 0; i < n; i++) {
        cout << num;
        if (i < n - 1) cout << " ";
        sum += num;
        num += 2;
    }
    cout << endl;
    cout << "The Sum of even Natural Number upto " << n << " terms : " << sum << endl;
}

// ─────────────────────────────────────────────
// Task 8: N terms of square natural numbers and their sum
// ─────────────────────────────────────────────
void task8() {
    int n;
    cout << "Task 8: Input the number of terms: ";
    cin >> n;
    int sum = 0;
    cout << "The square natural upto " << n << " terms are :";
    for (int i = 1; i <= n; i++) {
        cout << i * i;
        if (i < n) cout << " ";
        sum += i * i;
    }
    cout << endl;
    cout << "The Sum of Square Natural Number upto " << n << " terms = " << sum << endl;
}

// ─────────────────────────────────────────────
// Task 9: First N terms of Fibonacci series
// ─────────────────────────────────────────────
void task9() {
    int n;
    cout << "Task 9: Input number of terms to display: ";
    cin >> n;
    cout << "Here is the Fibonacci series upto to " << n << " terms :" << endl;
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a;
        if (i < n - 1) cout << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

// ─────────────────────────────────────────────
// Task 10: Count digits in a number
// ─────────────────────────────────────────────
void task10() {
    long long n;
    cout << "Task 10: Enter a number: ";
    cin >> n;
    if (n == 0) { cout << "Number of digits: 1" << endl; return; }
    n = (n < 0) ? -n : n;
    int count = 0;
    while (n > 0) { count++; n /= 10; }
    cout << "Number of digits: " << count << endl;
}

// ─────────────────────────────────────────────
// Task 11: First and last digit of a number
// ─────────────────────────────────────────────
void task11() {
    long long n;
    cout << "Task 11: Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    int last = n % 10;
    long long temp = n;
    while (temp >= 10) temp /= 10;
    int first = (int)temp;
    cout << "First digit: " << first << endl;
    cout << "Last digit:  " << last  << endl;
}

// ─────────────────────────────────────────────
// Task 12: Sum of first and last digit
// ─────────────────────────────────────────────
void task12() {
    long long n;
    cout << "Task 12: Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    int last = n % 10;
    long long temp = n;
    while (temp >= 10) temp /= 10;
    int first = (int)temp;
    cout << "Sum of first and last digit: " << first + last << endl;
}

// ─────────────────────────────────────────────
// Task 13: Swap first and last digit
// ─────────────────────────────────────────────
void task13() {
    long long n;
    cout << "Task 13: Enter a number: ";
    cin >> n;
    bool neg = (n < 0);
    if (neg) n = -n;

    int last = n % 10;
    int digits = 0;
    long long temp = n;
    while (temp > 0) { digits++; temp /= 10; }

    long long divisor = 1;
    for (int i = 1; i < digits; i++) divisor *= 10;
    int first = n / divisor;

    // Build swapped number
    long long result = last * divisor
                     + (n % divisor - n % (divisor / (digits > 1 ? 10 : 1) % divisor > 0 ? divisor / 10 : 1))
                     + first;
    // Cleaner approach:
    long long middle = n % divisor / 10;  // everything except first and last
    result = (long long)last * divisor + middle * 10 + first;

    if (neg) result = -result;
    cout << "After swapping first and last digit: " << result << endl;
}

// ─────────────────────────────────────────────
// Task 14: Sum of digits
// ─────────────────────────────────────────────
void task14() {
    long long n;
    cout << "Task 14: Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    int sum = 0;
    while (n > 0) { sum += n % 10; n /= 10; }
    cout << "Sum of digits: " << sum << endl;
}

// ─────────────────────────────────────────────
// Task 15: Product of digits
// ─────────────────────────────────────────────
void task15() {
    long long n;
    cout << "Task 15: Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    long long product = 1;
    while (n > 0) { product *= n % 10; n /= 10; }
    cout << "Product of digits: " << product << endl;
}

// ─────────────────────────────────────────────
// Task 16: Power of a number using for loop
// ─────────────────────────────────────────────
void task16() {
    long long base, exp;
    cout << "Task 16: Enter base: ";     cin >> base;
    cout << "Enter exponent: ";          cin >> exp;
    long long result = 1;
    for (long long i = 0; i < exp; i++) result *= base;
    cout << base << "^" << exp << " = " << result << endl;
}

// ─────────────────────────────────────────────
// Task 17: All prime numbers from 1 to n
// ─────────────────────────────────────────────
void task17() {
    int n;
    cout << "Task 17: Enter n: ";
    cin >> n;
    cout << "Prime numbers from 1 to " << n << ":" << endl;
    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) { prime = false; break; }
        }
        if (prime) cout << i << " ";
    }
    cout << endl;
}

// ─────────────────────────────────────────────
// Main
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
    task13(); cout << endl;
    task14(); cout << endl;
    task15(); cout << endl;
    task16(); cout << endl;
    task17(); cout << endl;
    return 0;
}
