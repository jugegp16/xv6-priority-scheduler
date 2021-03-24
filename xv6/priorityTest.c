#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
  //create a child process.
  //The fork system call returns the child process's id
  //to the parent process and 0 to the child process.
  int pid = fork();
  if(pid < 0) {
     printf(1, "Error forking\n");
  } else if (pid == 0) {
    setpriority(0);
    int i = 0;
    for(; i < 100000; i++); //Loop a bit
    printf(1, "Child done\n");
  } else {
    setpriority(100);
    int i = 0;
    for(; i < 10; i++); //Loop a bit
    printf(1, "Parent done\n");
  
    //The parent process waits until the child exits.
    wait();
    printf(1, "Child completed\n");
    printf(1, "Parent exiting\n");
  }
  exit();
}