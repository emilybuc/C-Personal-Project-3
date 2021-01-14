#include <iostream>
#include <fstream>
using namespace std;
//repl.it repo:https://repl.it/join/vntvvpid-emilybuck
//The Problem:Trying to access a file and read the contents 
//General approach: using ofstream to access the file I can then add objects to it like in the same way you would cout
//Main issues: I couldnt get getLine to work to take a full name, it kept cutting off the first character, I didnt have time to fix it so i thought I would move on

int main() {
  string name, response;
  ofstream myfile;
  //my file is instantiated
  myfile.open("list.csv");
  //Create a file called list.csv
  while (true){
  cout << "Enter name: ";
  cin >> name;
  //Take entry
  myfile << name << "\n";
  //Place item into the file
  cout << "Updating file...\n";
  cout << "\nAdd another (y/n)";
  cin >> response;
  if (response == "y" || response == "Y"){
    //loop back to top of while loop
  } else if (response == "n" || response == "N") {
    cout << "Goodbye\n";
    myfile.close();
    break;
    //Response is no close file and exit
  } else {
    cout << "no valid entry found, Goodbye\n";
    myfile.close();
    //I thought i would just end the function if they did not enter a valid entry
    break;
  }
}
  return 0;
}
