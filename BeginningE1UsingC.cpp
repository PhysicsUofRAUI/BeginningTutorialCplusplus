#include<stdio.h>

using namespace std;

/*declare variables name, major, and year.
initialize these values to input from the keyboard
and then output the info*/

int main()
{
  char name[40];
  char major[50];
  int year;
  
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
