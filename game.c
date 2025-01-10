#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A function that returns the name of the option based on the number
char *get_name(int num) {
  switch (num) {
    case 0:
      return "rock";
    case 1:
      return "paper";
    case 2:
      return "scissors";
    default:
      return "invalid";
  }
}

// A function that returns the result of the game based on the choices
char *get_result(int user, int comp) {
  if (user == comp) {
    return "It's a tie!\nBETTER LUCK FOR NEXT TIME";
  } else if ((user == 0 && comp == 2) || (user == 1 && comp == 0) || (user == 2 && comp == 1)) {
    return "You win!";
  } else {
    return "You lose!\nBETTER LUCK FOR NEXT TIME";
  }
}

int main() {
  // Initialize the random seed
  srand(time(NULL));

  // Generate a random number between 0 and 2 for the computer's choice
  int comp_choice = rand() % 3;

  // Get the user's choice
  int user_choice;
  printf("Enter your choice (0 for rock, 1 for paper, 2 for scissors): ");
  scanf("%d", &user_choice);

  // Print the choices
  printf("You chose %s\n", get_name(user_choice));
  printf("The computer chose %s\n", get_name(comp_choice));

  // Print the result
  printf("%s\n", get_result(user_choice, comp_choice));

  return 0;
}
