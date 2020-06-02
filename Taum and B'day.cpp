
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n;
long int c=0;
long int x,y,z;
long int b,w;
scanf("%d",&n);
while(n)
{n--;c=0;
scanf("%ld %ld",&b,&w);
scanf("%ld %ld %ld",&x,&y,&z);
if(x+z<=y) c=(b+w)*x+(z*w);
else if(y+z<=x) c=(b+w)*y+(z*b);
else
c=b*x+y*w;

printf("%ld\n",c);
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
