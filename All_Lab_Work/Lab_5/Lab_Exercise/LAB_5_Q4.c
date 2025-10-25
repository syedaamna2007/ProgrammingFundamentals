#include <stdio.h>
int main(){
    printf("AYKIZ'S RESTAURANT AND HOTEL");
    printf("\nORDER MENU");
    printf("\nB= Burger (Rs. 200)\nF= French Fries (Rs. 50)\nP= Pizza (Rs. 500)\nS= Sandwiches (Rs. 150) ");

    int n , q1, q2, q3, q4;
    char s1, s2, s3, s4;

    printf("\nHow many types of snacks do you need to order: ");
    if (scanf("%d", &n) != 1){
        printf("\nInvalid input. Please enter a number."); 
		return 0;}

    if (n==1){
        printf("\nEnter the snack you want to order: ");
        if (scanf(" %c", &s1)!= 1){ 
		printf("\nInvalid input.");
		return 0;}

        if (s1 != 'B' && s1 != 'F' && s1 != 'P' && s1 != 'S'){ 
		printf("\nYour order is INVALID. Please try again."); 
		return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q1)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}}

    else if (n==2){
        printf("\nEnter the first snack you want to order: ");
        if (scanf(" %c", &s1)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
        if (s1 != 'B' && s1 != 'F' && s1 != 'P' && s1 != 'S'){
		printf("\nYour order is INVALID. Please try again.");
		 return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q1)!= 1){ 
		printf("\nInvalid input.");
		 return 0;}

        printf("\nEnter the second snack you want to order: ");
        if (scanf(" %c", &s2)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
		
        if (s2 != 'B' && s2 != 'F' && s2 != 'P' && s2 != 'S'){ 
		printf("\nYour order is INVALID. Please try again."); 
		return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q2)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}}

    else if (n==3){
        printf("\nEnter the first snack you want to order: ");
        if (scanf(" %c", &s1)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
		
        if (s1 != 'B' && s1 != 'F' && s1 != 'P' && s1 != 'S'){ 
		printf("\nYour order is INVALID. Please try again."); 
		return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q1)!= 1){ 
        printf("\nInvalid input.");
		return 0;}
        
        printf("\nEnter the second snack you want to order: ");
        if (scanf(" %c", &s2)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
		
        if (s2 != 'B' && s2 != 'F' && s2 != 'P' && s2 != 'S'){ 
		printf("\nYour order is INVALID. Please try again."); 
		return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q2)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}

        printf("\nEnter the third snack you want to order: ");
        
        if (scanf(" %c", &s3)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
        if (s3 != 'B' && s3 != 'F' && s3 != 'P' && s3 != 'S'){ 
		printf("\nYour order is INVALID. Please try again."); 
		return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q3)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}}

    else if (n==4){
        printf("\nEnter the first snack you want to order: ");
        if (scanf(" %c", &s1)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
		
        if (s1 != 'B' && s1 != 'F' && s1 != 'P' && s1 != 'S'){ 
		printf("\nYour order is INVALID. Please try again.");
		return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q1)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}

        printf("\nEnter the second snack you want to order: ");
        if (scanf(" %c", &s2)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
		
        if (s2 != 'B' && s2 != 'F' && s2 != 'P' && s2 != 'S'){ 
		printf("\nYour order is INVALID. Please try again."); 
		return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q2)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}

        printf("\nEnter the third snack you want to order: ");
        if (scanf(" %c", &s3)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
		
        if (s3 != 'B' && s3 != 'F' && s3 != 'P' && s3 != 'S'){ 
        
		printf("\nYour order is INVALID. Please try again."); 
		return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q3)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
        
        printf("\nEnter the fourth snack you want to order: ");
        if (scanf(" %c", &s4)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}
		
        if (s4 != 'B' && s4 != 'F' && s4 != 'P' && s4 != 'S'){ 
		printf("\nYour order is INVALID. Please try again."); 
		return 0;}
        
        printf("\nEnter the quantity snack you want to order: ");
        if (scanf("%d", &q4)!= 1){ 
		printf("\nInvalid input."); 
		return 0;}}

    else { 
	printf("\nSorry! You have exceeded the types of foods in the menu."); 
	return 0;}

    if (n==1 ||n==2 ||n==3 ||n==4 ) {
	printf("\nYou have ordered!");}
    
    int total=0;

    switch (s1){
        case 'B': printf("\n%d Burger(s) will cost %d",q1,200*q1); 
		total += 200 * q1; break;
        case 'F': printf("\n%d French Fries will cost %d",q1,50*q1); 
		total +=50*q1; break;
        case 'P': printf("\n%d Pizza(s) will cost %d",q1,500*q1); 
		total +=500*q1; break;
        case 'S': printf("\n%d Sandwich(es) will cost %d",q1,150*q1); 
		total +=150*q1; break;}

    if (n>=2){
        switch (s2){
            case 'B': printf("\n%d Burger(s) will cost %d",q2,200*q2); 
			total +=200*q2; break;
            case 'F': printf("\n%d French Fries will cost %d",q2,50*q2); 
			total +=50*q2; break;
            case 'P': printf("\n%d Pizza(s) will cost %d",q2,500*q2); 
			total +=500*q2; break;
            case 'S': printf("\n%d Sandwich(es) will cost %d",q2,150*q2); 
			total +=150*q2; break;}}

    if (n>=3){
        switch (s3){
            case 'B': printf("\n%d Burger(s) will cost %d",q3,200*q3); 
			total +=200*q3; break;
            case 'F': printf("\n%d French Fries will cost %d",q3,50*q3); 
			total +=50*q3; break;
            case 'P': printf("\n%d Pizza(s) will cost %d",q3,500*q3);
			total +=500*q3; break;
            case 'S': printf("\n%d Sandwich(es) will cost %d",q3,150*q3); 
			total +=150*q3; break;}}

    if (n==4){
        switch (s4){
            case 'B': printf("\n%d Burger(s) will cost %d",q4,200*q4); 
			total +=200*q4; break;
            case 'F': printf("\n%d French Fries will cost %d",q4,50*q4); 
			total +=50*q4; break;
            case 'P': printf("\n%d Pizza(s) will cost %d",q4,500*q4); 
			total +=500*q4; break;
            case 'S': printf("\n%d Sandwich(es) will cost %d",q4,150*q4); 
			total +=150*q4; break;}}

    printf ("\nYour total bill is: %d", total);
    return 0;
}
