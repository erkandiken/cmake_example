#include<vector>

/*
This function can accept a python list as a parameter
*/
std::vector<double> multiplyByTwo(const std::vector<double>& input){
    std::vector<double> output;
    std::transform(
        input.begin(), 
        input.end(),
        std::back_inserter(output),
        [](double x) -> double { 
            return 2.0 * x;
            }
        );
    return output;
}

/*
This function can accept a python list and an integer as parameters
*/
std::vector<double> multiplyByFactor(const std::vector<double>& input, int factor){
    std::vector<double> output;
    std::transform(
        input.begin(), 
        input.end(),
        std::back_inserter(output),
        [=](double x) -> double { 
            return factor * x;
            }
        );
    return output;
}

