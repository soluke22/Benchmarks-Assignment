#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
using namespace std;

    void integer_benchmark(){
        time_t start, end; 
        time(&start); 
        long sum;
        for(long i = 0; i < 100000000001;i++){
          sum = 1+1;
        }         
        for(long i = 0; i < 50000000001;i++){
          sum = 2*2;
        }
        for(long i = 0; i < 20000000001;i++){
          sum = 2/2;
        }
        time(&end); 
        double time_taken = double(end - start);
        cout << "The time taken for the integer benchmark is  " << time_taken <<  " seconds" << endl;
    }

    void floating_point_benchmark(){
        time_t start, end; 
        time(&start);
        long double sum;
        for(long double i = 0; i < 100000000001;i++){
        sum = 1+1;
        }         
        for(long double i = 0; i < 50000000001;i++){
            sum = 2*2;
        }
        for(long double i = 0; i < 20000000001;i++){
            sum = 2/2;
        }
        time(&end); 
        double time_taken = double(end - start);
        cout << "The time taken for the floating benchmark is  " << time_taken <<  " seconds" << endl;
    }

    void memory_benchmark(){
        time_t start, end; 
        time(&start);
        long long a[5000000000];
        long long b[5000000000];
        for(long long i = 0; i < 5000000001; i++){
            a[i] = 2;
        }
        for(long long i = 0; i < 5000000001; i++){
            b[i] = a[i];
        }
        time(&end);
        double time_taken = double(end - start);
        cout << "The time taken for the memory benchmark is  " << time_taken <<  " seconds" << endl;
    }

    void hard_drive_benchmark(){
        ofstream file;
        file.open("filetoopen.txt");
        for(long long i; i < 10; i++){
            file << i << endl;
        }
        file.close();

    }


int main(){

    //integer_benchmark();
    //floating_point_benchmark();
    //memory_benchmark();
    hard_drive_benchmark();
    return 0;

}
