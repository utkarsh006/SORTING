/* 1 3 4 7 5 6 2
   0 1 2 3 4 5 6
   
   Start from i=1, 3 must >= 1 hence swap
   3 1 4 7 5 6 2  (1 is less than both its previous and next element.)
   
   Take 2 jumps, i=3, 7 must be >=4
   3 1 7 4 5 6 2
   
   Take 2 jumps, i=5
   3 1 7 4 6 5 2
   
   Now 5 must be greater than 2 to make a wave, hence swap
   3 1 7 4 6 2 5   */


void convertToWave(int n, vector<int>& arr)
    {
        
        for(int i=1; i<n; i+=2)
        {
            if(arr[i]>arr[i-1])
              swap(arr[i],arr[i-1]);
              
            if(arr[i]>arr[i+1]  && i<=n-2)
              swap(arr[i],arr[i+1]);
        }
        
    }
