#include <iostream> // to allow using cout
#include <vector> // to use a vector

//Al-Taimee Hassan

int main () {
    std::vector<bool> A = {0, 0, 0, 0, 1, 1, 1, 1};
    
    std::vector<bool> B = {0, 0, 1, 1, 0, 0, 1, 1};

    std::vector<bool> C = {0, 1, 0, 1, 0, 1, 0, 1};

    int temp = 0;
    do {
        std::cout << "(A and B) or (A and C): " << ((A[temp] && B[temp]) || (A[temp] && C[temp])) << "\n";

        std::cout << "(A and C) and (B and !C): " << ((A[temp] && C[temp]) && (B[temp] && !C[temp])) << "\n";
        
        std::cout << "(A or B) and !(B or C): " << ((A[temp] || B[temp]) && !(B[temp] || C[temp])) << "\n";
        
        std::cout << "(A or (B and C)) and (!A and !B): " << ((A[temp] || (B[temp] && C[temp])) && (!A[temp] && !B[temp])) << "\n";

        std::cout << "((B and C) or (C and A)) and (!(A or B) and C): " << (((B[temp] && C[temp]) || (C[temp] 
        && A[temp])) && (!(A[temp] || B[temp]) && C[temp])) << "\n" << "\n";
        temp++;
    }
    while(temp < 8);
    
}
