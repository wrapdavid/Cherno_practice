#include<iostream>
//#define PR_debug  1
#if 1
#ifdef PR_debug 
#define fun(x) std::cout << x << std::endl
#else defined(PR_release)
#define fun(x) std::cout << 41 << std::endl
#endif
#endif

#define Main int main(){\
fun("ads");\
std::cin.get();\
}


Main