// #include<iostream>
// using namespace std;

// int num(int n){

//     if (n <=100)
//     {
//         cout<<n<<"\n";
//         num(n+3);
//     }
    
// }

// int main(){
    
//     int n = 1;
//     num(n);
    

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
             cout<<"*";
        }

       

        cout<<endl;
    }
    
   

    

    return 0;
}