//Program to read a sequence of integers and display the count, minimum, maximum, and average of the numbers entered.
//By: Nischal Shrestha
// Date: 2026-03-10

#include <iostream>
#include <iomanip>

using namespace std;

// Function to process a sequence of integers and display statistics
int main() 
{
	int count = 0;
	int min = 10;
	int max = 0;
	int sum = 0;
	int value;
	double average;

	// greet the user and explain the program
	cout << "Welcome to the Integer Statistics Program! Here you'll input the numbers and we'll find the minimun, maximum, average and the total number of input numbers" << endl;

	// Prompt the user for input and process the integers
	cout << "Enter an integer (0 to quit): ";
	while (cin >> value && value != 0) // Validate the input and update statistics
	{
		// Check if the input is within the valid range
		if (value < 1 || value > 10) 
		{
			cout << "Invalid input. Please enter an integer between 1 and 10 (0 to quit): ";
			
		}
		// Update the count
		count++;
		// Update the sum
		sum += value;
		// Update the minimum
		if (value < min) 
		{
			min = value;
		}
		// Update the maximum
		if (value > max) 
		{
			max = value;
		}
		// Prompt the user for the next input
		cout << "Enter an integer (0 to quit): ";
	}
	// Display the results if at least one valid integer was entered
	if (count > 0) 
	{
		average = static_cast<double>(sum) / count;
		cout << "Count  Min   Max   Average \n";
		cout << setw(2) << count << setw(6) << min << setw(6) << max << setw(9) << fixed << setprecision(2) << average << endl;
	} else 
	{
		cout << "No valid integers were entered.\n";
	}
	return 0;
}