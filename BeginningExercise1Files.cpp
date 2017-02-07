#include<iostream>
#include<string>
#include<fstream>

using namespace std;

/*declare variables name, major, and year.
initialize these values to input from the keyboard
and then output the info. Now do this using files*/

int main()
{
  string name;
  string major;
  int year;
  ofstream myfile ("myInfo.txt");
  
  cout << "What is your first name?" << endl;
  cin >> name;
  //or getline (cin, name);

  myfile << name << " ";

  cout << "What year are you in?" << endl;
  cin >> year;

  myfile << year << " ";

  cout << "What is your major?" << endl;
  cin >> major;

  myfile << major;

  myfile.close();

  ifstream inputFile;

  inputFile.open("myInfo.txt");

  inputFile >> name >> year >> major;

  inputFile.close();
  
  cout << "Your name is: " << name << endl;
  cout << "Your major is: " << major << endl;
  cout << "You are in your: " << year << " year" << endl;

  
  return 0;

}
