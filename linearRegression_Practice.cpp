#include <iostream>
#include <vector>

double predictOne(const std::vector<double>& weight,
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
	
	//Loss function
	double computeLoss(const std::vector<double>& predictions, const std::vector<double>& actual) {
		double total = 0.0;
		for (size_t i = 0; i < predictions.size(); ++i) {
			double error = predictions[i] - actual[i];
			total += error * error;
		}
		return total / predictions.size();
	}

int main () {
	
	return 0;
}
