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
	
	if (guess == random) std::cout << "Success you have guessed it!";

	return 0;
}

int main()
{
	randomInteger();

	return 0;
}
