#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int n,int n2){
    if(n==0 || n2==1)
        return 0;
    else if(n<n2)
    	return n;
    else
        return n-multiplicacao(n,n2-1);

}
int main(void){
    int n,n2,i;
    scanf("%d",&n);
    scanf("%d",&n2);
    i=multiplicacao(n,n2);
    printf("%d",i);
    return 0;
}
