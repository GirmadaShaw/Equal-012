/*
Given a string that consists of only 0s, 1s and 2s, count the number of substrings that have an
equal number of 0s, 1s, and 2s.
Input: str = “0102010”
Output:  2
Explanation: Substring str[2, 4] = “102” and substring str[4, 6] = “201” has equal number of 0, 1 and 2

Input: str = “102100211”
Output: 5
*/

// C++ program to find substring with equal
// number of 0's, 1's and 2's
#include <bits/stdc++.h>
using namespace std;

// Method to count number of substring which
// has equal 0, 1 and 2
long long getSubstringWithEqual012(string s) {

		vector<string> arr;
		int n = s.size();
		//generating subarrays
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				string s1 = "";
				for(int k=i;k<=j;k++)
				{
					s1+=s[k];
				}
				arr.push_back(s1);
			}
		}
		int count = 0;
		int countZero,countOnes,countTwo;
		// iterating over array of all substrings
		for(int i=0;i<arr.size();i++)
		{
			countZero=0;
			countOnes=0;
			countTwo=0;
			string curs = arr[i];
			for(int j=0;j<curs.size();j++)
			{
				if(curs[j] == '0')
				countZero++;
				if(curs[j] == '1')
				countOnes++;
				if(curs[j] == '2')
				countTwo++;
			}
			// if number of ones,two and zero are equal in a substring
			if(countZero == countOnes and countOnes == countTwo)
			{
				count++;
			}
		}
		
		
		return count;
	}
// Driver's code
int main()
{
	string str = "0102010";

	// Function call
	cout << getSubstringWithEqual012(str) << endl;
	return 0;
}

