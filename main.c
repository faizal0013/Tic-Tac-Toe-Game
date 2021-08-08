#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//Fucntion
void gotoxy(int x, int y);
void welcome_intro();
int checkwin(char *, char *, char *);

int main()
{
    char user_choice, comp_choice, player_name_1[10];
    int ran, u;

    welcome_intro();

    system("cls");
    {

        gotoxy(50, 20);
        printf("Loading:\n");
        usleep(9000);

        gotoxy(25, 21);
        for (int i = 0; i < 50; i++)
        {
            printf("-");

            usleep(7000);
        }
    }
    system("cls");

    printf("Enter Your Name \a");
    scanf("%s", &player_name_1);

    system("cls");

    printf("Your Name is %s \a\n\n", player_name_1);

    system("pause");

    // getch();
    system("cls");

    srand(time(0));

    ran = rand() % 100 + 1;

    while (1)
    {

        if (ran > 50)
        {
            system("cls");

            printf("%s Enter Your Choice (X) Or (0) ", player_name_1);
            scanf("%c", &user_choice);

            u = 1;

            if (user_choice == 'X' || user_choice == 'x')
            {
                user_choice = 'X';
                comp_choice = '0';
                printf("\n\n%s Enter Your Choice (%c)\n", player_name_1, user_choice);
                printf("Computer Enter Your Choice (%c)\n", comp_choice);
                printf("\a");
                break;
            }
            else if (user_choice == '0')
            {
                user_choice = '0';
                comp_choice = 'X';
                printf("\n\n%s Enter Your Choice (%c)\n", player_name_1, user_choice);
                printf("Computer Enter Your Choice (%c)\n", comp_choice);
                printf("\a");
                break;
            }

            // printf("User Enter Your Choice (%c)\n", user_choice);
            // printf("Computer Enter Your Choice (%c)\n", comp_choice);
        }
        else
        {
            ran = rand() % 6 + 1;

            u = 0;

            if (ran > 3)
            {
                comp_choice = 'X';
                user_choice = '0';

                printf("\nComputer Enter Your Choice (%c)\n", comp_choice);
                printf("%s Enter Your Choice (%c)\n", player_name_1, user_choice);
                printf("\a");
                break;
            }
            else
            {
                comp_choice = '0';
                user_choice = 'X';

                printf("\nComputer Enter Your Choice (%c)\n", comp_choice);
                printf("%s Enter Your Choice (%c)\n", player_name_1, user_choice);
                printf("\a");
                break;
            }
            // printf("Computer Enter Your Choice (%c)\n", comp_choice);
            // printf("User Enter Your Choice (%c)\n", user_choice);
        }

        // exit(0);
    }

    // char t_t_t_number[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char t_t_t_number[] = {"123456789"};
    // char user_now, comp_now;
    int num;

    int i = strlen(t_t_t_number);

    char user_now, comp_now;

    printf("\n\n");

    system("pause");

    // while (i > 0)
    do
    {

        printf("\n\n\a%s Choice is (%c) & Computer Choice is (%c) \n\n", player_name_1, user_choice, comp_choice);

        printf("\t\t|\t\t|\t\t\n");
        printf("\t%c\t|\t%c\t|\t%c\n", t_t_t_number[0], t_t_t_number[1], t_t_t_number[2]);
        printf("\t\t|\t\t|\t\t\n");
        printf("-----------------------------------------------\n");
        printf("\t\t|\t\t|\t\t\n");
        printf("\t%c\t|\t%c\t|\t%c\n", t_t_t_number[3], t_t_t_number[4], t_t_t_number[5]);
        printf("\t\t|\t\t|\t\t\n");
        printf("-----------------------------------------------\n");
        printf("\t\t|\t\t|\t\t\n");
        printf("\t%c\t|\t%c\t|\t%c\n", t_t_t_number[6], t_t_t_number[7], t_t_t_number[8]);
        printf("\t\t|\t\t|\t\t\n\n\n");

        // getchar();
        // while (1)
        // {
        char comp[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

        while (u == 1)
        {
            getchar();
            printf("%s Enter Number Where You Want to put (%c) : ", player_name_1, user_choice);
            scanf("%c", &user_now);

            // user_now = user[user];

            if (user_now == 49) // 1
                num = 0;
            else if (user_now == 50) // 2
                num = 1;
            else if (user_now == 51) // 3
                num = 2;
            else if (user_now == 52) // 4
                num = 3;
            else if (user_now == 53) // 5
                num = 4;
            else if (user_now == 54) // 6
                num = 5;
            else if (user_now == 55) // 7
                num = 6;
            else if (user_now == 56) // 8
                num = 7;
            else if (user_now == 57) // 9
                num = 8;

            // // system("cls");

            // printf("\nNumber is %d", num);

            if ((t_t_t_number[num] == user_choice) || (t_t_t_number[num] == comp_choice))
            {
                printf("Invaite move ! \n");

                getch();
                // system("cls");

                // break;
            }
            else
            {
                t_t_t_number[num] = user_choice;
                break;
            }
            printf("\a");
        }
        // }
        while (u == 0)
        {
            // getchar();
            // printf("Computer Enter Number Where You Want to put (%c) : ", comp_choice);

            ran = rand() % 10 + 2;

            comp_now = comp[ran];

            // printf("%c\n", comp_now);

            if (comp_now == 49) // 1
                num = 0;
            else if (comp_now == 50) // 2
                num = 1;
            else if (comp_now == 51) // 3
                num = 2;
            else if (comp_now == 52) // 4
                num = 3;
            else if (comp_now == 53) // 5
                num = 4;
            else if (comp_now == 54) // 6
                num = 5;
            else if (comp_now == 55) // 7
                num = 6;
            else if (comp_now == 56) // 8
                num = 7;
            else if (comp_now == 57) // 9
                num = 8;

            // // // system("cls");

            // printf("\nnumber is %d\n", num);
            // printf("ran is %d\n", ran);
            // printf("computer %c\n", comp_now);

            if ((t_t_t_number[num] == comp_choice) || (t_t_t_number[num] == user_choice))
            {

                // printf("Invaite move ! \n");

                // getch();
                // system("cls");
                // break;
            }
            else
            {

                printf("Computer Enter Number Where You Want to put (%c) : ", comp_choice);
                printf("%c\n", comp_now);

                t_t_t_number[num] = comp_choice;

                break;
            }
            printf("\a");

            // exit(0);
        }

        if (u == 0)
            u = 1;
        else if (u == 1)
            u = 0;

        getch();

        system("cls");

        i--;

        // exit(0);
        printf("\a");

    } while (i > 0);

    // printf("Hello world!\n");

    // system("cls");
    {

        gotoxy(50, 20);
        printf("Loading:\n");
        usleep(9000);

        gotoxy(25, 21);
        for (int i = 0; i < 50; i++)
        {
            printf("-");

            usleep(7000);
        }
    }
    system("cls");

    printf("\t\t|\t\t|\t\t\n");
    printf("\t%c\t|\t%c\t|\t%c\n", t_t_t_number[0], t_t_t_number[1], t_t_t_number[2]);
    printf("\t\t|\t\t|\t\t\n");
    printf("-----------------------------------------------\n");
    printf("\t\t|\t\t|\t\t\n");
    printf("\t%c\t|\t%c\t|\t%c\n", t_t_t_number[3], t_t_t_number[4], t_t_t_number[5]);
    printf("\t\t|\t\t|\t\t\n");
    printf("-----------------------------------------------\n");
    printf("\t\t|\t\t|\t\t\n");
    printf("\t%c\t|\t%c\t|\t%c\n", t_t_t_number[6], t_t_t_number[7], t_t_t_number[8]);
    printf("\t\t|\t\t|\t\t\n\n\n");

    {

        i = checkwin(t_t_t_number, &user_choice, &comp_choice);

        if (i == 1)
            printf("%s is Winner.....\n\a", player_name_1);

        else if (i == -1)
            printf("Compuer is winner.....\n\a");

        else
            printf("Game is drow.....\n\a");
    }

    getch();

    return 0;
}

int checkwin(char *ptr, char *user_choice, char *comp_choice)
{

    /*
    if user is equal then return 1
    if computer is equal then return -1
    if drow then return 0    
    */

    if ((ptr[0] == *user_choice) && (ptr[1] == *user_choice) && (ptr[2] == *user_choice))
    {
        return 1;
    }

    else if ((ptr[3] == *user_choice) && (ptr[4] == *user_choice) && (ptr[5] == *user_choice))
    {
        return 1;
    }

    else if ((ptr[6] == *user_choice) && (ptr[7] == *user_choice) && (ptr[8] == *user_choice))
    {
        return 1;
    }

    else if ((ptr[0] == *user_choice) && (ptr[3] == *user_choice) && (ptr[6] == *user_choice))
    {
        return 1;
    }

    else if ((ptr[1] == *user_choice) && (ptr[4] == *user_choice) && (ptr[7] == *user_choice))
    {
        return 1;
    }

    else if ((ptr[2] == *user_choice) && (ptr[5] == *user_choice) && (ptr[8] == *user_choice))
    {
        return 1;
    }

    else if ((ptr[0] == *user_choice) && (ptr[4] == *user_choice) && (ptr[8] == *user_choice))
    {
        return 1;
    }

    else if ((ptr[2] == *user_choice) && (ptr[4] == *user_choice) && (ptr[6] == *user_choice))
    {
        return 1;
    }

    if ((ptr[2] == *comp_choice) && (ptr[4] == *comp_choice) && (ptr[6] == *comp_choice))
    {
        return -1;
    }

    //-1
    else if ((ptr[0] == *comp_choice) && (ptr[1] == *comp_choice) && (ptr[2] == *comp_choice))
    {
        return -1;
    }

    else if ((ptr[3] == *comp_choice) && (ptr[4] == *comp_choice) && (ptr[5] == *comp_choice))
    {
        return -1;
    }

    else if ((ptr[6] == *comp_choice) && (ptr[7] == *comp_choice) && (ptr[8] == *comp_choice))
    {
        return -1;
    }

    else if ((ptr[0] == *comp_choice) && (ptr[3] == *comp_choice) && (ptr[6] == *comp_choice))
    {
        return -1;
    }

    else if ((ptr[1] == *comp_choice) && (ptr[4] == *comp_choice) && (ptr[7] == *comp_choice))
    {
        return -1;
    }

    else if ((ptr[2] == *comp_choice) && (ptr[5] == *comp_choice) && (ptr[8] == *comp_choice))
    {
        return -1;
    }

    else if ((ptr[0] == *comp_choice) && (ptr[4] == *comp_choice) && (ptr[8] == *comp_choice))
    {
        return -1;
    }

    else
    {
        return 0;
    }
}

void gotoxy(int x, int y)
{
    {
        COORD c;
        c.X = x;
        c.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    }
}

void welcome_intro()
{

    gotoxy(30, 15);
    printf("***************     Welcome     ***************");
    {
        for (int i = 0; i < 100; i++)
        {
            usleep(1000);
        }
    }

    // getch();
}

//! Note welcome intro and sleep