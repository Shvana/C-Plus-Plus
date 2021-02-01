
//
// Created by threedslider 02/01/2021
//


// Output : To draw a triangle.

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    for(int i = 0; i < 30; i += 2 )
    {
		//get space and centered for Star
        cout << setw((60-i)/2);

        for(int j = i; j > 0; j--)
        {
			// make a perfect triangle
            if(j<i)
            cout << "*";
        }
		// jump for itareting with Star
        cout << "\n";
    }
	
    return 0;
}
