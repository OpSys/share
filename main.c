#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;


 /* // First get the time limit on CPU 
   getrlimit (RLIMIT_CPU, &lim); 
//default limit is -1
printf("\n Default value is : %lld\n", (long long int)lim.rlim_cur);

//setting the new soft limit = 1
 lim.rlim_cur = 1;

// Now call setrlimit() to set the changed value. 
   setrlimit (RLIMIT_CPU, &lim);


//now we check if it has chenged for real, Again get the limit and check,it has to be 1
   getrlimit (RLIMIT_CPU, &rl);
  printf("\n Default value now is : %lld\n", (long long int)rl.rlim_cur); 
  
*/

	 // print the following values using rlimit 
	 getrlimit ( RLIMIT_STACK, &lim);
	 printf("stack size: %ld\n", lim.rlim_cur);
	 getrlimit (RLIMIT_NPROC , &lim);
	 printf("process limit: %ld\n",lim.rlim_cur);
	 getrlimit ( RLIMIT_NOFILE, &lim);
	 printf("max file descriptors: %ld\n",lim.rlim_max);
}

  
 /*

