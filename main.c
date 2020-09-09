#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
  //creates the loop value
  int loop = 4; 
  
  //put your usernames here
  char usernames[][13] = {"root", "use", "admin", "ubnt", "ubuntu", "admin123", "root123", "support", "test", "user", "username", "virmach", "vps"}; 
  
  //put your passwords here
  char passwords[][12] = {"root", "admin", "user", "vps", "admin1234", "ubnt", "ubuntu", "test", "user", "support", "username", "virmach"};
  
  //make and write to a file
  FILE * fpointer = fopen("user:pass", "w");
  //the actual loop
  while (loop == 4)
    {//what is being written to the file 
    fprintf(fpointer, "%s:%s\n", usernames[rand()%13], passwords[rand()%12]);
    }
}
