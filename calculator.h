#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <QVector>
using namespace std;

class Calc {

public:

    Calc();

    //methods
    void calculateOutput(string in1,string in2,int type);
    void str2int(string tempstr, int inputNr);
    void inputBad();

    ~Calc();

    //attributes
    string input1,input2,output,errormessage;
    vector<int> IN1;
    vector<int> IN2;
    bool badinput;
    int gateType;
    int errorType;
};
#endif // CALCULATOR_H
