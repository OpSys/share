#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iomanip>

void wc ( FILE *infile, char *inname);



int
main (int argc, char *argv[]) {
	 	FILE *fp;
		printf("%s %s %s %s\n","Lines","words","characters","names");
		if(argc>1){
			for(int i=1;i<argc;i++){
				fp = fopen(argv[i],"r");
				wc(fp,argv[i]);		
				fclose(fp);
				}
			return 0;	
			}
		else{
		 return 0;	
		}
		}
//*****************************************************************
void wc( FILE *infile, char *inname) {

	char  ch;
	int ncharacters = 0;
	int nwords = 0;
	int nlines = 1;
	int fl = 0;
	while((ch=getc(infile)) != EOF){
				
			if(ch == '\n'|| ch == EOF){
				nlines++; // number of lines in the file	
			     }			
			if(ch != ' ' && ch !='\n'){
				fl = 1; //it it a character
			     }
			if((ch==' ' && fl==1) || ((ch=='\n') && fl==1)){
				nwords++;
				fl = 0;	
			     }
			ncharacters++;
			}
		if(fl==1)
		nwords++;
	printf("%5d %5d %7d %5s\n",nlines,nwords,ncharacters,inname);
}
