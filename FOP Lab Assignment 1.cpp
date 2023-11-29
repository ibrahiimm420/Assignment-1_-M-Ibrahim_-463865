// Task 1

//#include<iostream>
//using namespace std;
//
//int main(){
//
//    int num;
//    
//    cout << "Enter an integer: ";
//    cin >> num;
//    
//    cout << "Factors of " << num << " are: ";
//    
//    if(num<0){
//    	num = -num;
//    	cout<<"-1";
//	}
//
//    for (int i = 1; i <= num; ++i) {
//        if (num % i == 0) {
//            cout << i << ",";
//        }
//    }
//
//    return 0;
//}

// Task 2

//#include <iostream>
//
//int main() {
// int x = 5;
// int y = 10;
// if (x == 5)
// if (y == 10)
// std::cout << "x is 5 and y is 10" << std::endl;
// else
// std::cout << "x is not 5" << std::endl;
// return 0;
//}

// Task 3

//#include <iostream>
//using namespace std;
//
//int main() {
//    
//    int num;
//
//    cout << "Enter any integer: ";
//    cin >> num;
//
//    int result = (num > 10 && num <= 20) ? 1 : 0;  // This mean that if the condition in the brackets is true output will be 1 otherwise 0
//
//    cout << "Result: " << result <<endl;
//
//    return 0;
//}

// Task 6

//#include <iostream>
//using namespace std;
//
//int main() {
//    
//    int dividend, divisor;
//    cout << "Enter dividend: ";
//    cin >> dividend;
//    cout << "Enter divisor: ";
//    cin >> divisor;
//
//    if (dividend < divisor) {
//        cout << "Invalid input. Dividend must be greater than divisor." <<endl;
//        return 1;  
//    }
//
//    int quotient = 0;
//    while (dividend >= divisor) {
//        dividend -= divisor;
//        quotient++;
//    }
//
//    cout << "Quotient: " << quotient <<endl;
//    cout << "Remainder: " << dividend <<endl;
//
//    return 0;
//}
//
//// Task 4
//
//#include <iostream>
//using namespace std;
//
//bool isPrime(int number) {
//    if (number <= 1) {
//        return false;
//    }
//    for (int i = 2; i * i <= number; ++i) {
//        if (number % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int N;
//    
//    cout << "Enter a positive integer N: ";
//    cin >> N;
//
//    int largestPrime = 0;
//    while (N > 1) {
//        if (isPrime(N)) {
//            largestPrime = N;
//            break;
//        }
//        --N;
//    }
//
//    if (largestPrime != 0) {
//        cout << "The largest prime number less than or equal to N is: " << largestPrime <<endl;
//    } else {
//        cout << "No prime number found for N <= 1" <<endl;
//    }
//
//    return 0;
//}
//
//// Task 5
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//void rotateString(std::string& str) {
//    char temp = str.back();  
//    str.pop_back();          
//    str = temp + str;        
//}
//
//int main() {
//    
//    string str1, str2;
//    cout << "Enter the first string: ";
//    cin >> str1;
//    cout << "Enter the second string: ";
//    cin >> str2;
//
//    if (str1 == str2) {
//        cout << "The strings are equal. Rotating one of the strings to make them unequal." <<endl;
//
//        rotateString(str1);
//
//        cout << "Modified first string: " << str1 <<endl;
//        cout << "Modified second string: " << str2 <<endl;
//    } else {
//        cout << "The strings are already unequal." <<endl;
//    }
//
//    return 0;
//}
//
//// Task 7
//
//#include <iostream>
//#include <string>
//#include <unordered_set>
//using namespace std;
//
//string removeDuplicates(const std::string& input) {
//    string result = "";
//    unordered_set<char> uniqueChars;
//
//    for (char ch : input) {
//        char lowerCaseChar = std::tolower(ch);
//
//        if (uniqueChars.find(lowerCaseChar) == uniqueChars.end()) {
//            result += ch;
//
//            
//            uniqueChars.insert(lowerCaseChar);
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    
//    string input;
//    cout << "Enter a string with both lowercase and uppercase characters: ";
//    getline(cin, input);
//
//    std::string result = removeDuplicates(input);
//
//    cout << "Resultant string after removing duplicates: " << result <<endl;
//
//    return 0;
//}
//
//// Task 10
//
//#include <iostream>
//using namespace std;
//
//void bubbleSort(int arr[], int size) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    const int size = 6;
//    int arr[size];
//
//    cout << "Enter 6 integers for the array:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//    
//    bubbleSort(arr, size);
//
//    cout << "Sorted array using Bubble Sort: ";
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
//}

// Task 9

#include <iostream>
#include <algorithm>
using namespace std;

bool findTriplet(int arr[], int size, int targetSum) {
    sort(arr, arr + size);

    for (int i = 0; i < size - 2; ++i) {
        int left = i + 1;
        int right = size - 1;

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];

            if (currentSum == targetSum) {
                cout << "Triplet found: " << arr[i] << ", " << arr[left] << ", " << arr[right] <<endl;
                return true;
            } else if (currentSum < targetSum) {
                ++left;
            } else {
                --right;
            }
        }
    }

    cout << "No triplet found with the given sum." <<endl;
    return false;
}

int main() {
    const int size = 6;
    int arr[size];

    cout << "Enter 6 integers for the array:" <<endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int targetSum;
    cout << "Enter the target sum X: ";
    cin >> targetSum;

    findTriplet(arr, size, targetSum);

    return 0;
}


















