#include<vector>
//namespace example_1 {
    /*
    Multiplies input vector by 2.0
    input: const and passed by reference
    output: returns a copy
    */
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
//}


