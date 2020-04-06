#include "calculator.h"


Calc::Calc()                                                            // initialise attributes.
{                 
    this->input1 = "";
    this->input2 = "";
    this->output = "";
    this->badinput = false;
    this->errorType = 0;
    this->gateType = 0;
    this->IN1.clear();
    this->IN2.clear();
}

void Calc::calculateOutput(string in1, string in2, int type)
{
    this->input1 = in1;
    this->input2 = in2;
    this->gateType = type;

    if(this->gateType == 1){                                            //if gateType is OR gate

        str2int(this->input1,1);                                        //Convert Input string 1 to vector <int>
        str2int(this->input2,2);                                        //Convert Input string 2 to vector <int>

        if(this->IN1.size() != this->IN2.size()){                       //Test if input length is the same.
            this->badinput = true;
            this->errorType = 2;}

        if(this->badinput == true){                                     //If an input error has occured, notify user.
            inputBad();}

        if(this->badinput == false){                                    //If no error has occured, continue to calculate output.
            for(int step = 0 ; step < this->input1.size(); step ++){
                if((this->IN1[step] == 1)&&(this->IN2[step] == 1)){
                    this->output.append("1");}
                else {this->output.append("0");}
            }
        }
    }

    if(this->gateType == 2){                                            //if gateType is OR gate

        str2int(this->input1,1);                                        //Convert Input string 1 to vector <int>
        str2int(this->input2,2);                                        //Convert Input string 2 to vector <int>

        if(this->IN1.size() != this->IN2.size()){                       //Test if input length is the same.
            this->badinput = true;
            this->errorType = 2;}

        if(this->badinput == true){                                     //If an input error has occured, notify user.
            inputBad();}

        if(this->badinput == false){                                    //If no error has occured, continue to calculate output.
            for(int step = 0 ; step < this->input1.size(); step ++){
                if((this->IN1[step] == 0)&&(this->IN2[step] == 0)){
                    this->output.append("0");}
                else {this->output.append("1");}
            }
        }
    }

    if(this->gateType == 3){                                            //if gateType is NAND gate

        str2int(this->input1,1);                                        //Convert Input string 1 to vector <int>
        str2int(this->input2,2);                                        //Convert Input string 2 to vector <int>

        if(this->IN1.size() != this->IN2.size()){                       //Test if input length is the same.
            this->badinput = true;
            this->errorType = 2;}

        if(this->badinput == true){                                     //If an input error has occured, notify user.
            inputBad();}

        if(this->badinput == false){                                    //If no error has occured, continue to calculate output.
            for(int step = 0 ; step < this->input1.size(); step ++){
                if((this->IN1[step] == 1)&&(this->IN2[step] == 1)){
                    this->output.append("0");}
                else {this->output.append("1");}
            }
        }
    }

    if(this->gateType == 4){                                            //if gateType is NOR gate

        str2int(this->input1,1);                                        //Convert Input string 1 to vector <int>
        str2int(this->input2,2);                                        //Convert Input string 2 to vector <int>

        if(this->IN1.size() != this->IN2.size()){                       //Test if input length is the same.
            this->badinput = true;
            this->errorType = 2;}

        if(this->badinput == true){                                     //If an input error has occured, notify user.
            inputBad();}

        if(this->badinput == false){                                    //If no error has occured, continue to calculate output.
            for(int step = 0 ; step < this->input1.size(); step ++){
                if((this->IN1[step] == 0)&&(this->IN2[step] == 0)){
                    this->output.append("1");}
                else {this->output.append("0");}
            }
        }
    }

    if(this->gateType == 5){                                            //if gateType is INV gate

        str2int(this->input1,1);                                        //Convert Input string 1 to vector <int>

        if(this->badinput == true){                                     //If an input error has occured, notify user.
            inputBad();}

        if(this->badinput == false){                                    //If no error has occured, continue to calculate output.
            for(int step = 0 ; step < this->input1.size(); step ++){
                if(this->IN1[step] == 0){
                    this->output.append("1");}
                else {this->output.append("0");}
            }
        }
    }

    if(this->gateType == 6){                                            //if gateType is XOR gate

        str2int(this->input1,1);                                        //Convert Input string 1 to vector <int>
        str2int(this->input2,2);                                        //Convert Input string 2 to vector <int>

        if(this->IN1.size() != this->IN2.size()){                       //Test if input length is the same.
            this->badinput = true;
            this->errorType = 2;}

        if(this->badinput == true){                                     //If an input error has occured, notify user.
            inputBad();}

        if(this->badinput == false){                                    //If no error has occured, continue to calculate output.
            for(int step = 0 ; step < this->input1.size(); step ++){
                if(((this->IN1[step] == 0)&&(this->IN2[step] == 0))||
                   ((this->IN1[step] == 1)&&(this->IN2[step] == 1))){
                        this->output.append("0");}
            else {this->output.append("1");}
            }
        }
    }

    if(this->gateType == 7){                                            //if gateType is XNOR gate

        str2int(this->input1,1);       //Convert Input string 1 to vector <int>
        str2int(this->input2,2);       //Convert Input string 2 to vector <int>

        if(this->IN1.size() != this->IN2.size()){      //Test if input length is the same.
            this->badinput = true;
            this->errorType = 2;}

        if(this->badinput == true){                    //If an input error has occured, notify user.
            inputBad();}

        if(this->badinput == false){                   //If no error has occured, continue to calculate output.
            for(int step = 0 ; step < this->input1.size(); step ++){
                if(((this->IN1[step] == 0)&&(this->IN2[step] == 0))||
                   ((this->IN1[step] == 1)&&(this->IN2[step] == 1))){
                        this->output.append("1");}
                else {this->output.append("0");}
            }
        }
    }

}

void Calc::str2int(string tempstr, int inputNr)
{
    if(inputNr == 1){
        for(int i = 0; i < tempstr.length(); i++){
            if(tempstr[i] == '1'){
                this->IN1.push_back(1);}
            else if (tempstr[i] == '0'){
                this->IN1.push_back(0);}
            else {
                this->badinput = true;
                this->errorType = 1;
                break;}
        }
    }

   if(inputNr == 2){
       for(int i = 0; i < tempstr.length(); i++){
            if(tempstr[i] == '1'){
                this->IN2.push_back(1);}
            else if (tempstr[i] == '0') {
                this->IN2.push_back(0);}
            else {
                this->badinput = true;
                this->errorType = 1;
                break;}
        }
    }
}

void Calc::inputBad()
{
    if(this->errorType == 1){
      errormessage = "There is an invalad character within specified input.";}

    if(this->errorType == 2){
      errormessage = "The length of inputs need to be the same length.";}
}






