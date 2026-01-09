#include<stdio.h>
int board[100];

void layout(int a , int b){
    printf("\n");
    for(int i = 0 ; i < 100 ; i++){
        board[i] = i+1;
    }
    int j = 0;
    while(a == board[j]){
            int n = board[j];
            board[j] = a;
            j++;
        }

    for(int i = board[99] ; i >= board[98] ; i--){
            
            if(i == a && i == b){
                printf("#P12 ");
            }

            else if (i == a) { 
                printf("#P1  "); 
            } 
                
            else if (i == b) { 
                printf("#P2  "); 
            }

            else{
                printf("%d    " , i);
            }
    }

    for(int i = board[97] ; i >= board[90] ; i--){
            if(i == a && i == b){
                printf(" #P12 ");
            }
            
            else if (i == a) { 
                printf(" #P1  "); 
            } 
            else if (i == b) { 
                printf(" #P2  "); 
            }

            else if(i == 98 || i == 93){
                printf(" (%d)  " , i);
            } 
        
            else if(i == 91){
                printf(" /%d/  " , i);
            }

            else{
            printf(" %d    " , i);
            }
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for(int i = board[8] ; i >= board[1] ; i--){
        if(i%2 == 0){
            for(int j = 10*i ;j >= 10*i - 9 ; j--){

            if(j == a && j == b){
                printf("#P12  ");
            }
                
            else if (j == a) { 
                printf("#P1   "); 
            } 
            else if (j == b) { 
                printf("#P2   "); 
            }

            else if (j == 80 || j == 37 || j == 19 || j == 17 || j == 76 || j == 72 || j == 59 || j == 57 || j == 39 || j == 16 || j == 15){
                printf("(%d)   ", j);
            }

            else if(j == 73 || j == 39){
                printf("/%d/   ", j);
            }

            else if(j == 76 || j == 54 || j == 32){
                printf("|%d|   ", j);
            } 

            else{
            printf("%d     " , j);
            }
        }
        printf("\n");
        printf("\n");
        printf("\n");
        }

        else{
            for(int k = 10*i - 9 ; k <= 10*i ; k++){

                if(k == a && k == b){
                printf("#P12  ");
                }

                else if (k == a) { 
                printf("#P1   "); 
                } 
                else if (k == b) { 
                printf("#P2   "); 
                }

                else if(k == 62 || k == 69 || k == 86 || k == 82 || k == 83 || k == 88 || k == 64 || k == 44 || k == 42 || k == 22){
                printf("(%d)   " , k);    
                }

                else if(k == 89 || k == 43 || k == 21){
                printf("/%d/   ", k);
                } 

                else if(k == 84 || k == 66 || k == 48){
                printf("|%d|   ", k);
                }

                else{
                printf("%d     " , k);
                }
        }
        printf("\n");
        printf("\n");
        printf("\n");
        }
    }

    for(int i = board[0] ; i <= board[9] ; i++){

            if(i == a && i == b){
                printf("#P12   ");
            }
            else if (i == a) { 
                printf("#P1    "); 
            } 
            else if (i == b) { 
                printf("#P2    "); 
            }

            else if(i == 7){
                printf("(%d)    " , i);
            }

            else{
            printf("%d      " , i);
            }
    }
    printf("\n");
}