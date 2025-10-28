#include <stdio.h>
#include <string.h>

void myWake(FILE * free)
{
  char wake[10];
  printf("Did you wake up at 6: ");
  scanf("%s", wake);

  if (strcmp(wake, "Yes")==0 || strcmp(wake, "yes") == 0){
    printf("My man, You got this.\n\n");

    fprintf(free, "[%s] Woke up at 6\n", wake);
    
  }

  else if(strcmp(wake, "No")==0 || strcmp(wake, "no") == 0){

    char confirm[10];
    printf("Can you wake up early or not: ");
    scanf("%s", confirm);

    if (strcmp(confirm,"Yes")==0 || strcmp(confirm, "yes")==0)
    {
      printf("Cool\n\n");
      fprintf(free, "[%s] Woke up at 6\n", confirm);
      
      
    }

    else{
      fprintf(free, "[%s] Woke up at 6\n", wake);
      printf("Fuck off!!!\n\n");
    }
  }

  else{
    printf("You need to wake early to finish your work. \n\n");

  }

}

void myGym(FILE * free)
{
  char gym[10];
  printf("Did you go to the gym: ");
  scanf("%s", gym);

  if (strcmp(gym, "Yes")==0 || strcmp(gym, "yes")==0) 
  {
    printf("Nice, you are working for the gains\n\n");

    fprintf(free, "[%s] Went to Gym\n", gym);

  }
  else if (strcmp(gym, "no")==0 || strcmp(gym, "No")==0)
  {
    char confirm[10];
    printf("Will you head there: ");
    scanf("%s", confirm);

    if (strcmp(confirm, "yes")==0 || strcmp(confirm, "Yes")==0)
     {
      
      fprintf(free, "[%s] Went to Gym\n", confirm);
      printf("Cool\n\n");
    }

    else{
      fprintf(free, "[%s] Went to Gym\n", confirm );
      printf("Fuck off!!!\n\n");
    }
  }

  else{
    printf("Do as you wish\n\n");
  }


}

void myBathe(FILE * free)
{
  char bath[10];
  printf("Did you bathe or not: ");
  scanf("%s", bath);

  if (strcmp(bath, "Yes")==0 || strcmp(bath, "yes") == 0){
    printf("Smells fresh and looks dashing!.\n\n");

    fprintf(free, "[%s] Had a bath\n", bath);
    
  }

  else if(strcmp(bath, "No")==0 || strcmp(bath, "no") == 0){

    char confirm[10];
    printf("Will you bathe or not: ");
    scanf("%s", confirm);

    if (strcmp(confirm,"Yes")==0 || strcmp(confirm, "yes")==0)
    {
      printf("Nice, you git this.\n\n");
      fprintf(free, "[%s] Had a bath\n", confirm);
      
      
    }

    else{
      fprintf(free, "[%s] Had a bath\n", bath);
      printf("Yuccckkkk....,You freaking stink!!!\n\n");
    }
  }

  else{
    printf("You need to wake early to finish your work. \n\n");

  }

}


int main()
{
  FILE * free;
  free = fopen("ponk1.txt", "w");

  myWake(free);
  myGym(free);
  myBathe(free);


  fclose(free);
  return 0;

}
