for(int i = 0, j = 1; i < n - 1; i++,j++) {
            if(arr[i] > arr[j] and !(i & 1)) swap(arr[i], arr[j]);
            else if(arr[i] < arr[j] and (i & 1)) swap(arr[i], arr[j]);
        }
