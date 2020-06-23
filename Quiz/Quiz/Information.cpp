#include "Information.h"

Information::Information()
{
	//put default names and scores in here

	//default names
	namesArray.push_back("Ben");
	namesArray.push_back("Daisy");
	namesArray.push_back("Kai");
	namesArray.push_back("CJ");
	namesArray.push_back("Cheyna");

	//default scores
	scoresArray.push_back(10);
	scoresArray.push_back(4);
	scoresArray.push_back(7);
	scoresArray.push_back(3);
	scoresArray.push_back(9);
}

void Information::AddNameToList(std::string name)
{
	namesArray.push_back(name);
}

void Information::AddScoreToList(int i)
{
	scoresArray.push_back(i);
}

void Information::PrintNamesAndScores()
{
	//show leaderboard
	std::cout << "Names\tScore\n";
	//loop through names and scores array
	for (int i = 0; i < namesArray.size(); i++) {
		std::cout << namesArray[i] << "\t" << scoresArray[i] << "\n";
	}
}

std::string Information::GetPlayerName()
{
	return playerName;
}

int Information::GetPlayerScore()
{
	return playerScore;
}

void Information::SetPlayerScore(int i)
{
	playerScore += i;
	
}

void Information::PrintPlayerScoreFromArray()
{
	std::cout << scoresArray[6 - 1] << "\n";
}
