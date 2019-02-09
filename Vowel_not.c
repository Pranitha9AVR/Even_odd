#include<stdio.h>
int main()
{
  char j;
  scanf("%c",&j);
  if(j=='a'||j=='e'||j=='i'||j=='o'||j=='u')
  {
    printf("Vowel");
  }
  else if(j=='b'||j=='c'||j=='d'||j=='f'||j=='g'||j=='h'||j=='j'||j=='k'||j=='l'||j=='m'||j=='n'||j=='p'||j=='q'||j=='r'||j=='s'||j=='t'||j=='v'||j=='w'||j=='x'||j=='y'||j=='z')
  {
    printf("Consonant");
  }
  else
  {
    printf("invalid");
  }
  return 0;
}
