#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <mem.h>

#define MAX 100
#define MAXNUMBER 20


void create_random(int tab[]);
// ------ Function declaration ----------
void create_random( int tab[]) {
    for (int i = 0; i < MAX; i++){
        tab[i] = rand() % MAXNUMBER;
    }
};
void count_frequency(int tab[], int freq[]){
    for (int i = 0; i < MAX; i++){
        int pos = tab[i];
        freq[pos]++;
    }

}
void draw_histogram(int freq[]){
    for (int i = 0; i < MAXNUMBER; i++){
        if (freq[i] > 0){
            printf("%d ",i);
            for (int x = 0; x < freq[i]; x++){
                printf("%c",'x');
            }
            printf("\n");
        }
    }
}


int main (void){
    int table[MAX], n ;
    int frequency[MAXNUMBER] = {0};
    create_random(table);
    count_frequency(table,frequency);
    draw_histogram(frequency);

}
