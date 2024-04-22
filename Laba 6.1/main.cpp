#include "Array.h"
#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Size of array: ";
    cin >> size;

    ArrayProcessor processor(size);

    processor.fillRandom(size);
    processor.printInitialArray();
    processor.process(processor.getInputArray());
    processor.printResult();

    return 0;
}