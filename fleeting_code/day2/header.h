#pragma once

#include <iostream>
#include <string>
#include <utility>
#include <memory>

using namespace std;
void printByValue(int x);
void printByLvalueRef(int& x);
void printByConstLvalueRef(const int& x);
void printByRvalueRef(int&& x);

unique_ptr<int> makeUniqueInt(int value);
shared_ptr<int> makeSharedInt(int value);
unique_ptr<double[]> makeUniqueDoubleArray(int size, double initValue);

