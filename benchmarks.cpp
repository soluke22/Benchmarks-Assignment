#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
using namespace std;

class benchmarks
{
    public: 
    void integer_benchmark(){
      double sum;
      sum = 0;
      for(double i = 0; i < 100000000000;i++){
      sum += 1;
      }         
      sum = 1;
      for(double i = 0; i < 50000000000;i++){
        sum *= 2;
      }
      sum = 100000000002;
      for(double i = 0; i < 20000000000;i++){
        sum /= 2;
      }
    }
};

int main(){

    benchmarks test;
    time_t start, end; 
    time(&start); 
    test.integer_benchmark();
    time(&end); 
    double time_taken = double(end - start);
    cout << "The time taken for the integer benchmark is " << time_taken << endl;
    return 0;
}
