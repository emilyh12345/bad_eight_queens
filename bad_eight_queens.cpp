//Emily Haller CSCI 211
#include<iostream>
#include<cmath>
using namespace std;

bool okay(int q[]){ //function to check if another queen was placed to the left and right
	for (int col=7; col>=0; col--){ //loop through starting from last column to check all the numbers in the array
        	for (int ind=0; ind<=7; ind++){
            		if (col!=ind){ //if the column is the same as the index it will not check it
                		if(q[ind]==q[col] || abs(col-ind)==abs(q[col]-q[ind])) return false; //checks row and diagonals tests from the left and right of current column
            		}
        	}
    	}
   	return true;
}

void print(int q[]){ //loops to print out the 1D and 2D array of queen placement
	static int solutions = 0; //initialize counter to 0 to keep track of solution number
	solutions++;
	cout << "Solution " << solutions << ": "<< endl;
	for (int a=0; a<=7; a++){ //loops to print 1D array of queen placement 
		cout << q[a] << " ";
	}
	cout << endl;
	for(int row=0; row<=7; row++){ //loops to print out 2D array of each possible solution
		for (int col=0; col<=7; col++){
			if(row==q[col]) cout << "1 "; //if row number equals the value in the array prints a 1 for queen placement
			else cout << "0 ";
		}   
	cout << endl;
	}
	cout << endl;
}

int main(){
	int q[8]={0}; //initialize array q to 0 to start
    	for (int i=0; i<8; i++){ //loop to try all combinations of numbers in the array, starting by incrementing rightmost digit
        	for (int j=0; j<8; j++){
            		for (int k=0; k<8; k++){
                		for(int l=0; l<8; l++){
                   			for (int m=0; m<8; m++){
                        			for (int n=0; n<8; n++){
                            				for (int o=0; o<8; o++){
                                				for (int p=0; p<8; p++){
                                    					q[0]=i; //fills in the indexes of array q to keep track of placement of the incrementing values
                                    					q[1]=j;
                                    					q[2]=k;
                                    					q[3]=l;
                                    					q[4]=m;
                                    					q[5]=n;
                                    					q[6]=o;
                                    					q[7]=p;
                                    					if (okay(q)==true) print (q); //calls functions to see if current configuration passes row and diagonal tests and if it does it prints out the 1D and 2D array
								}
                            				}
						}
                    			}
                		}
            		}
        	}
    	}
	return 0;
}
