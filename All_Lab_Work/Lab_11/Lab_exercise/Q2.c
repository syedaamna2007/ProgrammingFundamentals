#include <stdio.h>
char myFunction(){
	float m, e;
	printf("Enter your test marks: ");
	scanf("%f", &m);
	if (m>=60){
		printf("Enter your years of experience: ");
		scanf("%f", &e);
	}
	if (m>=70 && e>=2){
		return 'a';
	}
	else if (m>=60 && e>=1){
		return 'b';
	}
	else if (m>=50){
		return 'c';
	}
	else {
		return 'd';
	}
}
int main (){
	char yourPosition = myFunction();
	if (yourPosition=='a'){
		printf("ASSIGNED POSITION: Associate Developer");
	}
	else if (yourPosition=='b'){
		printf("ASSIGNED POSITION: Assistant Developer");
	}
	else if (yourPosition=='c'){
		printf("ASSIGNED POSITION: Trainee Engineer");
	}
	else if (yourPosition=='d'){
		printf("ASSIGNED POSITION: NOT ELIGIBLE!!");
	}
	return 0;
}