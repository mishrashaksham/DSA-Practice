#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2) {
    int l1 = strlen(word1);
    int l2 = strlen(word2);
    
    char *merged = (char *)malloc((l1 + l2 + 1) * sizeof(char));
    int index = 0;
    
    if(l1 > l2){
        for(int i = 0; i < l2; i++){
            merged[index++] = word1[i];
            merged[index++] = word2[i];
        } 
        for(int i = l2; i < l1; i++){
            merged[index++] = word1[i];
        }
    }
    else if(l2 > l1){
        for(int i = 0; i < l1; i++){
            merged[index++] = word1[i];
            merged[index++] = word2[i];
        } 
        for(int i = l1; i < l2; i++){
            merged[index++] = word2[i];
        }
    }
    else{
        for(int i = 0; i < l1; i++){
            merged[index++] = word1[i];
            merged[index++] = word2[i];
        }
    }
    
    merged[index] = '\0';
    return merged;
}