/**
Brandon Kleinman
2291703
kleinman@chapman.edu
*/
#include <iostream>
using namespace std;

int main(int argc, char **argv){
  //initalizing
  int maxCapacity;
  int attendees;

  //prompting for user input
  }
  cout << "Enter the room's maximum capacity: " << endl;
  cin >> maxCapacity;

  cout << "Enter how many people will be attending the meeting: " << endl;
  cin >> attendees;

  //logic and printing output
  if(attendees > maxCapacity){
    cout << "Violation of fire safety rules" << endl;
  }else{
    cout << "It is legal to hold a meeting in this room" << endl;
    cout << "You may add an additional " << maxCapacity - attendees << " people to the meeting" << endl;
  }

  return 0;
}
