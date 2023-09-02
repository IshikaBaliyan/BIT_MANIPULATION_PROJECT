#include<stdio.h>
int getbitAt(int num,int index)
    {
        return  (num & 1 << index) ;

    }
int setbitAt(int num , int index)
    {
	return  (num |  1 << index) ;

    }
int clearbitAt(int num , int index)
    {
 	return (num & ~(1<<index));

    } 
int xorfrom1ton(int n)
    {
  	int res=n%4;
  	if (res==0)
  	{
  	   return n;
  	}
  	else if (res ==1)
        {
  	   return 1;
	}
  	else if (res== 2)
  	{
  	   return n+1;
  	}
  	else if (res == 3)
  	{
  	   return 0;
  	}
}
int countsetbits(int n )
{
	int count =0;
 	while(n>0)
	{ 
		if(n & 1 != 0)
		{
			count ++;
		}
		n=n>>1;
	}
	return count;

}
int powerof2(int n)
{
	int count =0;
 	while(n>0)
	{
		if(n & 1 !=0)
		{
			count ++;
		}
		n=n>>1;
	}
	return count;


}
int mostsigbitnum(int n)
{
	int count =0;
        n=n/2;
	while(n>0)
	{
 		count++;
		n=n/2;
		
	}
	return (1<<count);
}
int  alternatepattern(int n )
{
	int copy = n ^ (n >>1);
	int i =0;
	int count0=0;
	int count1=0;
	while(copy>0)
	{
		int bit = copy & 1;
		if(bit == 1)
		{
			count1++;
			i++;
		}
		else if (bit  == 0)
		{
			count0++;
			i++;
		}
		copy=copy>>1;	
	}
        if(count1>0 &count0==0)
	{
		return 1;
	}
	else
	{
		return 0;  
	}

}
int flipsrequiredtoconvert(int a , int b )
{
	int n = a ^ b ;
        int count =0;
        while(n>0)
	{
		if(n & 1 !=0)
		{
			count++;
		}
	n=n>>1;
	}
	return count;
		
}
int xorwithoutusingoperator(int x, int y )
{
	return ((x | y ) & (~x | ~y) );
} 
