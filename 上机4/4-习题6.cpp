/*���ų���*/
#include<iostream>
#include<math.h>>

int main(int argc,char** argv)
{
   char i,j,k;
   
   printf("\n���ű�������\n\n");
   
   for(i='x';i<='z';i++)
       for(j='x';j<='z';j++)
       {
       	if(i!=j)
       	    for(k='x';k<='z';k++)
       	    {
       	    	if(i!=k&&j!=k)
       	    	{
       	    		if(i!='x'&&k!='x'&&k!='z')
       	    		printf("\n�������ΰ��ţ�a--%c\tb--%c\tc--%c\n\n",i,j,k);				   
					   }
			   }
	   }
}
