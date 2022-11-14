#include<stdio.h>
#include<string.h>
// deeepieeeeeeeeeee
int main() {

  int i, j, deepin;
  char Time12[10], Time24[10];
 printf("ENPUT TIME IN HOUR FORMAT : ");
  scanf("%[^\n]%*c", Time12);
  deepin = strlen(Time12);

  if(Time12[5] == 'A' || Time12[6] == 'A') {

    if(Time12[0] == '1' && Time12[1] == '2') {

      Time24[0] = Time24[1] = '0';
      for(i = 2; i <=4 ; i++)
        Time24[i] = Time12[i];
    }
    else if(Time12[1] == ':') {

      Time24[0] = '0';
      for(i = 1; i <= 4; i++)
        Time24[i] = Time12[i - 1];
    }
    else
      for(i = 0; i <= 4; i++)
        Time24[i] = Time12[i];
  }
  else {

    if(Time12[0] == '1' && Time12[1] == '2')
      for(i = 0; i <=4 ; i++)
        Time24[i] = Time12[i];
    else if(Time12[1] == ':') {

      if(Time12[0] >= '1' && Time12[0] <= '7') {

          Time24[0] = '1';
          Time24[1] = Time12[0] + 2;
      }
      else {

          Time24[0] = '2';
          Time24[1] = Time12[0] == '8' ? '0' : '1';
      }
      for(i = 2; i <= 4; i++)
        Time24[i] = Time12[i - 1];
    }
    else {

      Time24[0] = '2';
      Time24[1] = Time12[1] == '0' ? '2' : '3';
      for(i = 2; i <= 4; i++)
        Time24[i] = Time12[i];
    }
  }

  for(i = 0; i <= 4; i++)
   
    printf("%c", Time24[i]);

  printf("\n");

  return 0;
}
