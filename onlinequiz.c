#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char askQuestion(const char *question, const char *options) 
{
    char answer;
    printf("%s\n%s", question, options);
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    return toupper(answer);
}
void checkRound(int *score, int requiredCorrectAnswers, const char *roundName)
{
    printf("\n%s Round:\n", roundName);
    int correctAnswers = 0;
    char question1[] = "What is the capital of France?\nA. Paris\nB. Berlin\nC. London\nD. Rome\n";
    char question2[] = "Which is the largest planet in our solar system?\nA. Mars\nB. Jupiter\nC. Venus\nD. Saturn\n";
    char question3[] = "What is the powerhouse of the cell?\nA. Nucleus\nB. Mitochondria\nC. Endoplasmic Reticulum\nD. Golgi Apparatus\n";
    char options[] = "Options:\nA. A\nB. B\nC. C\nD. D\n";
    char answer = askQuestion(question1, options);
    if (answer == 'A') correctAnswers++;
    answer = askQuestion(question2, options);
    if (answer == 'B') correctAnswers++;
    answer = askQuestion(question3, options);
    if (answer == 'B') correctAnswers++;
    printf("You got %d out of 3 questions correct in the %s Round.\n", correctAnswers, roundName);
    if (correctAnswers >= requiredCorrectAnswers) 
    {
        printf("Congratulations! You passed the %s Round.\n", roundName);
        *score += correctAnswers * 100000; 
    }
    else {
        printf("Sorry! You did not pass the %s Round.\n", roundName);
    }

    printf("Current Prize Money: $%d\n", *score);
}

int main()
{
    char playerName[50];
    int score = 0;
    printf("Welcome to the Online Quiz Game!\n");
    printf("Enter your name: ");
    fgets(playerName, sizeof(playerName), stdin);
    playerName[strcspn(playerName, "\n")] = '\0'; 
    printf("Hello, %s! Let's get started.\n", playerName);
    checkRound(&score, 2, "Warm-up");
    while (score < 1000000) {
        printf("\nChallenge Round:\n");
        printf("Answer questions to win $100,000 per correct answer. Reach $1 million to win!\n");
        char challengeQuestion1[] = "What is the capital of Japan?\nA. Tokyo\nB. Beijing\nC. Seoul\nD. Bangkok\n";
        char challengeQuestion2[] = "Who is the first prime minister of India? \nA. Sarojini Naidu\nB. Indira Gandhi\nC. Jawaharlal Nehru\nD. Narendra Modi\n";
      char challengeQuestion3[] = "Which number is called as Ramanujan Number? \nA. 1432\nB. 1729\nC. 1919\nD. 1414\n";
      char challengeQuestion4[] = "Who invented Computer? \nA. Charles Babbage\nB. Graham Bell\nC. Thomas Alva Edison\nD. Elon Musk\n";
      char challengeQuestion5[] = "What is the Capital of India? \nA. New Delhi\nB. Hyderabad\nC. Mumbai\nD. Shimla\n";
      char challengeQuestion6[] = "The most electronegative element among the following is \nA. Sodium\nB. Bromine\nC. Fluorine\nD. Oxygen\n";
      char challengeQuestion7[] = "The Indian Institute of Science is located at \nA. Chennai\nB. Kerala\nC. Bangalore\nD. Vijayawada\n ";
      char challengeOptions[] = "Options:\nA. A\nB. B\nC. C\nD. D\n";
      char answer1 = askQuestion(challengeQuestion1, challengeOptions);
      if (answer1 == 'A')  
        {
            score += 100000; 
            printf("Correct! You won $100,000.\n");
        } else {
            printf("Wrong answer. You didn't win any money for this question.\n");
        }
        printf("Current Prize Money: $%d\n", score);
      char answer2 = askQuestion(challengeQuestion2, challengeOptions);
       if (answer2 == 'C')
         {
           score += 100000; 
           printf("Correct! You won $100,000.\n");
         } else {
           printf("Wrong answer. You didn't win any money for this question.\n");
         }
         printf("Current Prize Money: $%d\n", score);
      char answer3 = askQuestion(challengeQuestion3, challengeOptions);
      if (answer3 == 'B')  
        {
            score += 100000; 
            printf("Correct! You won $100,000.\n");
        } else {
            printf("Wrong answer. You didn't win any money for this question.\n");
        }
        printf("Current Prize Money: $%d\n", score);
      char answer4 = askQuestion(challengeQuestion4, challengeOptions);
       if (answer4 == 'A')
         {
           score += 100000; 
           printf("Correct! You won $100,000.\n");
         } else {
           printf("Wrong answer. You didn't win any money for this question.\n");
         }
         printf("Current Prize Money: $%d\n", score);
      char answer5 = askQuestion(challengeQuestion5, challengeOptions);
      if (answer5 == 'A')  
        {
            score += 100000; 
            printf("Correct! You won $100,000.\n");
        } else {
            printf("Wrong answer. You didn't win any money for this question.\n");
        }
        printf("Current Prize Money: $%d\n", score);
      char answer6 = askQuestion(challengeQuestion6, challengeOptions);
      if (answer6 == 'C')  
        {
            score += 100000; 
            printf("Correct! You won $100,000.\n");
        } else {
            printf("Wrong answer. You didn't win any money for this question.\n");
        }
        printf("Current Prize Money: $%d\n", score);
      char answer7 = askQuestion(challengeQuestion7, challengeOptions);
      if (answer7 == 'C')  
        {
            score += 100000; 
            printf("Correct! You won $100,000.\n");
        } else {
            printf("Wrong answer. You didn't win any money for this question.\n");
        }
        printf("Current Prize Money: $%d\n", score);
    }
  printf("\nCongratulations, %s! You won $1 million. Game Over!\n", playerName);
return 0;
}
