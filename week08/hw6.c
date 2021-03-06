#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char tree[1000000][32];
int compare( const void *p1, const void *p2){
    return strcmp((char*)p1, (char*)p2);
}
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

    qsort(tree, N, 32, compare );

    for(int i=0;i<N; i++){
        printf("%s\n",tree[i]);
    }
}
