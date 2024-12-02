#include <iostream>

int randomInteger()
{
	// User inputs number
	std::cout << "Write a number between 1-6 and see if you've guessed right!\n";
	int guess{};
	std::cin >> guess;
	
	// Computer generates random number between 1-6 (found online)
	srand((unsigned)time(NULL));
	int random = (1 + rand() % 6);

	// When I entirely guessed this part I wasn't far off! Originally I wrote: int match{ random == guess() }; and returned 'match'
	// I later used the internet to help me.
	if (guess == random) std::cout << "Success you have guessed it!";

	return 0;
}

int main()
{
	randomInteger();
	// I feel ike this should go on repeat so the user can input a number indefinitely? And a fail message for feedback too. 

	return 0;
}
