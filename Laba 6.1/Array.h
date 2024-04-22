#ifndef LABA_6_1_ARRAY_H
#define LABA_6_1_ARRAY_H

class ArrayProcessor {
private:
    double* resultArray;
    int* inputArray;
    int size;

public:
    ArrayProcessor(int size);
    ~ArrayProcessor();
    void fillRandom(int size);
    double* process(const int* inputArray);
    void printInitialArray();
    void printResult();
    int *getInputArray() const;
    int getSize() const;
};

#endif
