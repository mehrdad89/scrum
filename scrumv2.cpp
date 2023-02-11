#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

double mean(vector<int> data) {
  double sum = 0;
  for (int i = 0; i < data.size(); i++) {
    sum += data[i];
  }
  return sum / data.size();
}

double standardDeviation(vector<int> data, double mean) {
  double sum = 0;
  for (int i = 0; i < data.size(); i++) {
    sum += pow(data[i] - mean, 2);
  }
  return sqrt(sum / data.size());
}

int main() {
  int sprints;
  cout << "Enter the number of sprints: ";
  cin >> sprints;
  vector<int> capacity;
  int capacityInput;
  cout << "Enter the capacity of each sprint: ";
  for (int i = 0; i < sprints; i++) {
    cin >> capacityInput;
    capacity.push_back(capacityInput);
  }

  double meanCapacity = mean(capacity);
  double standardDeviationCapacity = standardDeviation(capacity, meanCapacity);

  int futureSprints;
  cout << "Enter the number of future sprints: ";
  cin >> futureSprints;

  for (int i = 0; i < futureSprints; i++) {
      cout << "Predicted capacity for sprint " << sprints + i + 1 << ": " << meanCapacity + standardDeviationCapacity << endl;
  }

  return 0;
}
