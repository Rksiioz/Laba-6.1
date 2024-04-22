#include "Array.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iostream>

using namespace std;

ArrayProcessor::ArrayProcessor(int size) {
    this->size = size;
    inputArray = new int[size];
    resultArray = new double[size * 4];
}

ArrayProcessor::~ArrayProcessor() {
    delete[] inputArray;
    delete[] resultArray;
}

void ArrayProcessor::fillRandom(int size) {
    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        inputArray[i] = rand() % 101 - 50;
    }
}

double* ArrayProcessor::process(const int* inputArray) {
    double sum = 0;
    double absolute_sum = 0;
    double max = inputArray[0];

    for (int i = 0; i < size; ++i) {
        sum += inputArray[i];
        absolute_sum += abs(inputArray[i]);

        if (inputArray[i] > max) {
            max = inputArray[i];
        }

        resultArray[i] = inputArray[i] + sqrt(abs(max * inputArray[size - 1]));

    }
    resultArray[size] = sum;
    resultArray[size + 1] = absolute_sum / size;

    return resultArray;
}


void ArrayProcessor::printInitialArray() {
    cout << "Initial array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << inputArray[i] << " ";
    }
    cout << endl;
}

void ArrayProcessor::printResult() {
    cout << "Array of result:" << endl;
    for (int i = 0; i < size + 2; ++i) {
        cout << resultArray[i] << " ";
    }
    cout << endl;
}

int ArrayProcessor::getSize() const {
    return size;
}

int *ArrayProcessor::getInputArray() const {
    return inputArray;
}
