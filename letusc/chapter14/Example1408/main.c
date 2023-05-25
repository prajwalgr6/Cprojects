#include <stdio.h>

int main()
{
    unsigned int arr[3][3]={{2,4,6},{9,1,10},{16,64,5}};
    printf("%d\n",**arr);
    printf("%d\n",*(*(arr+1)));
    printf("%d\n",**arr<*(*arr+2));
    printf("%d\n",*(arr+2));

    return 0;
}
