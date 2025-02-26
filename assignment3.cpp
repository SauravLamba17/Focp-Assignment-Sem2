#include <iostream>
#include <string>
#include <cstdarg>
using namespace std;



// 1. max num  // yeh max
int maxNumber(int a, int b) {  
   if(a > b)  
      return a;  
   else  
      return b;  
}  


// 2. fact calc  // yeh fact
int factorial(int n)
{
    if(n < 0) return -1;  // galat
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
         f = f * i;
    }
    return f;
}


// 3. rev num  // ulta
int reverseNumber(int n) {   
    int rev = 0;
    while(n > 0)
    {
         rev = rev * 10 + (n % 10);
         n = n / 10;
    }
    return rev;
}


// 4. digit sum  // jod
int sumOfDigits(int n)
{
    int sum = 0;
    while(n > 0)
    {
         sum += n % 10;
         n = n / 10;
    }
    return sum;
}


// 5. pal check  // simple
bool isPalindrome(int n) {  
    return (n == reverseNumber(n));
}


// 6. fib iter  // iter fib
int fibonacciIterative(int n)
{
    if(n <= 1) 
         return n;
    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= n; i++)
    {
         c = a + b;
         a = b;
         b = c;
    }
    return b;
}


// 7. gcd iter  // simple gcd
int gcdIterative(int a, int b)
{
    while(b != 0)
    {
         int temp = b;
         b = a % b;
         a = temp;
    }
    return a;
}


// 8. print funcs  // yeh print
void print(string s) {  cout << s << endl; }
void print(int x) {  cout << x << endl; }
void print(string s, int x) {  cout << s << " " << x << endl; }


// 9. calc class  // Calculator
class Calculator {
public:
    int sum(int a, int b) { return a + b; }
    double sum(double a, double b, double c) { return a + b + c; }
    float sum(int a, float b) { return a + b; }
};


// 10. mult funcs  // multiply
int multiply(int a, int b) { return a * b; }
double multiply(int a, double b) { return a * b; }
float multiply(float a, float b, float c) { return a * b * c; }


// 11. greet funcs  // namaste
void greet() { cout << "Hello!" << endl; }
void greet(string name) { cout << "Hello, " << name << "!" << endl; }
void greet(string name, int age) { cout << "Hello, " << name << "! You are " << age << " yrs." << endl; }


// 12. area funcs  // area
int area(int a) { return a * a; }     // square
int area(int a, int b) { return a * b; }  // rect
double area(double r) { return 3.14159 * r * r; }  // circle


// 13. concat funcs  // jodo
string concat(string a, string b) { return a + b; }
string concat(int a, string b) { return to_string(a) + b; }


// 14. power iter  // power
int power(int a, int b)
{
    int res = 1;
    for (int i = 0; i < b; i++)
    {
         res *= a;
    }
    return res;
}
double power(double a, int b)
{
    double res = 1;
    for (int i = 0; i < b; i++)
    {
         res *= a;
    }
    return res;
}


// 15. varSum  // var jod
int varSum(int cnt, ...) {
    va_list args;
    va_start(args, cnt);
    int s = 0;
    for (int i = 0; i < cnt; i++) {
         s += va_arg(args, int);
    }
    va_end(args);
    return s;
}


// 16. var max  // var max
int varFindLargest(int cnt, ...) {
    va_list args;
    va_start(args, cnt);
    int maxVal = va_arg(args, int);
    for (int i = 1; i < cnt; i++) {
         int num = va_arg(args, int);
         if(num > maxVal)
             maxVal = num;
    }
    va_end(args);
    return maxVal;
}


// 17. var concat  // var jod str
string varConcatStrings(int cnt, ...) {
    va_list args;
    va_start(args, cnt);
    string res = "";
    for (int i = 0; i < cnt; i++) {
         char* str = va_arg(args, char*);
         res += str;
    }
    va_end(args);
    return res;
}


// 18. gcd rec  // rec gcd
int gcdRec(int a, int b) {  
    if(b == 0)
         return a;
    else
         return gcdRec(b, a % b);
}


// 19. fact rec  // rec fact
int factorialRec(int n)
{
    if(n < 0) return -1;
    if(n <= 1) return 1;
    return n * factorialRec(n - 1);
}


// 20. fib rec  // rec fib
int fibonacciRec(int n)
{
    if(n <= 1) return n;
    return fibonacciRec(n - 1) + fibonacciRec(n - 2);
}


// 21. str rev rec  // rec str ulta
string reverseStringRec(string s)
{
    if(s.length() == 0) return "";
    return reverseStringRec(s.substr(1)) + s[0];
}


// 22. nat sum rec  // rec jod
int sumOfNaturalNumbersRec(int n)
{
    if(n <= 0) return 0;
    return n + sumOfNaturalNumbersRec(n - 1);
}


// 23. power rec  // rec power
int powerRec(int a, int exp)
{
    if(exp == 0) return 1;
    return a * powerRec(a, exp - 1);
}


// 24. swap  // bas swap
void swapNumbers(int &a, int &b)
{
    int temp = a;   a = b;   b = temp;
}


// 25. arr sum  // array jod
int sumArray(int arr[], int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
         s += arr[i];
    }
    return s;
}


// 26. arr max  // array max
int findMax(int arr[], int size)
{
    int maxVal = arr[0];
    for (int i = 1; i < size; i++)
    {
         if(arr[i] > maxVal)
              maxVal = arr[i];
    }
    return maxVal;
}


// 27. second max  // dusra max
void findSecondLargest(int arr[], int size, int &secMax)
{
    int max1 = arr[0];
    secMax = -1;
    for (int i = 1; i < size; i++)
    {
         if(arr[i] > max1)
         {
             secMax = max1;
             max1 = arr[i];
         }
         else if(arr[i] > secMax && arr[i] != max1)
         {
             secMax = arr[i];
         }
    }
}


// 28. gen fib  // dynamic fib
int* generateFibonacci(int n)
{
    int *fibArr = new int[n];
    fibArr[0] = 0;
    if(n > 1)
         fibArr[1] = 1;
    for (int i = 2; i < n; i++)
    {
         fibArr[i] = fibArr[i - 1] + fibArr[i - 2];
    }
    return fibArr;
}


// 29. disp studs  // show stud
struct Student {
    string name;
    int marks;
};
void displayStudents(Student arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
         cout << arr[i].name << " " << arr[i].marks << endl;
    }
}


// 30. dbl arr  // double arr
void doubleArrayFixed(int (&arr)[6])
{
    for (int i = 0; i < 6; i++)
    {
         arr[i] = arr[i] * 2;
    }
}


// main - code driverr
int main()
{
    cout << "maxNumber(5,10): " << maxNumber(5, 10) << endl;
    
    cout << "factorial(5): " << factorial(5) << endl;
    
    cout << "reverseNumber(1234): " << reverseNumber(1234) << endl;
    
    cout << "sumOfDigits(1234): " << sumOfDigits(1234) << endl;
    
    cout << "isPalindrome(121): " << isPalindrome(121) << endl;
    
    
    cout << "fibonacciIterative(7): " << fibonacciIterative(7) << endl;
    
    cout << "gcdIterative(48,18): " << gcdIterative(48, 18) << endl;
    
    
    print("Hello there!");  
    print(100);  
    print("Value:", 200);  
    
    
    Calculator calc;  
    cout << "calc.sum(3,4): " << calc.sum(3, 4) << endl;  
    
    
    cout << "multiply(3,4): " << multiply(3, 4) << endl;  
    cout << "multiply(3,2.5): " << multiply(3, 2.5) << endl;  
    cout << "multiply(1.0,2.0,3.0): " << multiply(1.0f, 2.0f, 3.0f) << endl;  
    
    
    greet();  
    greet("Alice");  
    greet("Bob", 25);  
    
    
    cout << "area(square 5): " << area(5) << endl;  
    cout << "area(rect 5,6): " << area(5, 6) << endl;  
    cout << "area(circle 3.0): " << area(3.0) << endl;  
    
    
    cout << "concat(\"Hi\",\"There\"): " << concat("Hi", "There") << endl;  
    cout << "concat(123,\"abc\"): " << concat(123, "abc") << endl;  
    
    
    cout << "power(2,3): " << power(2, 3) << endl;  
    cout << "power(2.0,3): " << power(2.0, 3) << endl;  
    
    
    cout << "varSum(4,1,2,3,4): " << varSum(4, 1, 2, 3, 4) << endl;  
    cout << "varFindLargest(4,5,3,9,2): " << varFindLargest(4, 5, 3, 9, 2) << endl;  
    cout << "varConcatStrings(3,\"Hi\",\" \",\"There\"): " << varConcatStrings(3, "Hi", " ", "There") << endl;  
    
    
    cout << "gcdRec(48,18): " << gcdRec(48, 18) << endl;  
    cout << "factorialRec(5): " << factorialRec(5) << endl;  
    cout << "fibonacciRec(7): " << fibonacciRec(7) << endl;  
    cout << "reverseStringRec(\"hello\"): " << reverseStringRec("hello") << endl;  
    cout << "sumOfNaturalNumbersRec(5): " << sumOfNaturalNumbersRec(5) << endl;  
    cout << "powerRec(2,3): " << powerRec(2, 3) << endl;  
    
    
    int arr1[] = {1,2,3,4,5};  
    cout << "sumArray: " << sumArray(arr1, 5) << endl;  
    cout << "findMax: " << findMax(arr1, 5) << endl;  
    int secMax;  
    findSecondLargest(arr1, 5, secMax);  
    cout << "second max: " << secMax << endl;  
    
    
    int* fibArr = generateFibonacci(10);  
    cout << "gen fib: ";  
    for(int i = 0; i < 10; i++)  
         cout << fibArr[i] << " ";  
    cout << endl;  
    delete [] fibArr;  
    
    
    Student studs[2] = { {"Alice", 90}, {"Bob", 85} };  
    displayStudents(studs, 2);  
    
    
    int fixArr[6] = {1,2,3,4,5,6};  
    doubleArrayFixed(fixArr);  
    cout << "dbl arr: ";  
    for(int i = 0; i < 6; i++)  
         cout << fixArr[i] << " ";  
    cout << endl;  
    
    
    return 0;
}