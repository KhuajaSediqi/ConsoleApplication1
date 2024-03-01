#include <iostream>
#include <string>
using namespace std;
class movieData
{
public:
	struct
	{
		string tittle;
		string director;
		int yearsReleased;
		int runningTime;
	};
};
int main()
{
	movieData movie1;
	movie1.tittle = "Harry Potter";
	movie1.director = "James Bond";
	movie1.yearsReleased = 2001;
	movie1.runningTime = 152;
	cout << movie1.tittle << "\n" << movie1.director << "\n" << movie1.yearsReleased << "\n" << movie1.runningTime << endl;

	movieData movie2;
	movie2.tittle = "The Dark Knight";
	movie2.director = "Christopher Nolan";
	movie2.yearsReleased = 2008;
	movie2.runningTime = 399;
	cout << movie2.tittle << "\n" << movie2.director << "\n" << movie2.yearsReleased << "\n" << movie2.runningTime << endl;

};
