#include <iostream>

using namespace std;

int main(int argc, char **argv){

  int maxCapacity;
  int attendees;

  cout << "Enter the room's maximum capacity: " << endl;
  cin >> maxCapacity;

  cout << "Enter how many people will be attending the meeting: " << endl;
  cin >> attendees;

  if(attendees > maxCapacity){
    cout << "Violation of fire safety rules" << endl;
  }else{
    cout << "It is legal to hold a meeting in this room" << endl;
    cout << "You may add an additional " << maxCapacity - attendees << " people to the meeting" << endl;
  }

  return 0;
}
