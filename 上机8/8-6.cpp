//请编写一个扑克牌洗牌和发牌程序。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void xipai(int poker[][13]);
void fapai(int poker[][13],const char *face[],const char *suit[]);

int main()
{
	const char *suit[4]={"Hearts","Diamonds","Clubs","Spades"};  
	const char *face[13]={"A","2","3","4","5",
	"6","7","8","9","10","J","Q","K"};
	
	int poker[4][13]={0};
	
	time_t t;
	srand((unsigned int)time(&t));
	
	xipai(poker);
	fapai(poker,face,suit);
	
}

void xipai(int poker[][13])
{
	int row,column,card;//花色，牌面，牌的序号 
	
	for(card=1;card<=52;card++)
	{
		do{
			row=rand()%4;
			column=rand()%13;
		}while(poker[row][column]!=0);
		poker[row][column]=card;
	}
}

void fapai(int poker[][13],const char *face[],const char *suit[])
{
	int row,column,card;//花色，牌面，牌的序号 
	
	
	for(card=1;card<=52;card++){
		for(row=0;row<=3;row++){
			for(column=0;column<=12;column++){
				if(poker[row][column]==card){
				    printf("%-2s of %-8s%2c",face[column],suit[row],card%4==0?'\n':' ');
					}
			}
		}
	}
}
