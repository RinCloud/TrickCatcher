#include <iostream>
#include <string>

bool isPalindrome(int num){
    std::string str = std::to_string(num);
    int len = str.length();
    
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-i-1]){
            return false;
        }
    }
    return true;
}

int countPalindromes(int A, int B){
    int count = 0;
    for(int num=A; num<=B; num++){
        if(isPalindrome(num)){
            count++;
        }
    }
    return count;
}

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int result = countPalindromes(A, B);
    
    std::cout << result << std::endl;
    
    return 0;
}