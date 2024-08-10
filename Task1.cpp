#include <iostream>
#include <string>
void displayIntroduction();
void displayQuestion(int index, const std::string questions[], const std::string answers[], int& score);
bool checkAnswer(const std::string& userAnswer, const std::string& correctAnswer);
void displayFinalscore(int score, int NUM_QUESTIONS);
int main() {
    const int NUM_QUESTIONS = 8; 
    std::string questions[NUM_QUESTIONS] = {
        "How do you create a single-line comment in C++?",
        "Which header file is needed for input and output in C++?",
        "How do you declare a double variable in C++?",
        "What is the correct way to end a statement in C++?",
        "What keyword is used to define a constant value in C++?",
        "How do you declare a character variable in C++?",
        "What does std::cin do in C++?",
        "What is the purpose of the return 0; statement in the main() function?"
    };
    std::string answers[NUM_QUESTIONS] = {
        "//",
        "<iostream>",
        "double myVariable;",
        ";",
        "const",
        "char myChar;",
        "It reads input from the user.",
        "It indicates that the program ended successfully."
    };
    int score = 0; 
    displayIntroduction();
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        displayQuestion(i, questions, answers, score);
    }
    displayFinalscore(score, NUM_QUESTIONS);

    return 0;
}
 void displayIntroduction(){
    std::cout<<"Welcome to ultimate C++ quiz challange !"<<std::endl;
    std::cout<<"Test your knowledge of C++ with these exciting questions !"<<std::endl;
 }
void displayQuestion(int index, const std::string questions[], const std::string answers[], int& score) {
    std::string userAnswer;
    std::cout << questions[index] << std::endl;
    std::cout << "Your answer: ";
    std::getline(std::cin, userAnswer); 
    if (checkAnswer(userAnswer, answers[index])) {
        std::cout << "Correct! Well Done" << std::endl;
        score++; 
    } else {
        std::cout << "Incorrect. The correct answer is: " << answers[index] << std::endl;
    }
}
bool checkAnswer(const std::string& userAnswer, const std::string& correctAnswer) {
    return userAnswer == correctAnswer;
}
void displayFinalscore(int score, int NUM_QUESTIONS){
std::cout<<"QUIZ OVER !"<<std::endl;
std::cout<<"You Scored "<<score<<"Out of"<<NUM_QUESTIONS<<" . "<<std::endl;
if(score==NUM_QUESTIONS){
    std::cout<<"CONGRATULATIONS ! You answered all th questions correctly !"<<std::endl;
}else if(score>NUM_QUESTIONS/2){
    std::cout<<"GREAT JOB ! You got more than half of the questions right !"<<std::endl;
}else{
    std::cout<<"GOOD EFFORT ! Try again to improve your score !"<<std::endl;
}
}