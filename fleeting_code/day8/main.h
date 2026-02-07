#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <sstream>
using namespace std;

class IDrawable {
public:
    virtual string draw() const = 0;
};
