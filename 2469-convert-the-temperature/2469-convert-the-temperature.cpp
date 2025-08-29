class Solution {
public :
    vector<double> convertTemperature(double celsius) {
        double f = celsius * 1.8 + 32.0;
        double k = celsius + 273.15;
        return {k, f};
    }
};
