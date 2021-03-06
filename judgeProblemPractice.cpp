#include "stdafx.h"
#include <iostream>
using namespace std;

double findAvg(int numOfJudges, int scores[10]) {

	//find highest and lowest scores

	int hi = -999;
	int lo = 999;
	int tot = 0;
	double avg;

	for (int i = 0; i < numOfJudges; i++) {
		if (scores[i] > hi)
		{
			hi = scores[i];
		}

		if (scores[i] < lo) 
		{
			lo = scores[i];
		}
		tot += scores[i];
	}

	avg = ((tot - hi - lo) / (double)(numOfJudges - 2));

	return avg;
}



int main()
{
	// reads in integer numbers
	int numOfJudges;
	
	cout << "Number of Judges: " << endl;
	cin >> numOfJudges;

	// 
	int scores[10];
	int contNum;
	int highestCont;
	double bestscore = -1;

	while (true) 
	{
		cin >> contNum;

		double avscore; 
	

		if (contNum > 0) {

			for (int i = 0; i < numOfJudges; i++) {
				cin >> scores[i];
			}
			avscore = findAvg(numOfJudges, scores);
			cout << "Contestant " << contNum << " " << avscore << endl;

		}
		else {
			break;
		}

		
		
		if (avscore > bestscore)
		{
			bestscore = avscore;
			highestCont = contNum;
		}
	}

	cout << "Contestant " << highestCont << " had the highest score. ";

    return 0;
}

