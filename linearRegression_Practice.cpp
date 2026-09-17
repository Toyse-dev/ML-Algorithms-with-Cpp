#include <iostream>
#include <vector>

int main () {
	
	double prediction(const std::vector<double>& weight,
	double bias,
	const std::vector<double>* x) {
		double predict = bias;
		
		for (size_t j = 0; j < weight.size(); ++j) {
			predict += weight[j] * x[j];
		}
		return predict;
	}
	
	return 0;
}
