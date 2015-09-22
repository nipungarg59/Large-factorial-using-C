#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[500],n,i,length,carry,j,k,l;
    scanf("%d",&n);
    a[0]=1;
    l=1;
    for(i=2;i<=n;i++)
        {
        carry=0;
        for(j=0;j<l;j++)
            {
            k=a[j]*i;
            k=k+carry;
            a[j]=k%10;
            carry=k/10;
        }

                while(carry)
                    {
                l++;
                a[j]=carry%10;
                    carry=carry/10;
                    j++;
                }
    }
    for(i=l-1;i>=0;i--)
        {
        printf("%d",a[i]);
    }
    return 0;
}

