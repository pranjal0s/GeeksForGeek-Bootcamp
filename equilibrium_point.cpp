int sum = 0;
	//first we will calcualte the sum 
	//of all array elements
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
    //nitiliaizd left sum as 0
	int l_sum = 0;

	for(int i=0;i<n;i++){
		sum -= arr[i];

		if(l_sum == sum){
			return i+1;  //since we are following 1-based indexing
		}

		lsum += arr[i];
	}

	return -1;
