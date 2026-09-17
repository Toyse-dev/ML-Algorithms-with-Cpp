#include <iostream>
#include <vector>

//First function: Predict one sample
double prediction(const std::vector<double>& weight,
	double bias,
	const std::vector<double>& x) {
		double predict = bias;
		
		for (size_t j = 0; j < weight.size(); ++j) {
			predict += weight[j] * x[j];
		}
		return predict;
	}
	
	// Predict many
	std::vector<double> predictAll(const std::vector<std::vector<double>>& X,
	double bias,
	std::vector<double>& weight) {
		std::vector<double> results;
		for (const auto& row : X) {
			double predict = bias;
			for (size_t j = 0; j < weight.size(); ++j) {
				predict += weight[j] * row[j];
			}
			results.push_back(predict);
		}
		return results;
	}

int main () {
	
	return 0;
}
