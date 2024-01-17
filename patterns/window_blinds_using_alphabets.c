#include <stdio.h>

int main()
{
    int n=7;
    for(int i=1;i<=n;i++){
        for(int p1=n;p1>=i;p1--){
            printf("%c ",97+(n-p1));
        }
        for(int p2=0;p2<i;p2++){
            if(p2>0){
            printf("_ ");
            }
        }
        for(int p3=1;p3<i;p3++){
            if(p3==1){
                continue;
            }
            printf("_ ");
        }
        for(int p4=i;p4<=n;p4++){
            if(p4==1){
                continue;
            }
            printf("%c ",97+(n-p4));
            // printf("%d ",p4);
        }
        
        printf("\n");
    }

    return 0;
}
