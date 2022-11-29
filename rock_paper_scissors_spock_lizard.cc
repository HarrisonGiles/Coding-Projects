/* The following will be a game called Rock, Paper, Scissors,Lizard, Spock */

#include <iostream>
#include <stdlib.h>

int main() {
//sets the seed of the random number generator
srand (time(NULL));
//Computers choice
int computer = rand() % 5 + 1;
//Users choice
int user = 0;


std::cout << "======================================\n";
std::cout << "Rock, Paper, Scissors, Lizzard, Spock!\n";
std::cout << "======================================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) Lizard \n";
std::cout << "5) Spock \n";

std::cout << "shoot!: ";
std::cin >> user;
//std::cout << "The computer choose " << computer << "\n";
if(user == 1) {
  std::cout << "You chose Rock \n";
}
else if (user == 2) {
  std::cout << "You chose Paper \n";
}
else if (user == 3) {
  std::cout << "You chose Scissor \n";
}
else if (user == 4) {
  std::cout << "You chose Lizzard \n";
}
else if (user == 5) {
  std::cout << "You chose Spock \n";
}
  if(computer == 1) {
  std::cout << "The computer chose Rock \n";
  }
  else if (computer == 2) {
  std::cout << "The computer chose Paper \n";
  }
  else if (computer == 3) {
  std::cout << "The computer chose Scissor \n";
  }
  else if (computer == 4) {
  std::cout << "The computer chose Lizzard \n";
  }
  else if (computer == 5) {
  std::cout << "The computer chose Spock \n";
  }
    //Rock
    if(user == 1 && computer == 1) {
    std::cout << "It's a tie, Try again \n";
    }
    else if(user == 1 && computer == 2) {
    std::cout << "You lose, Paper covers Rock \n";
    }
    else if(user == 1 && computer == 3) {
    std::cout << "You win, Rock smashes Scissors \n";
    }
    else if(user == 1 && computer == 4) {
    std::cout << "You Win, Rock crushes Lizzard \n";
    }
    else if(user == 1 && computer == 5) {
    std::cout << "You Lose, Spock vaporizes Rock \n";
    }
    //Paper
    else if(user == 2 && computer == 2) {
    std::cout << "It's a tie, Try again \n";
    }
    else if(user == 2 && computer == 1) {
    std::cout << "You Win, Paper covers Rock \n";
    }
    else if(user == 2 && computer == 3) {
    std::cout << "You lose, Scissors cuts Paper \n";
    }
    else if(user == 2 && computer == 4) {
    std::cout << "You Lose, Lizard eats Paper \n";
    }
    else if(user == 2 && computer == 5) {
    std::cout << "You Win, Paper disproves Spock \n";
    }
    //Scissor
    else if(user == 3 && computer == 3) {
    std::cout << "It's a tie, Try again \n";
    }
    else if(user == 3 && computer == 1) {
    std::cout << "You Lose, Rock smashes Scissors \n";
    }
    else if(user == 3 && computer == 2) {
    std::cout << "You Win, Scissors cuts Paper \n";
    }
    else if(user == 3 && computer == 4) {
    std::cout << "You Win, Scissor cuts Lizard \n";
    }
    else if(user == 3 && computer == 5) {
    std::cout << "You Lose, Spock smashes Scissors";
    }
      //Lizard
    else if(user == 4 && computer == 4) {
    std::cout << "It's a tie, Try again \n";
    }
    else if(user == 4 && computer == 1) {
    std::cout << "You Lose, Rock smashes Lizard \n";
    }
    else if(user == 4 && computer == 2) {
    std::cout << "You Win, Lizard eats Paper \n";
    }
    else if(user == 4 && computer == 3) {
    std::cout << "You Lose, Scissor cuts Lizard \n";
    }
    else if(user == 4 && computer == 5) {
    std::cout << "You Win, Lizard poisons Spock";
    }
     //Spock
    else if(user == 5 && computer == 5) {
    std::cout << "It's a tie, Try again \n";
    }
    else if(user == 5 && computer == 1) {
    std::cout << "You Win, Spock vaporizes Rock\n";
    }
    else if(user == 5 && computer == 2) {
    std::cout << "You Lose, Paper disproves Spock \n";
    }
    else if(user == 5 && computer == 3) {
    std::cout << "You Win, Spock smashes Scissors \n";
    }
    else if(user == 5 && computer == 4) {
    std::cout << "You Lose, Lizard poisons Spock";
    }
    else {
    std::cout << "Invaild Entry";
    }
  }
