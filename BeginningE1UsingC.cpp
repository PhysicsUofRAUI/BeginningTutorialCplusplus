#include<stdio.h>

using namespace std;

/*declare variables name, major, and year.
initialize these values to input from the keyboard
and then output the info*/

int main()
{
  /*
  The following are datatypes and variables of those datatypes.
  a datatype is just some form of data we can store.
  a variable is a place to store a piece of data
  */
  char name[40]; //this is a string in C, strings in C++ is much easier
  //A string stores stuff like words and paragraphs ex) 'C++', 'Kody' and so on
  
  char major[50];
  int year;      //this is a different datatype called an int it stors an integer 
                 //examples of ints are 1, 15, 5 and so on.
  
  printf ("What is your first name? \n");
  scanf("%s", name);

  printf("What year are you in? \n");
  scanf("%d", &year);

  printf("What is your major? \n");
  scanf("%s", major);

  printf("Your name is: %s \n", name);
  printf("Your major is: %s \n", major);
  printf("You are in your: %d year \n", year);
  
  return 0;

}
