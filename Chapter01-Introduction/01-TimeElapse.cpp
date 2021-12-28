  /*! cpp data structure 
   *  To measure the time spend of a c++ application
   *  by using the chrono library 
   *  tested on Ubuntu 18.04
   */
#include <iostream>
#include <chrono>
#include <unistd.h>
 
using namespace std;

int factorial(int n){
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    auto start = chrono::steady_clock::now();
    size_t i{};
    cin>>i;
 
    //the main body of the application
    {
        int iReturn=factorial(i);
        cout<<"the factorial of " <<i<< " is \t"<<iReturn<<"\n";
    }
    auto end = chrono::steady_clock::now();
 
    cout << "time spent in nanoseconds: \t"
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
        << " ns" << endl;
    cout << "time spent time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " µs" << endl;
    cout << "time spent time in milliseconds: "
        << chrono::duration_cast<chrono::milliseconds>(end - start).count()
        << " ms" << endl;
    cout << "time spent time in seconds: "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " sec"<<"\n";
 
    start = chrono::steady_clock::now();
    //the main body of the application
    {
        int iReturn{1};
        for (size_t j=1; j<=i; j++) iReturn*=j;
        cout<<"the factorial of " <<i<< " is "<<iReturn<<endl;
    }
    end = chrono::steady_clock::now();
 
    cout << "time spent in nanoseconds: "
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
        << " ns" << endl;
    cout << "time spent time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " µs" << endl;
    cout << "time spent time in milliseconds: "
        << chrono::duration_cast<chrono::milliseconds>(end - start).count()
        << " ms" << endl;
    cout << "time spent time in seconds: "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " sec"<<endl;
    return 0;
}