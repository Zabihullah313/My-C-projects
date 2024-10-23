#include <time.h>
#include <stdio.h>
int main(){
    time_t now;
    time(&now);
    printf("currently it is %s ",ctime(&now));
    return 0;
}
