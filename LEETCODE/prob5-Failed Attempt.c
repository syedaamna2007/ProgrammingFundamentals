//tried as much as i could understand.. There was probably an ERROR in my code's compatibility with LeetCode and therefore my submission FAILED..
#include <stdbool.h>
bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    int arr[9][9];
	for (int r=0; r<9; r++){
		for(int c=0; c<9; c++){
            if (arr[r][c]<1 || arr[r][c]>9)
            return false;
            }
        }   
    }
    int r;
    for(r=0; r<9; r++){
		int check_r[9]={0};
		for (int c=0; c<9; c++){
			int d_r= arr[r][c];
			if (check_r[d_r - 1]==0){
			    check_r[d_r - 1]=1;}
			else
            return false;
        }
    }
    for (int c=0; c<9; c++){
		int check_c[9]={0}; 
		for (int r=0; r<9; r++){
			int d_c = arr[r][c];
			if (check_c[d_c - 1]==0){
			    check_c[d_c - 1]=1;}
			else
            return false;
        }
    }
    for(int i=0; i<9; i+=3){
		for (int j=0; j<9; j+=3){ 
		int check_g[9]={0};
			for(int r=i; r<i+3; r++){
				for (int c=j; c<j+3; c++){
					int d_g=arr[r][c];
					if (check_g[d_g - 1]==0){
						check_g[d_g - 1]=1;}
					else
                    return false;
                }
            }
        }
    }
    return true; 
}