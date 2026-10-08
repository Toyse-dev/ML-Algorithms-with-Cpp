#include <iostream>
#include <vector>

double predictOne(const std::vector<double>& x, const std::vector<double>& w, double b) {
	double total = b;
	for (size_t i = 0; i < w.size(); ++i) {
		total += w[i] * x[i];
	}
	return total;
}

std::vector<double> predictMany(const std::vector<std::vector<double>>& X, std::vector<double>& weight, double bias) {
	std::vector<double> results;
	for (const auto& row : X) {
		double predict = bias;
		for (size_t i = 0; i < weight.size(); ++i) {
			predict += weight[i] * row[i];
		}
		results.push_back(predict);
	}
	return results;
}

int main() {
	std::vector<std::vector<double>> X = { {0, 0}, {1, 1}, {2, 2}, {3, 3} };
	std::vector<double> w = {2, -1};
	double b = 5;
	
	std::vector<double> predictions = predictMany(X, w, b);

	// Print calculation steps
	for (size_t i = 0; i < X.size(); ++i) {
		std::cout << "Sample " << i << ": bias (" << b << ")";
		for (size_t j = 0; j < w.size(); ++j) {
			// Handles negative weight instead of just + -1
			if (w[j] >= 0) std::cout << " + " << w[j] << " * " << X[i][j];
			else std::cout << " - " << -w[j] << " * " << X[i][j];
		}
		std::cout << " = " << predictions[i] << std::endl;
	}
	
	return 0;
}
