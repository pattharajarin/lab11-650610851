//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
    int count =0;
    float sum =0,q=0.0;
    string text;
    ifstream source("score.txt");
    while (getline(source,text)){
        sum += atof(text.c_str());
        q += pow(atof(text.c_str()),2);
        count++;
    }
    float Mean ;
    Mean= (float)sum/count;
    cout << setprecision(3);
    cout << "Number of data = "<<count<<"\n";
    cout << "Mean = " << Mean << "\n";
    double std ;
    std = (double)(q/count)-pow(Mean,2);
    cout << "Standard deviation = "<< sqrt(std);
}