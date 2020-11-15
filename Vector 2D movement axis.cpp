#include <iostream>
#include <vector>
using namespace std;

//Can also be done by creating classes for each Point and Vector of movement. IN classes we can set const in functions, when we don't want to modify variable.

static vector <double> Velocity {0, 0};
static vector <double> StartPosition {3.4 , 5.6};
static vector <double> EndPosition {0.0 , 0.0};

int main()
{
  cout<<"Enter the velocity of movement:"<< endl;
  cin>>Velocity[0];
  cin>>Velocity[1];
  for (auto i : Velocity)
    cout << i << " ";
  cout << endl;

     
  cout << "The new position will be:" << endl;
  EndPosition[0] = StartPosition[0]+Velocity[0];
  EndPosition[1] = StartPosition[1]+Velocity[1];
  for (auto i : EndPosition)
    cout << i << " ";
  cout << endl;

  cout << "The distance travelled / lenght of the vector is: " << endl;
  float Length = sqrt(Velocity[0]*Velocity[0]+Velocity[1]*Velocity[1]);

  cout << Length << " units of distance"<<endl;             
}
