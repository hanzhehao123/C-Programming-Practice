/*安排场次*/
#include<iostream>
#include<math.h>>

int main(int argc,char** argv)
{
   char i,j,k;
   
   printf("\n安排比赛场次\n\n");
   
   for(i='x';i<='z';i++)
       for(j='x';j<='z';j++)
       {
       	if(i!=j)
       	    for(k='x';k<='z';k++)
       	    {
       	    	if(i!=k&&j!=k)
       	    	{
       	    		if(i!='x'&&k!='x'&&k!='z')
       	    		printf("\n比赛场次安排：a--%c\tb--%c\tc--%c\n\n",i,j,k);				   
					   }
			   }
	   }
}
