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
        long double a[10000000];//this array is causing segment faults
        long double b[10000000];//so is this one
        for(int i = 0; i < 60; i++){
        for(long  i = 0; i < 10000001; i++){
            a[i] = 1;
        }
        for(long i = 0; i < 100000001; i++){
            b[i] = a[i];
        }
        }
        time(&end);
        double time_taken = double(end - start);
        cout << "The time taken for the memory benchmark is  " << time_taken <<  " seconds" << endl;
    }

    void hard_drive_benchmark(){
        time_t start, end; 
        time(&start);
        ofstream file;
        file.open("filetoopen.txt");
        char *memory;
        for(long long i; i < 1000000001; i++){
            char j = '2';
            memory = new char;
            file.write(memory, sizeof(4));
        }
        file.close();
        ifstream newfile;
        newfile.open("filetoopen.txt");
        while(!newfile.eof()){
            newfile.read(memory,sizeof(4));
        }
        file.close();
        time(&end);
        double time_taken = double(end - start);
        cout << "The time taken for the memory benchmark is  " << time_taken <<  " seconds" << endl;
    }


int main(){

    integer_benchmark();
    floating_point_benchmark();
    memory_benchmark();
    hard_drive_benchmark();
    return 0;

}
