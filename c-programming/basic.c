// Difference between “int main()” and “int main(void)” in C/C++?

int main() {
  return 0;  //no error
}

// prefer 
int main(void) {
  return 0;   // no error 
}


//main()
#include <stdio.h> 
int main() {
  static int i = 5; 
  if (--i) {
    printf("%d", i);
    main(10);   // No error
  }
}


//main(void)
#include <stdio.h> 
int main(void) {
  static int i = 5; 
  if (--i) {
    printf("%d", i);
    main(10);   //this line gives error --> bcs here main has parameter void 
  }
}
