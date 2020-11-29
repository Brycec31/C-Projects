#include <stdio.h>

main(){
	int tmonth, tday, first, sec, feb, dec, isholiday;
	printf("Enter date of school day(mm/dd):");
	scanf("%d/%d", &tmonth, &tday);
	int cmonth=9, cday=8, i=1, weekday=3;
	char w[3], m[3];
	while(cmonth != tmonth || cday != tday){
		if(cday >= 28){
			switch(cmonth){
				case 1:
					first=1;
					break;
				case 2:
					feb=1;
					break;
				case 3:
					first=1;
					break;
				case 4:
					sec=1;
					break;
				case 5:
					first=1;
					break;
				case 6:
					sec=1;
					break;
				case 7:
					first=1;
					break;
				case 8:
					first=1;
					break;
				case 9:
					sec=1;
					break;
				case 10:
					first=1;
					break;
				case 11:
					sec=1;
					break;
				case 12:
					first=1;
					dec=1;
					break;

			}
			if(first==1&&cday==31){
				cday=1;
				if(dec==1){
					cmonth=1;
				}else{
				cmonth++;
				}
			}else if(sec==1&&cday==30){
				cday=1;
				cmonth++;
			}else if(feb==1&&cday==28){
				cday=1;
				cmonth++;
			}else{
				cday++;
			}
			first=0;
			sec=0;
			feb=0;
			dec=0;
		}else{
			cday++;
		}
		switch(cmonth){
			case 1:
				if(cday==2){
					isholiday=1;
				}
				break;
			case 2:
				if(cday==6 || cday==13 || cday==16){
					isholiday=1;
				}
				break;
			case 3:
				if(cday >= 16 && cday <=20){
					isholiday=1;
				}
				break;
			case 4:
				if(cday==3 || cday==6){
					isholiday=1;
				}
				break;
			case 5:
				if(cday==25){
					isholiday=1;
				}
				break;
			case 6:
				if(cday==30){
					isholiday=1;
				}
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				if(cday==13){
					isholiday=1;
				}
				break;
			case 11:
				if(cday==21){
					isholiday=1;
				}
				break;
			case 12:
				if(cday >= 21){
					isholiday=1;
				}
				break;
		}


		if(weekday<7 && weekday>1 && isholiday==0){
		if(i==4){
			i=1;
		}else{
			i++;
		}
		}

		if(weekday==7){
			weekday=1;
		}else{
			weekday++;
		}
		isholiday=0;
	}
	switch(weekday){
		case 1:
			w[0]='S'; w[1]='u'; w[2]='n';
			break;
		case 2:
			w[0]='M'; w[1]='o'; w[2]='n';
			break;
		case 3:
			w[0]='T'; w[1]='u'; w[2]='e';
			break;
		case 4:
			w[0]='W'; w[1]='e'; w[2]='d';
			break;
		case 5:
			w[0]='T'; w[1]='h'; w[2]='u';
			break;
		case 6:
			w[0]='F'; w[1]='r'; w[2]='i';
			break;
		case 7:
			w[0]='S'; w[1]='a'; w[2]='t';
			break;
	}
	switch(cmonth){
		case 1:
			m[0]='J'; m[1]='a'; m[2]='n';
			break;
		case 2:
			m[0]='F'; m[1]='e'; m[2]='b';
			break;
		case 3:
			m[0]='M'; m[1]='a'; m[2]='r';
			break;
		case 4:
			m[0]='A'; m[1]='p'; m[2]='r';
			break;
		case 5:
			m[0]='M'; m[1]='a'; m[2]='y';
			break;
		case 6:
			m[0]='J'; m[1]='u'; m[2]='n';
			break;
		case 7:
			m[0]='J'; m[1]='u'; m[2]='l';
			break;
		case 8:
			m[0]='A'; m[1]='u'; m[2]='g';
			break;
		case 9:
			m[0]='S'; m[1]='e'; m[2]='p';
			break;
		case 10:
			m[0]='O'; m[1]='c'; m[2]='t';
			break;
		case 11:
			m[0]='N'; m[1]='o'; m[2]='v';
			break;
		case 12:
			m[0]='D'; m[1]='e'; m[2]='c';
			break;
	}
	printf("date: %s, %s %d is day %d\n", w, m, cday, i);
}
