#include <iostream>

using namespace std;

int main(int argc, char **argv){

  float cost = 0.0;
  int years = 0;
  float inflationRate = 0;

  cout << "What is the current cost of the item?" << endl;
  cin >> cost;
  cout << "How many years from now will the item be purchased?" << endl;
  cin >> years;
  cout << "What is the rate of inflation?" << endl;
  cin >> inflationRate;

  inflationRate = inflationRate/100;

  for(int i = 0; i < years; ++i){
    cost = cost * (1 + inflationRate);
  }

  cout << "The cost of the item after " << years << " years is: " << cost << endl;

  return 0;


}
