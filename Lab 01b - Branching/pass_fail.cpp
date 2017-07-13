#include <string>
#include <iostream>
using namespace std;
int main
{
    float score, points;
    cout<< "What was your score"<<endl;
    cin>> score;
    cout<<"What was the total points"<<endl;
    cin>> points;
    float percent= ((score/points)*100);
    cout<< "Score: "<< percent;
    if(percent > 69 ){ cout<< " Pass"<<endl;
    }
    else (cout<< " Fail"<<endl);
    return 0;
    
}