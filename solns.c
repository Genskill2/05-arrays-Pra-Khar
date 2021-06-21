/* Enter your solutions in this file */
#include <stdio.h>
int max (int a[],int m)
{
    int z;
    for (int i=0;i<m;i++)
    {
        if (a[0]<a[i])
        a[0]=a[i];
    }
	z = a[0];
    return z;
}

int min (int a[],int m)
{
    int z;
    for (int i=0;i<m;i++)
    {
        if (a[0]>a[i])
        a[0]=a[i];
        z=a[i];
        
    }
    return z;
}

float average (int a[],int m)
{
    float z=0.0;
    int p=0;
    for (int i=0;i<m;i++)
    {
        z+=a[i];
        p++;
    }
    z= z/p;
    return z;
}


 int mode(int a[], int b)
 { int n, itt=0;
  for(int i=0;i<b;i++)
  {int k=0; 
  for(int j=0;j<b;j++)
  	{
  	 if (a[j]==a[i])
  	 { k++;
	}
  }
  if(k>=itt)
  { 
   itt=k; 
   n=a[i];
   } 
  }
  return n;
  }
  
 // 5.function to get the prime factors 
 
 int factors(int b, int a[])
 {
 int isprim(int p)
 {
 int k=0;
 for(int i=1;i<p;i++)
 {if(p%i==0)
 k++;
 return k;
 }
 }
 int j=0;
 for(int i=2,n=b;i<b;i++)
 { 
 if(isprim(i)==1)
 {
 while(n%i==0)
   { n=n/i;
   a[j++]=i;
   }
 }
 }
 return j;
 }

