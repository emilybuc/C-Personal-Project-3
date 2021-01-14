#include <iostream>
#include <sys/stat.h>
#include <fstream>
using namespace std;
//repl.it repo:https://repl.it/join/fwsuuqhy-emilybuck
//The Problem:Trying to read from a ifstream and output each line
//General approach:using a while loop to go through each line of the file and then output it, add an extra number of lines 
//Main issues: I didnt realise at the start that ifstream and ofstream were different things, that held me up for a bit
string filename, line;
int numberOfLines;

int main() {
  cout << "Please enter a valid filename: ";
  cin >> filename;
  struct stat buf;

  if(stat(filename.c_str(), &buf)== 0){
    ifstream myFile;
    myFile.open(filename);
    //Open my file
    while(getline(myFile, line)){
      numberOfLines++;
      //Adding to number of lines
      cout <<numberOfLines << ": "<< line << '\n';
      //outputting lines
    }
    myFile.close();
    //closing the file
    cout << "Total number of lines read: " << numberOfLines << endl;
    //total lines read
  } else {
    cout << endl << "Sorry, '" << filename << "' does not exist."<< endl;
    //failure statement
  }
}
