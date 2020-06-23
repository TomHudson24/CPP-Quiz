#pragma once
#include <iostream>
#include <string>
#include <vector>
class Information
{
private:
	std::vector<std::string> namesArray;
	std::vector<int> scoresArray;
	std::string playerName;
	int playerScore = 0;
public:
	

	Information();

	void AddNameToList(std::string name);

	void AddScoreToList(int i);

	void PrintNamesAndScores();

	std::string GetPlayerName();

	int GetPlayerScore();

	void SetPlayerScore(int i);

	void PrintPlayerScoreFromArray();
};

