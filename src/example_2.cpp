#include <vector>


/*
Multiplies all entries of input array of arrays by 2.0
input: const nested vector (in python nested list can be given as in input)
output: nested vector 
*/
std::vector<std::vector<double>> modify_nested_list(const std::vector<std::vector<double>>& input){
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