
#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    string a="prajwal";
    string b="Darshan";
    int count=0;

    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=b.size();j++){

            if(a[i]==b[j]){
                count++;
            }

        }
    }
    cout<<count;
    return 0;
}
