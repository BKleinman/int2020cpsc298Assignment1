/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include <iostream>
using namespace std;

int main(int argc, char **argv){
  //initalizing
  float metricTon = 35273.92;
  float userInput = 0.0;

  //prompting user for input
  cout << "Enter the weight of the cereal package" << endl;
  cin >> userInput;

  //arithmetic
  float weightInOunces = userInput/metricTon;
  float numBoxesNeeded = metricTon/weightInOunces;

  //print to screen
  cout << "Weight in metric tonnes: " << weightInOunces << endl;
  cout << "Boxes needed to weigh a metric tonne: " << numBoxesNeeded << endl;

  return 0;
}
