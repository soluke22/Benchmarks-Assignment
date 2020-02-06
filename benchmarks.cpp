#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;



class benchmarks
{
    public: 
    void integer_benchmark(){
      long sum;
      sum = 0;
      for(long i = 0; i < pow(10,11);i++){
      sum += 1;
      }         
      sum = 0;
      for(long i = 0; i < 5*(pow(10,10));i++){
        sum *= 2;
      }
      sum = pow(10,11);
      for(long  i = 0; i < 2*(pow(10,10));i++){
        sum /= 2;
      }
    }
};

int main(){
    using namespace std::chrono;
    benchmarks test;
    auto start = high_resolution_clock::now();
    test.integer_benchmark();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "The run time is " << duration.count() << endl;
}
