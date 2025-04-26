#pragma once
#include <iostream>
using namespace std;

inline void getTwoValues(int &begin, int &end) {
    int possibleBegin, possibleEnd;
    cin >> possibleBegin >> possibleEnd;
    while (possibleBegin >= possibleEnd) {
        cout << "Please enter two integers where the first is less than the second: ";
        cin >> possibleBegin >> possibleEnd;
    }
    begin = possibleBegin;
    end = possibleEnd;
}

inline bool isPrime(int begin) {
    bool isPrime = true;
    for (int i = 2; i <= begin / 2; i++) {
        if (begin % i == 0) {
            isPrime = false;
        }
    }
    return isPrime;
}

inline int getNextPrime(int begin) {
    if (isPrime(begin)) {
        begin++;
    }
    while (!isPrime(begin)) {
        begin++;
    }
    return begin;
}


inline int getPrevPrime(int end) {
    if (isPrime(end)) {
        end--;
    }

    while (!isPrime(end)) {
        end--;
    }
    return end;
}
