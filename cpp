class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    int zero = 1;
	    int one = 1;
	    
	  int sum = zero + one;
	    if(n==1){
	        return sum;
	    }
	    
	    int i =2;
	    while(i<=n){
	      one = zero%(1000000007);
	      zero = sum%(1000000007);
	      
	      sum = one+zero%(1000000007);
	      i++;
	    }
	    
	    return sum%1000000007;
	}
};
