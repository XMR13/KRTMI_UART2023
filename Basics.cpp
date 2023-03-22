#include <stdio.h>

int main()
{
  printf("mengetes saja cuy");
  int haha = 100;
  printf("berapa kali lah cara aku untuk mengetes hal ini %d \n", haha);
  
  
  return 0;
}

int haha(int iter)
{
  int angka{0};
  for(int haha; haha<iter; iter++)
  {
    angka += haha; 
  }
  return angka;
}

