#include <iostream>
#include <vector>
using namespace std;

static vector <double> Velocity {0, 0};
static vector <double> StartPosition {3.4 , 5.6};
static vector <double> EndPosition {0.0 , 0.0};

int main()
{
  cout<<"Enter the velocity of movement:"<< endl;
  cin>>Velocity[0];
  cin>>Velocity[1];
   
  cout << "The new position will be:" << endl;
  EndPosition[0] = StartPosition[0]+Velocity[0];
  EndPosition[1] = StartPosition[1]+Velocity[1];
  
  /*DEBUG LINES BELOW: COMMENT OUT WHEN NOT USING
  for (auto i : Velocity)
    cout << i << " ";
  cout<<endl<<endl;
  for (auto i : EndPosition)
    cout << i << " ";
  */
}
