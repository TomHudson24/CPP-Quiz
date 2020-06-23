#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Information.h"
class QuestionVault
{
private:
	std::vector<std::string> questionArray;
	std::vector<std::string> answerArray;

	void MatchAnswer(int i);
	void AnswerQuestion(int i);

	Information info = Information();

public:

	QuestionVault();

	void QuestionPicker();

	

};

