/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include <iostream>
using namespace std;

int main(int argc, char **argv){
  //initalizing
  int workHours;
  int normalRate = 16;
  int overTimeRate = 24;
  float socialSecurityTax;
  float federalIncomeTax;
  float stateIncomeTax;
  int medicalInsurance = 10;
  int grossPay;
  float netPay;

  //prompting for user input
  cout << "How many hours did you work this week?" << endl;
  cin >> workHours;

  //determining how many overtime hours there are
  if(workHours > 40){
    grossPay = ((workHours - 40) * overTimeRate) + (40 * normalRate);
  }else{
    grossPay = workHours * normalRate;
  }

  //calculating taxes
  socialSecurityTax = grossPay * 0.06;
  federalIncomeTax = grossPay * 0.14;
  stateIncomeTax = grossPay * 0.05;
  netPay = grossPay - (socialSecurityTax + federalIncomeTax + stateIncomeTax + medicalInsurance);

  //printing output
  cout << "Gross Pay: " << grossPay << endl;
  cout << "Social Security Tax Withholding Amount: " << socialSecurityTax << endl;
  cout << "Federal Income Tax Withholding Amount: " << federalIncomeTax << endl;
  cout << "State Income Tax Withholding Amount: " << stateIncomeTax << endl;
  cout << "Medical Insurance Withholding Amount: " << medicalInsurance << endl;
  cout << "Net Pay: " << netPay << endl;

  return 0;
}
