#ifndef TEMP_H
#define TEMP_H
#include <iostream>
using namespace std;


class temp
{
private:
    int far;
public:


    int getFar() const;
    void setFar();
    void convert_to_cel();
};

#endif // TEMP_H
