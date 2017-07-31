#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  srand(time(0));

  int nb = rand() % 6 + 1;
  int nb2 = rand() % 6 + 1;
  int nb3 = rand() % 1;
  nb2 = nb3 ? nb : nb2;

  system("clear");
  printf("-----------------------\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  nb >= 10 ? printf("|         %d          |\n", nb) : printf("|         %d           |\n", nb);
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("-----------------------\n");
  printf("\t\t\t\tTotal : %d\n", nb + nb2);
  printf("-----------------------\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  nb2 >= 10 ? printf("|         %d          |\n", nb2) : printf("|         %d           |\n", nb2);
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("|                     |\n");
  printf("-----------------------\n");
}
