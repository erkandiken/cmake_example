#include <vector>

/*
This function can accept a python list of list as a parameter
*/
std::vector<std::vector<double>> multiplyNestedVectorByTwo(const std::vector<std::vector<double>>& input){
    std::vector<std::vector<double>> output;
    std::transform(
        input.begin(),
        input.end(),
        std::back_inserter(output),
        [](const std::vector<double>& iv){
            std::vector<double> ov;
            std::transform(
                iv.begin(),
                iv.end(),
                std::back_inserter(ov),
                [](double x) -> double {
                    return x * 2.0;
                });
            return ov;
        });
    return output;
}