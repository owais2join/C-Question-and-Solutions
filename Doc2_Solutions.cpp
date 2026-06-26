#include <iostream>
#include <climits>
using namespace std;
void q1(){
	
	int x;
	
	x=7+3*6/2-1;
	cout<<"Q1(a)"<<x<<endl;
	
	x=2%2+2*2-2/2;
	cout<<"Q1(b)"<<x<<endl;
	
	x=(3*9*(3+(9*3/(3))));
	cout<<"Q1(c)"<<x<<endl;
}

void q2(){
	
	double a,b;
	cout<<"Q2: Enter Two Numbers"<<endl;
	cin>>a>>b;
	cout<<"Sum: "<<a+b<<endl;
	cout<<"Product: "<<a*b<<endl;
	cout<<"difference: "<<a-b<<endl;
	cout<<"Quotient: "<<a/b<<endl;
	cout<<"Remainder"<<(int)a % (int)b<<endl;
	
}

void q3(){
	
	cout<<"Q3(a)"<<endl;
	cout<<"1 2 3 4"<<endl;
	
	cout<<"Q3(b)"<<endl;
	cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
	
	cout<<"Q3(c)"<<endl;
	cout<<1<<" ";
	cout<<2<<" ";
	cout<<3<<" ";
	cout<<4<<" ";
}

void q4(){
	
	int a,b;
	cout<<"Enter Numbers: "<<endl;
	cin>>a>>b;
	if(a>b) cout<<a<<" is Larger "<<endl;
	if(b>a) cout<<b<<" is Larger "<<endl;
	if(a==b) cout<<" The Numbers are Equal";

}

void q5(){
	
	int a,b,c;
	cout<<"Enter Numbers: "<<endl;
	cin>>a>>b>>c;
	cout<<a+b+c<<" The Sum"<<endl;
	cout<<a+b/c<<" The Average"<<endl;
	cout<<a*b*c<<" The Product"<<endl;
	int smallest=a; int largest=a;
	if(b>smallest) largest=b;
	if(c>smallest)	largest=c;
	if(b<largest)	smallest=b;
	if(c<largest)	smallest=c;
	cout<<largest<<"Largest Number"<<endl;
	cout<<smallest<<"Smallest Number"<<endl;	
}

void q6(){
	
	double radius;
	double const pi=3.14159;
	cout<<"Q6: Enter Radius: "<<endl;
	cin>>radius;
	cout<<"Diameter: "<<2*radius<<endl;
	cout<<"Circumstances: "<<2*pi*radius<<endl;
	cout<<"Area: "<<pi*radius*radius<<endl;
	
}

void q7(){
	
	int n;
	cout<<"Enter an Integer"<<endl;
	cin>>n;
	cout<<n<<" is "<<(n%2==0 ? "Even " : "odd ")<<endl;
	
	
}

void q8(){
	
	int a,b;
	cout<<"Enter Numbers: ";
	cin>>a>>b;
	if(a%b==0){
		cout<<"Number is Divisible";
	}
	else  {
		cout<<"It is not";
}
}

void q9() {
    double weight, height;
    int choice;
    cout << "Q9: BMI Calculator" << endl;
    cout << "1. kg / meters   2. pounds / inches\nChoice: ";
    cin >> choice;
    double bmi;
    if (choice == 1) {
        cout << "Weight (kg): ";    cin >> weight;
        cout << "Height (m): ";     cin >> height;
        bmi = weight / (height * height);
    } else {
        cout << "Weight (lbs): ";   cin >> weight;
        cout << "Height (inches): "; cin >> height;
        bmi = (weight * 703) / (height * height);
    }
    cout << "Your BMI: " << bmi << endl;
    if (bmi < 18.5)       cout << "Category: Underweight" << endl;
    else if (bmi <= 24.9) cout << "Category: Normal" << endl;
    else if (bmi <= 29.9) cout << "Category: Overweight" << endl;
    else                  cout << "Category: Obese" << endl;
}

void q10() {
    long long n;
    cout << "Q10: Enter an integer: ";
    cin >> n;
    if (n < 0) n = -n;
    int count = 0;
    if (n == 0 && 0 == 5) count++;
    while (n > 0) {
        if (n % 10 == 5) count++;
        n /= 10;
    }
    cout << "Number of 5s: " << count << endl;
}


void q11() {
    int count;
    cout << "Q11: Enter count followed by that many integers:" << endl;
    cin >> count;
    int sum = 0, val;
    for (int i = 0; i < count; i++) {
        cin >> val;
        sum += val;
    }
    cout << "Sum = " << sum << endl;
}

void q12() {
    int n, sum = 0, count = 0;
    cout << "Q12: Enter integers (9999 to stop):" << endl;
    cin >> n;
    while (n != 9999) {
        sum += n;
        count++;
        cin >> n;
    }
    if (count > 0)
        cout << "Average = " << (double)sum / count << endl;
    else
        cout << "No values entered." << endl;
}



void q13() {
    int count;
    cout << "Q13: Enter count followed by that many integers:" << endl;
    cin >> count;
    int val, smallest;
    cin >> smallest;
    for (int i = 1; i < count; i++) {
        cin >> val;
        if (val < smallest) smallest = val;
    }
    cout << "Smallest = " << smallest << endl;
}



void q14() {
    int sum = 0;
    for (int i = 2; i <= 30; i += 2)
        sum += i;
    cout << "Q14: Sum of even integers (2 to 30) = " << sum << endl;
}


// Q15: Product of odd integers from 1 to 15

void q15() {
    long long product = 1;
    for (int i = 1; i <= 15; i += 2)
        product *= i;
    cout << "Q15: Product of odd integers (1 to 15) = " << product << endl;
}



void q16() {
    cout << "Q16: Factorials" << endl;
    cout << "n\tn!" << endl;
    long long fact = 1;
    for (int i = 1; i <= 5; i++) {
        fact *= i;
        cout << i << "\t" << fact << endl;
    }
}



void q17() {
    double a, b;
    char op;
    cout << "Q17: Enter: number operator number (e.g. 5 + 3): ";
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << "Result = " << a + b << endl; break;
        case '-': cout << "Result = " << a - b << endl; break;
        case '*': cout << "Result = " << a * b << endl; break;
        case '/':
            if (b != 0) cout << "Result = " << a / b << endl;
            else        cout << "Error: Division by zero" << endl;
            break;
        default: cout << "Invalid operator" << endl;
    }
}



void q18() {
    int rows = 5;
    cout << "Q18 Pattern A:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "Q18 Pattern B:" << endl;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "Q18 Pattern C:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int s = rows - i; s > 0; s--)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    cout << "Q18 Pattern D:" << endl;
    for (int i = rows; i >= 1; i--) {
        for (int s = rows - i; s > 0; s--)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}


void q19() {
    int n;
    cout << "Q19: Enter number of students (max 10): ";
    cin >> n;
    if (n > 10) { cout << "Maximum is 10." << endl; n = 10; }
    double totalGPA = 0, gpa;
    for (int i = 1; i <= n; i++) {
        cout << "  GPA of student " << i << ": ";
        cin >> gpa;
        totalGPA += gpa;
    }
    cout << "Class Average GPA = " << totalGPA / n << endl;
}


void q20() {
    int n;
    cout << "Q20: Enter a number: ";
    cin >> n;
    if (n < 2) { cout << n << " is not prime." << endl; return; }
    bool prime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { prime = false; break; }
    }
    cout << n << (prime ? " is prime." : " is not prime.") << endl;
}


int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

void q21() {
    int a, b;
    cout << "Q21: Enter two integers: ";
    cin >> a >> b;
    int lcm = (a / gcd(a, b)) * b;
    cout << "LCM(" << a << ", " << b << ") = " << lcm << endl;
}



void q22() {
    long long base, exp;
    cout << "Q22: Enter base and exponent: ";
    cin >> base >> exp;
    long long result = 1;
    for (long long i = 0; i < exp; i++) result *= base;
    cout << base << "^" << exp << " = " << result << endl;
}



void q23() {
    long long n;
    cout << "Q23: Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    int sum = 0;
    while (n > 0) { sum += n % 10; n /= 10; }
    cout << "Sum of digits = " << sum << endl;
}


void q24() {
    int n;
    cout << "Q24: Enter a number: ";
    cin >> n;
    long long fact = 1;
    for (int i = 2; i <= n; i++) fact *= i;
    cout << n << "! = " << fact << endl;
}


void q25() {
    int num, start, end;
    cout << "Q25: Enter a number: ";         cin >> num;
    cout << "Enter the starting point: ";    cin >> start;
    cout << "Enter the ending point: ";      cin >> end;

    int first = start;
    if (first % num != 0) first += (num - first % num);

    cout << "Multiples: ";
    bool comma = false;
    for (int i = first; i <= end; i += num) {
        if (comma) cout << ", ";
        cout << i;
        comma = true;
    }
    cout << endl;
}



int main() {
    q1();  cout << endl;
    q2();  cout << endl;
    q3();  cout << endl;
    q4();  cout << endl;
    q5();  cout << endl;
    q6();  cout << endl;
    q7();  cout << endl;
    q8();  cout << endl;
    q9();  cout << endl;
    q10(); cout << endl;
    q11(); cout << endl;
    q12(); cout << endl;
    q13(); cout << endl;
    q14(); cout << endl;
    q15(); cout << endl;
    q16(); cout << endl;
    q17(); cout << endl;
    q18(); cout << endl;
    q19(); cout << endl;
    q20(); cout << endl;
    q21(); cout << endl;
    q22(); cout << endl;
    q23(); cout << endl;
    q24(); cout << endl;
    q25(); cout << endl;
    return 0;
}
