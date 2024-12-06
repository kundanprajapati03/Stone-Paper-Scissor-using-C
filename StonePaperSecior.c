#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int randomnumber();
int checkscore();
int checkwinning();

int playerscore, compscore, temp;
char playerchoose, compchoose;
char choise[] = {'R', 'p', 's'};
int main()
{
    printf("Welcome to the Rock, Paper, Seccesor game.\n\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("Round %d playing.\n\n", i);

        printf("Choose 1 for Rock\n");
        printf("Choose 2 for Paper\n");
        printf("Choose 3 for Scissor\n");
        printf("\n");

        printf("Player's Tern:-");
        scanf("%d", &temp);
        playerchoose = choise[temp - 1];
        printf("You Choose %c", playerchoose);
        printf("\n\n");

        printf("Computer's Tern:-");
        temp = randomnumber(3);
        compchoose = choise[temp - 1];
        printf("%d\n", temp);
        printf("Computer Choose %c", compchoose);
        printf("\n\n");

        checkscore();

        printf("Press Enter Next Round\n\n");
        
        getch();
    }
    checkwinning();
    getch();
    return 0;
}

int randomnumber(int n)
{
    srand(time(NULL));
    return rand() % n + 1;
}
int checkscore()
{
    if (compchoose > playerchoose)
    {
        printf("Computer won...\n");
        compscore += 1;
        printf("Player score:- %d \t Computer score:- %d\n", playerscore, compscore);
    }
    else if (compchoose < playerchoose)
    {
        printf("You won...\n");
        playerscore += 1;
        printf("Player score:- %d \t Computer score:- %d\n", playerscore, compscore);
    }
    else
    {
        printf("Grame Drow...\n");
        compscore += 1;
        playerscore += 1;
        printf("Player score:- %d \t Computer score:- %d\n", playerscore, compscore);
    }
    return 0;
}
int checkwinning()
{
    if (playerscore > compscore)
    {
        printf("Computer won this match....");
    }
    else if (playerscore < compscore)
    {
        printf("You won this match....");
    }
    else
    {
        printf("This Match is Drow....");
    }
}
