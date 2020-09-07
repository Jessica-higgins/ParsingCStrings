#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()

{
  char *s1;
  char s2[100], s3[100];
  size_t size = 100;
  int comma = 0;

  s1 = (char *)malloc(size * sizeof(char));
  printf("Enter input string:\n");
  getline(&s1, &size, stdin);

      while(1)
      {
       if (strlen(s1) == 2)
       {
            if(s1[0] == 'q')
            {
                return 0;
            }
       }

        int i;
        int j = 0;
        for (i = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] == ',')
            {
                comma = 1;
                break;
            }
            if (s1[i] != ' ' && s1[i] != ',')
            {
                s2[j++] = s1[i];
            }
        }

            s2[j] = '\0';
            i++;
            j = 0;

            if (comma == 1)
            {
              while (s1[i] != '\0')
              {

                    if (s1[i] != ' ')
                    {
                          s3[j++] = s1[i];
                    }
                    i++;
              }

                  s3[j] = '\0';
                  printf("First word: %s", s2);
                  printf("\nSecond word: %s", s3);
            }
            else
            {

                  printf("Error: No comma in string.\n");

            }
            printf("\nEnter input string:\n");
            getline(&s1, &size, stdin);

        }
      }
