#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//using namespace std;

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);    
    clock_t b = clock();

    int num_primes = 0;
    for (int a = 2; a < n; a++) {
        bool prime = true;

        for (int c = 2; c*c <= a; c++) {
             if(a % c == 0) {
                 prime = false;
                 break;
             }
         }

         if(prime) num_primes += 1;
    }

    std::cout << num_primes << std::endl;

    clock_t e = clock();
    double time_end = (double) (e-b)/CLOCKS_PER_SEC;
    std::cout << time_end << std::endl;
    return 0;
}

/*
MemTotal:       131586160 kB
MemFree:         71948768 kB

MemTotal:        12186904 kB
MemFree:          6825800 kB
how to code measure network bandwidth MPI
*/