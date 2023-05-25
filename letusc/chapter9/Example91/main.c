#include <stdio.h>
/*pointers
*/
void callby(int* ,int*);
int main()
{
    int x=5,y=15;
    callby( &x, &y);
    printf("%d %d",x,y);

    return 0;
}
void callby(int *a,int *b){
     *a=10;
     *b=10;

}
