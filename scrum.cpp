#include <iostream>
#include <vector>

using namespace std;

double velocity(vector<double> &efforts, vector<double> &availabilities) {
  double velocity = 0.0;
  for (int i = 0; i < efforts.size(); i++) {
    velocity += efforts[i] / availabilities[i];
  }
  velocity /= efforts.size();
  return velocity;
}

double predictEffort(double velocity, double availability) {
  return velocity * availability;
}

int main() {
  vector<double> efforts = {10, 15, 20, 25};
  vector<double> availabilities = {40, 35, 30, 25};
  double teamVelocity = velocity(efforts, availabilities);
  double sprintAvailability = 30;
  double predictedEffort = predictEffort(teamVelocity, sprintAvailability);
  cout << "Predicted effort for the next sprint: " << predictedEffort << endl;
  return 0;
}
