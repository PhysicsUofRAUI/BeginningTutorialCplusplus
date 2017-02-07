#include<iostream>
#include<string>

using namespace std;

/*declare variables name, major, and year.
initialize these values to input from the keyboard
and then output the info*/

int main()
{
  string name;
  string major;
  int year;
  
  cout << "What is your first name?" << endl;
  cin >> name;

  cout << "What year are you in?" << endl;
  cin >> year;

  cout << "What is your major?" << endl;
  cin >> major;

  cout << "Your name is: " << name << endl;
  cout << "Your major is: " << major << endl;
  cout << "You are in your: " << year << " year" << endl;
  
  return 0;

}
