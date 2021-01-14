#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <ctime>
using namespace std;
//repl.it repo:https://repl.it/join/wjvgdhfb-emilybuck
//The Problem:Finding a file then looking at the metadata of that file to find its size and when it was last modified
//General approach:Using  stat we can access the file and get this data
//Main issues: figuring out how stat works 

string filename;
//Instantiating variable

int main() {
  cout << "Filename to check: ";
  cin >> filename;
  struct stat buf;
  if(stat(filename.c_str(), &buf)== 0){
    cout << endl << filename << ", " << buf.st_size << " bytes, last modified: " << ctime(&buf.st_mtime);
  } else {
    cout << endl << filename << " does not exist";
  }
};
