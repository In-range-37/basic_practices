#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("ponk.txt", "w");

  char gym[100], wake [100], hygiene[100], studies[100];

  printf("Did you wake before 6 a.m: ");
  scanf("%s", wake);

  printf("Did you go to the gym: ");
  scanf("%s", gym);

  printf("Did you bathe: ");
  scanf("%s", hygiene);

  printf("Heading out for studies: ");
  scanf("%s", studies);

  fprintf(fptr, "[%s] Wake before 6 a.m \n", wake);
  fprintf(fptr, "[%s] Gym \n", gym);
  fprintf(fptr, "[%s] Bath and refresh \n", hygiene);
  fprintf(fptr, "[%s] Headed for studies\n", studies);

  fclose(fptr);
  return 0;
}
