#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("ponk.txt", "w");

  char gym[100], wake [100], hygiene[100];

  printf("Did you wake before 6 a.m: ");
  scanf("%s", wake);

  printf("Did you go to the gym: ");
  scanf("%s", gym);

  printf("Did you bathe: ");
  scanf("%s", hygiene);

  fprintf(fptr, "[%s] Wake before 6 a.m \n", wake);
  fprintf(fptr, "[%s] Gym \n", gym);
  fprintf(fptr, "[%s] Bath and refresh \n", hygiene);

  fclose(fptr);
  return 0;
}