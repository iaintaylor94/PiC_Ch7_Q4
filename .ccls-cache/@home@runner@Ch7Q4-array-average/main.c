// This program calculates the average of an array of ten floating point numbers

#include <stdio.h>

int main(void) {

  // Create array of ten floating point numbers
  float array[10];

  // Get array content from command line
  printf ("Enter contents of array (10 floats):  ");
  for (int i = 0; i < 10; i++) {
    scanf ("%f", &array[i]);
  }

  // Calculate the average of the array of floats
  float average = 0;
  for (int i = 0; i < 10; i++) {
    average += array[i];
  }
  average /= 10;

  // Print the average of the array
  printf ("The average is:  %.2f", average);
  
  
  return 0;
}