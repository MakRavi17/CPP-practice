#include<iostream>
#include<cmath>
using namespace std;

string isPrime(int n){

    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0){
            return "false";
        }
    }
    return "true";
}

int main(){
    
    int num;

    string ans = isPrime(77);
    cout<<ans;
    
    return 0;
}

// #include <iostream>
// #include <cmath>  // Include cmath for sqrt function
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return false;  // Numbers less than or equal to 1 are not prime
//     if (n == 2 || n == 3) return true;  // 2 and 3 are prime numbers

//     for (int i = 2; i <= sqrt(n); i++) {  // Loop from 2 to sqrt(n)
//         if (n % i == 0) {
//             return false;  // Return false if n is divisible by any i
//         }
//     }
//     return true;  // Return true if no divisors were found
// }

// int main() {
//     int num = 77;  // Number to check for primality

//     if (isPrime(num)) {
//         cout << num << " is a prime number." << endl;
//     } else {
//         cout << num << " is not a prime number." << endl;
//     }

//     return 0;
// }
