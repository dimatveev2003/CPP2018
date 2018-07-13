#include <iostream>
using namespace std;

class Stadium
{	
	void Clear()
	{
		cout << "Clear the stadium" << endl;
	}
	virtual void CoverField() = 0;
	virtual void MarkUpField() = 0;
	public:
	void PrepareToMatch()
	{
		Clear();
		CoverField();
		MarkUpField();
	}
};

class HockeyStadium : public Stadium
{
	void CoverField()
	{
		cout << "Cover field with ice" << endl;
	}	
	void MarkUpField()
	{
		cout << "Mark up field for hockey" << endl;
	}
};

class FootballStadium : public Stadium
{
	void CoverField()
	{
		cout << "Cover field with grass" << endl;
	}	
	void MarkUpField()
	{
		cout << "Mark up field for football" << endl;
	}	
};

class FigSkatingStadium : public Stadium
{
	void CoverField()
	{
		cout << "Cover field with ice" << endl;
	}	
	void MarkUpField()
	{
		cout << "Do not mark up field" << endl;
	}
};


int main() {
	// your code goes here
	Stadium* stad[] =
	{
		new HockeyStadium(), new FootballStadium(), new FigSkatingStadium()
	};
	for (int i = 0; i < 3; i++)
	{
		stad[i]->PrepareToMatch();
		cout << "---------------------" << endl;
	}
	
	return 0;
}
