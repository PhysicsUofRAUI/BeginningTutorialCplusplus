#include<iostream>
#include<string>

using namespace std;

/*Now make a two functions. One to take information for a student.
Another to print a student*/

struct Student
{
  string name;
  string major;
  int year;
};

void getInfo(Student &stud)
{
  cout << "What is your first name?" << endl;
  cin >> stud.name;

  cout << "What year are you in?" << endl;
  cin >> stud.year;

  cout << "What is your major?" << endl;
  cin >> stud.major;
}

void printStudent(Student stud)
{
  cout << "Your name is: " << stud.name << endl;
  cout << "Your major is: " << stud.major << endl;
  cout << "You are in your: " << stud.year << " year" << endl;
}
int main()
{
  Student me;

  getInfo(me);

  printStudent(me);
  
  return 0;

}
