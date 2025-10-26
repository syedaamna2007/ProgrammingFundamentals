//CT-164
#include <stdio.h>
int main(){
	
	char t, s, m, c;
	int a;

	printf("Type of COFFEE (W for white and B for black): ");
	scanf(" %c", &t);

	printf("\nManual or coffee maker (M for manual or C for coffee maker made): ");
	scanf(" %c", &m);
	
	printf("\nSize of cup (D for double or N for normal): ");
	scanf(" %c", &s);
	
	
		
	
	if (t=='W' && m== 'C' && s== 'N') a=1;
	else if (t=='B' && m== 'C' && s== 'N') a=2;
	else if (t=='W' && m== 'C' && s== 'D') a=3;
	else if (t=='B' && m== 'C' && s== 'D') a=4;
	else if (m!='C') a=5;
	
	switch (a){
		
		case 1: {
		printf("\nFollow these instructions:\noperation\ttime for white coffee\nPut water\t15 mins\nput sugat\t15 mins\nmix well\t20 mins\nadd coffee\t2mins\nadd milk\t4mins\nmix well\t20 mins");
		 } break; 
		 
		case 2: {
		printf("\nFollow these instructions:\noperation\ttime for black coffee\nPut water\t20 mins\nput sugat\t20 mins\nmix well\t25 mins\nadd coffee\t15mins\nadd milk\t-\nmix well\t25 mins");
		} break;
		
		case 3: {
		 printf("\nFollow these instructions:\noperation\ttime for white coffee\nPut water\t30 mins\nput sugat\t30 mins\nmix well\t40 mins\nadd coffee\t4mins\nadd milk\t8mins\nmix well\t40 mins");
	    } break;
	    
	    case 4: {
	 	printf("\nFollow these instructions:\noperation\ttime for black coffee\nPut water\t40 mins\nput sugat\t40 mins\nmix well\t50 mins\nadd coffee\t30mins\nadd milk\t-\nmix well\t50 mins");
	    } break;
	    
	    case 5: {
		printf("\nSorry! Instructions available for coffee machine made coffee only.");
		}break;
		
		default: { printf("\nSorry! There was a mistake. Please answer with W and B for coffee type, D or N for size and M or C for preparatiuon instructions. No other answers shall be entertained!");
		}
		return 0;
	}}