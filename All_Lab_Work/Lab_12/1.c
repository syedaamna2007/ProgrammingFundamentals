//this code need debugging yet.
#include <stdio.h>
struct applicants{
	char name[60], address[200];
	int age;
	long long int cnic;
};
int main(){
	
	struct applicants a[3];
	for (int i=0; i<3; i++){
	printf("ENTER YOUR FULL NAME: ");
	fgets(a[i].name, sizeof(a[i].name), stdin);
	printf("ENTER YOUR FULL ADDRESS: ");
	fgets(a[i].address, sizeof(a[i].address), stdin);
	printf("ENTER YOUR AGE: ");
	scanf("%d", &a[i].age);
	printf("ENTER YOUR CNIC.NO without - (Example: 4210000000000): ");
	scanf("%lld", &a[i].cnic);	
	}
	
	for (int i=0; i<3; i++){
		printf("THANKYOU!!\nThe info you entered is:");
		printf("\nYOUR NAME IS: %s", a[i]. name);
		printf("\nYOUR ADDRESS IS: %s", a[i]. address);
		printf("\nYOUR AGE IS: %d", a[i].age);
		printf("\nYOUR CNIC.NO IS: %lld", a[i].cnic);
	}
}