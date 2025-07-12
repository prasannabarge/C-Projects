#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
  int random,guess;
  int no_of_guess = 0;
  srand(time(NULL));
  printf("Welcome to the world Of Guessing Number \n");
   random = rand () % 100+1; //generating between 0 to 100 that's the main logic
  do{
    printf("\n Please enter your Guess between (1 to 100):");
    scanf("%d",&guess);
    no_of_guess++;

    if(guess<random){
         printf("Guess Larger number. \n");
         
    } else if(guess> random){
      printf("Guess Smaller number. \n");
    }
    else{
      printf("\nCongratulations !!!you have successfully guessed the number in %d attempt ", no_of_guess);
    }

  }while(guess != random);

  printf("\n Bye Bye , Thanks for playing");
  printf("\n  Developed By:Prasanna Barge ");
}