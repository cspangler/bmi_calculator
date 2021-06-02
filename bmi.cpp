// bmiCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //BMI Calculator - Body Mass Index
    //(weight(kg) / height / height(cm)) * 10000 or (weight / height / height) * 703
    //under weight < 18.5
    //Normal weight 18.5 to 24.9
    //Overweight > 25
    //Obesity > 30
 
    float weight, height, bmi;
    int numChoice;

    cout << "Body Mass Calculator" << endl;
    cout << "Press 1 for Standard / Press 2 for Metric" << endl;
    cin >> numChoice;

    if (numChoice == 1)
    {
        cout << "Weight(kg), height(cm) ";
        cin >> weight >> height;
        bmi = (weight / height / height) * 10000;
    }
    else
    {
        cout << "weight(lbs), height(in) ";
        cin >> weight >> height;
        bmi = (weight / height / height) * 703;
    }

    if (bmi < 18.5)
        cout << "You are under weight." << endl;
    else if (bmi > 25)
        cout << "You are overweight." << endl;
    else
        cout << "You have a normal body weight." << endl;

    cout << "Your bmi is " << bmi;



    system("pause>0");
}
