#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printknapSack(int W, int wt[], int val[], int n) 
{ 
    int i, w; 
    int K[n + 1][W + 1]; 
  
    // Build table K[][] in bottom up manner 
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i == 0 || w == 0) 
                K[i][w] = 0; 
            else if (wt[i - 1] <= w) 
                K[i][w] = max(val[i - 1] +  
                    K[i - 1][w - wt[i - 1]], K[i - 1][w]); 
            else
                K[i][w] = K[i - 1][w]; 
        } 
    } 
  
    // stores the result of Knapsack 
    int res = K[n][W];     
    printf("%d\n", res); 
      
    w = W; 
    for (i = n; i > 0 && res > 0; i--) { 
        if (res == K[i - 1][w])  
            continue;         
        else { 
            printf("%d ", wt[i - 1]); 
            res = res - val[i - 1]; 
            w = w - wt[i - 1]; 
        } 
    } 
} 

int main() {
    int val[] = 
    int wt[] = { 10, 20, 30 }; 
    int W = 50; 
    int n = sizeof(val) / sizeof(val[0]); 
      
    printknapSack(W, wt, val, n); 
      
    return 0; 
}