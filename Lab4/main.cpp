#include <iostream>
#include <vector>

std::vector<int> rocket = {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1}; 
std::vector<int> astronaut = {0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1};
std::vector<int> trained = {0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
std::vector<int> educated = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};

int helper_implies_statement_one(int &holder) {
    return !(rocket[holder] && !astronaut[holder]);
}

int helper_implies_statement_two(int &holder) {
    return !(astronaut[holder] && !trained[holder]);
}

int helper_implies_statement_three(int &holder) {
    return !(trained[holder] && !educated[holder]);
}

int helper_conclusion(int &holder) {
    return !(educated[holder] && !rocket[holder]);

}

void helper_check_valid(int &holder) {
    if(helper_implies_statement_one(holder) == 1 && helper_implies_statement_two(holder) == 1
         && helper_implies_statement_three(holder) == 1 && helper_conclusion(holder) == 0) {
             std::cout << "This statement is invalid because the" << 
                " PROPOSITIONAL statements are true, but the CONCLUSION is false." << "\n" << "\n";
            }
        
        else {
            std::cout << "This statement is valid." << "\n" << "\n";
        }
}

int main() {
    int temp = 0;

    std::cout << "------------------------" << "\n";

    std::cout << "Welcome to the Validator experiment! " << "\n\n"; 

    std::cout << "------------------------" << "\n";
    
    do {
        std::cout << "Rocket: " << rocket[temp] << "\n";
        std::cout << "Astronaut: " << astronaut[temp] << "\n";
        std::cout << "Trained: " << trained[temp] << "\n";
        std::cout << "Educated: " << educated[temp] << "\n" << "\n";
        
        std::cout << "Propositional Statements: " << "\n";

        std::cout << "If someone has a rocket, that implies they're an astronaut. " << helper_implies_statement_one(temp) << "\n";
        std::cout << "If someone is an astronaut, that implies they’re highly trained. " << helper_implies_statement_two(temp) << "\n";
        std::cout << "If someone is highly trained, that implies they’re educated. " << helper_implies_statement_three(temp) << "\n";
        
        std::cout << "Conclusion Statement: " << "\n";
        std::cout << "A person is educated, that implies they have a rocket. " << helper_conclusion(temp) << "\n";

        helper_check_valid(temp);

        temp++;
    }

    while(temp < 16);

    std::cout << "------------------------" << "\n";

    std::cout << "Thank you for using the Validator experiment!" << "\n\n";

    std::cout << "------------------------" << "\n";
    
    return 0;

}
