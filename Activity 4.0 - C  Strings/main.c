#include <stdio.h>
#include <stdlib.h>

int main() {

  char string[200];
  int  lenght, vowels, consonant;


  lenght = vowels = consonant = 0;


  printf("Input a sentence: ");
  fgets(string, sizeof(string), stdin);
  lenght = strlen(string);

  for (int i = 0; string[i] != '\0'; ++i) {


    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
        string[i] == 'o' || string[i] == 'u') {
            string[i]=string[i]-32;

      ++vowels;
    }

    else if ((string[i] >= 'a' && string[i] <= 'z')) {
      ++consonant;
    }

  }
  printf("String Coverted: ");
  puts(string);
  printf("String Lenght: %d", lenght);
  printf("\nVowels: %d", vowels);
  printf("\nConsonants: %d", consonant);


  return 0;
}
