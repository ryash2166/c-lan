#include<stdio.h>

void main()
{
  char c;
  printf("\nEnter The Alphabet: ");
  scanf("%c",&c);
  if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u'))
  {
   printf("It is Vowel.");
  }
  else if((c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'))
  {
   printf("It is Vowel.");
  }
  else
  {
   printf("It is Consonant.");
  }
}
