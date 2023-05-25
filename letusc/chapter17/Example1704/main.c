#include <stdio.h>

int main()
{
    struct  address {
        char name[20], city[20],state[20];
    };
    struct home{
        struct address a;
        int homeno,pincode;

    };
    struct home h={{"hello","helooo","ka"},314,560057};
    printf("%s %s %s %d %d",h.a.name,h.a.city,h.a.state,h.homeno,h.pincode);

    return 0;
}
