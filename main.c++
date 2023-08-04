#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    int secretNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "Welcome to Guess the Number game!\n";
    std::cout << "I have selected a number between 1 and 100. Can you guess it?\n";

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cout << "Invalid input. Please enter a valid number.\n";
            continue;
        }

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low. Try again.\n";
        } else {
            std::cout << "Too high. Try again.\n";
        }
    }

    return 0;
}
