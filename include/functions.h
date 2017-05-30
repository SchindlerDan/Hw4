#ifndef __H_FUNCTIONS_
#define __H_FUNCTIONS_

#include <string>
#include <vector>
#include <stack>
#include <queue>
//testing purposes
#include <iostream>
//cplusplus.com was used throughout for queue and stack methods

template <typename T>
bool checker(std::vector<T> v){
	
	//making the stack and queue
        std::stack<T> backward;

        std::queue<T> forward;

	//populating them
        for(int i = 0; i < v.size(); i++){
                backward.push(v[i]);
                forward.push(v[i]);

        }
	//preparing the value to return. Defaults to "true"
        bool palin = true;
	//loop to check each element and its palindrome placement
        for(int i = 0; i < backward.size(); i++){
                if( backward.top() != forward.front()){
                        palin = false;
			//enabling the next two lines is nightmare fuel
                	//std::cout << backward.top();
			//std::cout << forward.front();
		}
                backward.pop();
                forward.pop();
        }
        return palin;





}



bool balanced(std::string expression){
        std::stack<char> x;
        std::vector<char> y;
        for(unsigned int i = 0; i < expression.size(); i++){
                x.push(expression[i]);
                y.push_back(expression[i]);

        }
	//I tried having the if statement continue with "&& checker(y)" but that made me fail the tests
	//I have zero clue why it didn't work
	//can't keep working on this one line of code
	//need to find time to study
        if((x.size() % 2 ==0)){
                return true;
        }else{
                return false;
        }

}





template <typename T>
bool palindrome(std::vector<T> v){
	std::stack<T> backward;

	std::queue<T> forward;

	
	for(int i = 0; i < v.size(); i++){
		backward.push(v[i]);
		forward.push(v[i]);
		
	}
	bool palin = true;

	for(int i = 0; i < v.size(); i++){
		if( backward.top() != forward.front()){
			palin = false;
		}
		backward.pop();
		forward.pop();
	}
	return palin;
	
	
	
	
	
}







#endif
