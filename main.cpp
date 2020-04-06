#include <QCoreApplication>

#include <iostream>
#include "calculator.h"

Calc * calc;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    calc = new Calc;
    char s1[10],s2[10];


    cout << "String 1"<<endl;
    scanf ("%s",s1);
    calc->input1 = s1;
    cout << "Repeat input to verify: " << calc->input1<<endl;
    cout << "Number of characters in input: " << calc->input1.length() <<endl;


    cout << "\nString 2"<<endl;
    scanf ("%s",s2);
    calc->input2 = s2;
    cout << "Repeat input to verify: " << calc->input1<<endl;
    cout << "Number of characters in input: " << calc->input2.length() <<endl;

    cout << "\nGateType" <<endl;
    scanf("%d", &calc->gateType);
    cout << "Repeat input to verify: " << calc->gateType <<endl;


    calc->calculateOutput(calc->input1,calc->input2,calc->gateType);
    cout << "\nOutput: " << calc->output <<endl;


}
