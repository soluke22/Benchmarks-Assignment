#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
using namespace std;

    void integer_benchmark(){
        time_t start, end; 
        time(&start); 
        long long sum;
        sum = 0;
        for(long i = 0; i < 100000000001;i++){
        sum += 1;
        }         
        sum = 1;
        for(long i = 0; i < 50000000001;i++){
            sum *= 2;
        }
        sum = 100000000002;
        for(long i = 0; i < 20000000001;i++){
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
        for(long double i = 0; i < 100000000001;i++){
        sum += 1;
        }         
        sum = 1;
        for(long double i = 0; i < 50000000001;i++){
            sum *= 2;
        }
        sum = 100000000002;
        for(long double i = 0; i < 20000000001;i++){
            sum /= 2;
        }
        time(&end); 
        double time_taken = double(end - start);
        cout << "The time taken for the floating benchmark is  " << time_taken << endl;
    }

    void memory_benchmark(){
        time_t start, end; 
        time(&start);
        int a[5000000000];
        int b[5000000000];
        for(long long i = 0; i < 5000000001; i++){
            a[i] = 2;
        }
        for(long long i = 0; i < 5000000001; i++){
            a[i] = a[i];
        }
        time(&end);
        double time_taken = double(end - start);
        cout << "The time taken for the memory benchmark is  " << time_taken << endl;
    }


int main(){

    integer_benchmark();
    floating_point_benchmark();
    memory_benchmark();
    return 0;
}
