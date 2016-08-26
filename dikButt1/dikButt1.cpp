#include <iostream>

// All C++ programs start with a main //
int main() 
{
	// First we will declare our variables as intergers //
	int num1, num2, num3;

	// Then let the user put in the numbers for those intergers //
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;

	// Add them up to decide what to do next //
	int sum = num1 + num2 + num3;
	// And put all those numbers into an array //
	int dikButt[3] = { num1,num2,num3 };
	// Determine the size of the array //
	int sizedikButt = sizeof(dikButt) / 4;
	// Make a flag to control the flow of my sorting method //
	bool flag = true;
	// And a temporary variable for swaping numbers in the array //
	int temp;

	// If the sum is greater than zero we will sort in decending order //
	if (sum > 0)
	{
		// We start sorting here using a for loop that only keeps going //
		//for as long as the size of the array OR untill it has no more to sort //
		for (int j = 0; (j < sizedikButt) && flag; j++)
		{
			// We set this to false because if nothing needs to be sorted we don't need to loop again //
			flag = false;
			// Now we start to compare all the numbers in the array to the ones next to each other //
			for (int a = 0; a < (sizedikButt - 1); a++)
			{
				// In this case if index 2 is greater than index 1..... //
				if (dikButt[a + 1] > dikButt[a])
				{
					// ...We set the temporary variable equal to the current index... //
					temp = dikButt[a];
					// ...Set the current index equal to the next index... //
					dikButt[a] = dikButt[a + 1];
					// ...And set the next index equal to the tenporary variable. //
					dikButt[a + 1] = temp;
					// And because we had to swap numbers we may need to loop again, so set this to true. //
					flag = true;
				}
			}
		}
	}

	// If the sum is less than zero then we will sort in accending order //
	if (sum < 0)
	{
		for (int j = 0; (j < sizedikButt) && flag; j++)
		{
			flag = false;
			for (int a = 0; a < (sizedikButt - 1); a++)
			{
				if (dikButt[a + 1] < dikButt[a])
				{
					temp = dikButt[a];
					dikButt[a] = dikButt[a + 1];
					dikButt[a + 1] = temp;
					flag = true;
				}
			}
		}
	}

	// This will loop through the array and print to the console all the contents of said array //
	for (int i = 0; i < sizedikButt; i++)
	{
		std::cout << dikButt[i] << std::endl;
	}

	system("pause");
	return 0;
}