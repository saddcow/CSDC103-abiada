// Filename : lab2.cpp
//
// Author : Juanabell F. Abiada
// Course : BS Information Technology
// jabiada@gbox.adnu.edu.ph
//
// Honor Code : I have not received nor given any unauthorized help
// in completing this exercise.

#include <iostream>
using namespace std;
//for prob num 1
int count_vowels(string s){
    //declare a string that contains the vowels
    //then, we get the index of the string to evaluate
    //each element if it contains vowels and shows the sum 
    //of the total vowels found in the given string
    string vowel = "AEIOUaeiou";
    if(s.length() == 0){
        return 0;
    }
    else if(vowel.find(s[0]) != string::npos){
        return count_vowels(s.substr(1)) + 1;
    }
    else{
        return count_vowels(s.substr(1));
    }
}
//for prob num 2
int binary_to_decimal(string b, int n = 0){

    //declare another int for the indexes of the string 
    //and if the last character is reached 
    //we will add the current term and recursion to the remaining terms
    int i = b.length();
    if( n == i - 1){
        return b[n] - '0';
    }
    else{
    return ((b[n] - '0') << (i - n -1)) + binary_to_decimal(b, n + 1);
    }
}
//for prob num 3
int search(int *A, int n, int x){
    
    //If the element placed at index 0 is equal to the value of x
    //we then + 1 to the values in the array and then shift them 
    //to the right by sigle step. with that we can search and evaluate
    //each element if it is equal to the value of x and display 
    //the current location of the element. and if it is not 
    //equal to the value of x, it will display -1
    int first;
    
    n --;

    if(n >= 0){
        if(A[n] == x)
            return n;
        else 
            first = search(A, n, x);
    }
    else
        return -1;
    return first;

}
//for prob num 4
int search_sorted(int *A, int n, int x){
    
    //If the element placed at index 0 is equal to the value of x
    //we then + 1 to the values in the array and then shift them 
    //to the right by sigle step. with that we can search and evaluate
    //each element if it is equal to the value of x and display 
    //the current location of the element. and if it is not 
    //equal to the value of x, it will display -1
    int first;
    
    n --;

    if(n >= 0){
        if(A[n] == x)
            return n;
        else 
            first = search_sorted(A, n, x);
    }
    else
        return -1;
    return first;

}
//driver code
int main(){

    //calls the recursive fuction for counting vowels
    cout << "Problem number 1 \n"; 
	cout << "\n";
    cout << count_vowels("bLuEbErRy") << "\n"; // prints 3
    cout << count_vowels("sTrawbErRy") << "\n"; //prints 2
	cout << count_vowels("FaBies") << "\n"; //prints 3
	cout << count_vowels("AnGeLs") << "\n"; //prints 2
	cout << count_vowels("BebeLanCe") << "\n"; //prints 4
    cout << "\n";
    //calls the recursive fuction for binary to decimal
    cout << "Problem number 2 \n";
	cout << "\n";
    cout << binary_to_decimal("10100") << "\n"; // prints 20
	cout << binary_to_decimal("1001") << "\n"; // prints 9
	cout << binary_to_decimal("10110") << "\n"; // prints 22
	cout << binary_to_decimal("11100") << "\n"; // prints 28
	cout << binary_to_decimal("101001") << "\n"; // prints 41
    cout << "\n";
    //calls the recursive function for search
    cout << "Problem number 3 \n";
	cout << "\n";
    int A[] = {45, 65, 1052, 95, 43};
    cout << search(A, 3, 25) << "\n"; // prints -1
    cout << search(A, 3, 43) << "\n"; // prints -1
	cout << search(A, 20, 65) << "\n"; // prints 1
	cout << search(A, 75, 1055) << "\n"; // prints -1
	cout << search(A, 2, 25) << "\n"; // prints -1
    cout << "\n";
    //calls the recursive function for search sorted
    cout << "Problem number 4 \n";
	cout << "\n";
    int A1[] = {33, 56, 102, 165, 1022};
    int n = sizeof(A1)/sizeof(int);
    cout << search_sorted(A1, 1, 65) << "\n"; //prints -1
    cout << search_sorted(A1, 3, 1022) << "\n"; // prints -1
	cout << search_sorted(A1, 20, 200) << "\n"; //prints -1
	cout << search_sorted(A1, 2, 56) << "\n"; //prints 1
	cout << search_sorted(A1, 2, 578) << "\n"; //prints -1

    return 0;
}