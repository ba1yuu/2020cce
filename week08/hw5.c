#include <stdio.h>
#include <string.h>
char tree[1000000][32];
int main()
{
    int T;
    scanf("%d\n\n", &T);

    int N=0;
    for(int i=0;; i++)
    {
        char* now=gets( tree[i] );
        if( now==NULL ){
            N=i;
            break;
        }
        if( strcmp( tree[i],"")==0){
            N=i;
            break;
        }
    }

    for(int i=0;i<N; i++){
        printf("%s\n",tree[i]);
    }
}
