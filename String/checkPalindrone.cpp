public:	
	int isPalindrome(string s)
	{
	    int end = s.length()-1;
	    int start = 0;
	    
	    while(start <= end){
	        if(s[start] == s[end]){
	            start++;
	            end--;
	        }
	        else{
	            return 0;
	        }
	    }
	    return 1;
	}
