#include <iostream>
#include <string>
#include <vector>
#include "QuestionVault.h"
#include "Information.h"


int main()
{
	bool running = true;
	
	//game loop in here
	while (running)
	{
		//Variables set up

		//question vault set up
		QuestionVault qVault = QuestionVault();

		//keep track of peoples names set up
		Information info = Information();
		
		//welcome message 
		std::cout << "Hello! Welcome to Tom's Quiz game!\n" << "Your host, Tom-bot, will ask you questions and if you get the answers right you earn a point!\n";
		std::cout << "There is a leaderboard so you can check out how you stack up against previous contestents!\n";

		//ask for name and store it in an array of names that link to scores
		//playerName variable
		std::string name;
		std::cout << "First, please type your name in:";
		std::cin >> name;
		info.AddNameToList(name);
		info.AddScoreToList(info.GetPlayerScore());
		
		bool letsPlay = true;
		while(letsPlay == true){
			//See leaderboard or get asked a question?
			std::cout << "Are you ready for a question or do you want to see the leaderboard? (type 1 or 2 to select option)\n1. Question\n2. Leaderboard\n";
			int response;
			std::cin >> response;
			if (response == 1)
			{
				//question time	
				

				qVault.QuestionPicker();
				
			}
			else if (response == 2)
			{
				info.PrintNamesAndScores();
			}
			else
			{
				//invalid response
				std::cout << "invalid response, try again\n";
			}
		}
		


		//stop the loop
		std::cout << "Press 1 to continue or 2 to stop.\n";
		int keyboardInput;
		std::cin >> keyboardInput;
		if(keyboardInput == 2)
		{
			running = false;
		}else
		{
			//keep playing
			std::cout << "Great, let's keep playing!\n";
			//ask another question
		}
	}

}