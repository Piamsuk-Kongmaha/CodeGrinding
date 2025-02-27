/*
 * Pascal's Triangle: Prints the first 15 rows of Pascal's triangle.
 *
 */


#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;


// Forward declaration of a function.
int Pascal (int row, int column);
int rowLength (int row, int column);



/* The main function.
 *
 * Parameters:
 *    none
 *
 * Return value:
 *    0 if we complete successfully, 1 if there was an error.
 */

int main ()
{

  // introduction

  cout << "\nPascal's Triangle!\n";
  cout << "(Pascal's triangle is made by taking the sum of two numbers\n";
  cout << "and placing that number directly underneath the two numbers.\n";
  cout << "This creates a triangular array of binomial coefficients)\n\n";


  // determination of how long the bottom row is

  int bottom_row;
  string bottom_row_characters;
  stringstream out;

   for (int row = 15; row <= 15; row++)
    {

      for (int column = 0; column <= row; column++)
        {
          out << " " << Pascal(row, column) << " ";
        }
      bottom_row_characters += out.str();
    }


  // for loops to calculate and print out pascal's triangle

   for (int row = 0; row <= 15; row++)
    {
      cout.width((bottom_row_characters.length() - rowLength(row, 0)) / 2);

      for (int column = 0; column <= row; column++)
        {
          cout << " " << Pascal(row, column) << " ";
        }

      cout << endl;
    }

    cout << endl;
}


/* This function calculates Pascal's triangle based on row and column position.
 *
 * Parameters:
 *    row, column
 *
 * Return value:
 *    the numbers in Pascal's triangle
 */

int Pascal (int row, int column)
{

  // if statements to calculate pascal's triangle through recursion

  if (column == 0)
    return 1;

  else if (row == column)
    return 1;

  else
    return Pascal(row - 1, column - 1) + Pascal(row - 1, column);
}





/* This function converts a row from Pascal's Triangle from integers to a string
 *
 * Parameters:
 *    row, column
 *
 * Return value:
 *    a string representing a row in Pascal's triangle
 */

int rowLength (int row, int column)
{

  int current_row;
  string current_row_characters;
  stringstream out;

  for (int current_row = row; current_row <= row; current_row++)
    {
     for (int column = 0; column <= row; column++)
       {
         out << " " << Pascal(row, column) << " ";
       }
     current_row_characters += out.str();
    }

  return current_row_characters.length();