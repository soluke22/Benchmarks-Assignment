#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
using namespace std;

class benchmarks
{
    public: 
    void integer_benchmark(){
        time_t start, end; 
        time(&start); 
        long long sum;
        sum = 0;
        for(long i = 0; i < 100000000000;i++){
        sum += 1;
        }         
        sum = 1;
        for(long i = 0; i < 50000000000;i++){
            sum *= 2;
        }
        sum = 100000000002;
        for(long i = 0; i < 20000000000;i++){
            sum /= 2;
        }
        time(&end); 
        double time_taken = double(end - start);
        cout << "The time taken for the integer benchmark is  " << time_taken << endl;
    }

    void floating_point_benchmark(){
        time_t start, end; 
        time(&start);
        long double sum;
        sum = 0;
        for(long double i = 0; i < 100000000000;i++){
        sum += 1;
        }         
        sum = 1;
        for(long double i = 0; i < 50000000000;i++){
            sum *= 2;
        }
        sum = 100000000002;
        for(long double i = 0; i < 20000000000;i++){
            sum /= 2;
        }
        time(&end); 
        double time_taken = double(end - start);
        cout << "The time taken for the floating benchmark is  " << time_taken << endl;
    }
};

int main(){

    benchmarks benchmark;
    benchmark.integer_benchmark();
    benchmark.floating_point_benchmark();
    return 0;
}
