#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int  n, i, fm;

	string result; 

	result = "";

    cout<<"Give N = "; 
	cin>>n;

	i = 2;

	do {

       fm = 0;

       while(n % i == 0) {

       	     fm++;

       	     n /= i;  
       } 

       if(fm) {

       	  string out = to_string(i) + "^" + to_string(fm) + " * ";

       	  result = result.append(out);
       }

       i++;

	} while(!(n == 1));

    result = result.erase(result.size() - 3);
    //or
    //result = result.substr(0, result.length() - 3);

    cout<<result<<endl;
    
	return 0;
}
