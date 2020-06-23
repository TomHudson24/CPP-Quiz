#include "QuestionVault.h"

    QuestionVault::QuestionVault()
    {
        questionArray.push_back("How tall is the tallest building in the UK?\n");
        answerArray.push_back("A. The Ghurkin\tB. Buckingham Palace\nC. The Shard\tD. Heron Tower\n");
        questionArray.push_back("Which Marvel Superhero's introduction movie grossed the highest amount in their opening weekend at the box office?\n");
        answerArray.push_back("A. Captain America\tB. Iron Man\nC. Spiderman\t\tD. Black Panther\n");

    }

    void QuestionVault::QuestionPicker()
    {
        //pick at random from a bank of n questions
        int question = 1;
        
        //once you have the question get its answers
        if (question == 1) 
        {
            MatchAnswer(1);
        }
        else if (question == 2) 
        {
            MatchAnswer(2);
        }
    }
    
    void QuestionVault::MatchAnswer(int i)
    {
       
    
        if(i == 1)
        {
            std::cout << questionArray[i];
            std::cout << answerArray[i];
            AnswerQuestion(i);
        }
        else if(i == 2)
        {
        
        }
    }
    void QuestionVault::AnswerQuestion(int i)
    {
        char answer;
        std::cout << "\nAnswer Here (enter either A,B,C or D):";
        std::cin >> answer;
        if(i == 1){
        //answering Marvel Question
            if(answer == 'D' || answer == 'd')
            {
                std::cout << "Correct!\nYou gain 1 point!\n";
                info.SetPlayerScore(1);
                info.PrintPlayerScoreFromArray();
                //std::cout << "\nCurrent Player Score is: " << info.GetPlayerScore() << "\n";
            }
            else 
            {
                std::cout << "Incorrect.\nYou do not gain any points.\n";
            }

        } 

    }
#if 0
    char answer;
    int score = 0;

    std::cout << "Who Wants To Be a Millionaire\n\n";

    std::cout << "Question 1)\n\n";

    std::cout << "For ordering his favorite beverages on demand, LBJ had four buttons installed in the Oval Office labeled 'Coffee', 'Tea', 'Coke', and what?\n\n";

    std::cout << "A. Fresca   B. V8  \n";
    std::cout << "C. Yoo-hoo  D. A&W \n\n";

    std::cout << "Enter your answer: ";
    std::cin >> answer;

    if (answer == 'A' || answer == 'a') {

        score = score + 100;
        std::cout << "Correct!\n";
    }
#endif