#include<iostream>;
using namespace std;

// Function to check water temperature
bool isWaterSafe(float temperature, float threshold) {
    return temperature <= threshold;
}

int main() {
    // Define water temperature threshold
    const float safeTemperatureThreshold = 25.0; // Adjust threshold as needed

    // Simulate water temperature reading (you can replace this with real sensor data)
    float waterTemperature;
    cout << "Enter water temperature: ";
    cin >> waterTemperature;

    // Check if water is safe
    if (isWaterSafe(waterTemperature, safeTemperatureThreshold)) {
        cout << "Water is safe.\n";
    } else {
        cout << "Water is not safe! Please take caution.\n";
    }
}
