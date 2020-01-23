#include <iostream>

using namespace std;

int main(int argc, char **argv){
  float metricTon = 35273.92;
  float userInput = 0.0;

  cout << "Enter the weight of the cereal package" << endl;
  cin >> userInput;

  float weightInOunces = userInput/metricTon;
  float numBoxesNeeded = metricTon/weightInOunces;

  cout << "Weight in metric tonnes: " << weightInOunces << endl;
  cout << "Boxes needed to weigh a metric tonne: " << numBoxesNeeded << endl;

  return 0;
}
