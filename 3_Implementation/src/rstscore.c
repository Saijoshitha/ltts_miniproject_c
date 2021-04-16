#include "prototype.h"

void reset_score()
    {//system("@cls||clear");
    	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",nm,&sc);
	fclose(f);
	f=fopen("score.txt","w");
	sc=0;
	fprintf(f,"%s\n%f",nm,sc);
    	fclose(f);
    	char q;
	scanf("%c",&q);
	printf("\n\n\n\nPress any key to continue");
    	char t;
    	scanf("%c",&t);}
    
