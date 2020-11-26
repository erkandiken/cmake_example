#include<vector>

std::vector<double> modify(const std::vector<double>& input){
    std::vector<double> output;
    std::transform(
        input.begin(), 
        input.end(),
        std::back_inserter(output),
        [](double x) -> double { 
            return 2.*x;
            }
        );
    return output;
}

std::vector<double> multiplyWithScalar(const std::vector<double>& input){
    std::vector<double> output;
    std::transform(
        input.begin(), 
        input.end(),
        std::back_inserter(output),
        [](double x) -> double { 
            return 2.*x;
            }
        );
    return output;
}



