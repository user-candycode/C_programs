
#include <stdio.h>

int main()
{
    int n=4;
    for(int i=1;i<=n;i++){
        for(int p1=1;p1<=i;p1++){
            printf("| ");
        }
        for(int p2=n-i;p2>0;p2--){
            printf("_ ");
        }
        for(int p3=(n-1)-i;p3>0;p3--){
            printf("_ ");
        }
        for(int p4=1;p4<=i;p4++){
            if(p4==4){
                continue;
            }
            printf("| ");
        }
        
        printf("\n");
    }

    return 0;
}
